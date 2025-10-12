# Install script for directory: /home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/src/manipulator_utils

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/install/manipulator_utils")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/manipulator_utils/environment" TYPE FILE FILES "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/build/manipulator_utils/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/manipulator_utils/environment" TYPE FILE FILES "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/build/manipulator_utils/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/manipulator_utils-0.0.0-py3.12.egg-info" TYPE DIRECTORY FILES "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/build/manipulator_utils/ament_cmake_python/manipulator_utils/manipulator_utils.egg-info/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/manipulator_utils" TYPE DIRECTORY FILES "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/src/manipulator_utils/manipulator_utils/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/install/manipulator_utils/lib/python3.12/site-packages/manipulator_utils"
      )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/manipulator_utils" TYPE PROGRAM FILES "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/src/manipulator_utils/manipulator_utils/angle_conversion.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/build/manipulator_utils/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/manipulator_utils")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/build/manipulator_utils/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/manipulator_utils")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/manipulator_utils/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/manipulator_utils/environment" TYPE FILE FILES "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/build/manipulator_utils/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/manipulator_utils/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/manipulator_utils/environment" TYPE FILE FILES "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/build/manipulator_utils/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/manipulator_utils" TYPE FILE FILES "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/build/manipulator_utils/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/manipulator_utils" TYPE FILE FILES "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/build/manipulator_utils/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/manipulator_utils" TYPE FILE FILES "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/build/manipulator_utils/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/manipulator_utils" TYPE FILE FILES "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/build/manipulator_utils/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/manipulator_utils" TYPE FILE FILES "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/build/manipulator_utils/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/build/manipulator_utils/ament_cmake_index/share/ament_index/resource_index/packages/manipulator_utils")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/manipulator_utils/cmake" TYPE FILE FILES
    "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/build/manipulator_utils/ament_cmake_core/manipulator_utilsConfig.cmake"
    "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/build/manipulator_utils/ament_cmake_core/manipulator_utilsConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/manipulator_utils" TYPE FILE FILES "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/src/manipulator_utils/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/build/manipulator_utils/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
