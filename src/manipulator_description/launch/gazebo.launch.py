import os
from pathlib import Path
from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, SetEnvironmentVariable, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration, Command
from launch.launch_description_sources import PythonLaunchDescriptionSource

from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def generate_launch_description():
    # Get the shared directory of the bumperbot_description package.
    # This is where URDF, meshes, and other robot description files are stored.
    bumperbot_description_dir = get_package_share_directory("bumperbot_description")

    # Build the absolute path to the robot description file (xacro format).
    urdf_file_dir = os.path.join(bumperbot_description_dir, "urdf", "bumperbot.urdf.xacro")

    # Declare a launch argument called "model".
    # Default = the path to bumperbot.urdf.xacro, but the user can override it at runtime. It means that if the user does not provide a different value for the "model" argument when launching, the default value will be used.
    model_arg = DeclareLaunchArgument(
        name='model',
        default_value=urdf_file_dir,
        description='Absolute path to robot URDF file'
    )

    # Set the GZ_SIM_RESOURCE_PATH environment variable so Gazebo can locate meshes and other resources.
    # Here we add the parent folder of bumperbot_description to the search path.
    gazebo_resource_path = SetEnvironmentVariable(
        name='GZ_SIM_RESOURCE_PATH',
        value=[str(Path(bumperbot_description_dir).parent.resolve())]
    )

    # Convert the .xacro file into a URDF XML string at launch time.
    # The "robot_description" parameter is used by robot_state_publisher and other nodes.
    robot_description = ParameterValue(
        Command(['xacro ', LaunchConfiguration('model')]),
        value_type=str
    )

    # Launch the robot_state_publisher node.
    # This publishes the kinematic tree (TF frames) of the robot based on the URDF description.
    robot_state_publisher_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[{"robot_description": robot_description}],
    )

    # Launch Gazebo (Ignition/GZ Sim) by including its default launch file from ros_gz_sim.
    # We pass arguments to run in verbose mode (-v 4), reset the simulation (-r), 
    # and start with an empty world (empty.sdf).
    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            os.path.join(get_package_share_directory('ros_gz_sim'), 'launch', 'gz_sim.launch.py')
        ]),
        launch_arguments=[("gz_args", [" -v 4", " -r", " empty.sdf"])]
    )

    # Spawn the robot entity into Gazebo. Spawn means to insert the robot model into the simulation.
    # Here we use the "create" executable from ros_gz_sim to spawn the robot
    # The "create" executable reads the robot description from the /robot_description topic
    # and inserts it into the simulation with the name "bumperbot".
    gz_spawn_entity = Node(
        package='ros_gz_sim',
        executable='create',
        output='screen',
        arguments=['-topic', 'robot_description',
                   '-name', 'bumperbot'],
    )

    # Bridge topics between ROS 2 and Gazebo.
    # Here we bridge only the simulation clock so ROS 2 uses Gazebo's simulation time.
    # Format: <topic_name>@<ros2_msg_type>[<gz_msg_type]
    gz_ros2_bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            "/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock", # Bridge the /clock topic
        ]
    )

    # Return the LaunchDescription that includes all launch actions/nodes.
    return LaunchDescription([
        model_arg,
        gazebo_resource_path,
        robot_state_publisher_node,
        gazebo,
        gz_spawn_entity,
        gz_ros2_bridge,
    ])
