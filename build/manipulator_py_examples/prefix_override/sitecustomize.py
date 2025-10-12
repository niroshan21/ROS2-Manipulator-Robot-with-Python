import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/rajitha-niroshan/FYP/Repos/Others/ROS2-Manipulator-Robot-with-Python/install/manipulator_py_examples'
