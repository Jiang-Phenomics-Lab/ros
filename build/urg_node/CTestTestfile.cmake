# CMake generated Testfile for 
# Source directory: /home/autolabor/catkin_ws/src/driver/lidar/urg_node
# Build directory: /opt/autolabor/ros/catkin_ws/build/urg_node
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_urg_node_roslint_package "/opt/autolabor/ros/catkin_ws/build/urg_node/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/opt/autolabor/ros/catkin_ws/build/urg_node/test_results/urg_node/roslint-urg_node.xml" "--working-dir" "/opt/autolabor/ros/catkin_ws/build/urg_node" "--return-code" "/opt/ros/melodic/share/roslint/cmake/../../../lib/roslint/test_wrapper /opt/autolabor/ros/catkin_ws/build/urg_node/test_results/urg_node/roslint-urg_node.xml make roslint_urg_node")
set_tests_properties(_ctest_urg_node_roslint_package PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/melodic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/melodic/share/roslint/cmake/roslint-extras.cmake;67;catkin_run_tests_target;/home/autolabor/catkin_ws/src/driver/lidar/urg_node/CMakeLists.txt;82;roslint_add_test;/home/autolabor/catkin_ws/src/driver/lidar/urg_node/CMakeLists.txt;0;")
add_test(_ctest_urg_node_roslaunch-check_launch_urg_lidar.launch "/opt/autolabor/ros/catkin_ws/build/urg_node/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/opt/autolabor/ros/catkin_ws/build/urg_node/test_results/urg_node/roslaunch-check_launch_urg_lidar.launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /opt/autolabor/ros/catkin_ws/build/urg_node/test_results/urg_node" "/opt/ros/melodic/share/roslaunch/cmake/../scripts/roslaunch-check -o \"/opt/autolabor/ros/catkin_ws/build/urg_node/test_results/urg_node/roslaunch-check_launch_urg_lidar.launch.xml\" \"/home/autolabor/catkin_ws/src/driver/lidar/urg_node/launch/urg_lidar.launch\" ")
set_tests_properties(_ctest_urg_node_roslaunch-check_launch_urg_lidar.launch PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/melodic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/melodic/share/roslaunch/cmake/roslaunch-extras.cmake;66;catkin_run_tests_target;/home/autolabor/catkin_ws/src/driver/lidar/urg_node/CMakeLists.txt;85;roslaunch_add_file_check;/home/autolabor/catkin_ws/src/driver/lidar/urg_node/CMakeLists.txt;0;")
subdirs("gtest")