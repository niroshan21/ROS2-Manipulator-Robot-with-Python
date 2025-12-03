import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/rajitha-niroshan/FYP/Repos/Others/our_arm_v2/install/manipulator_py_examples'
