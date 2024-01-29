# CMake generated Testfile for 
# Source directory: /home/autolabor/catkin_ws/src/driver/joystick/joystick_drivers/wiimote
# Build directory: /opt/autolabor/ros/catkin_ws/build/wiimote
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_wiimote_roslint_package "/opt/autolabor/ros/catkin_ws/build/wiimote/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/opt/autolabor/ros/catkin_ws/build/wiimote/test_results/wiimote/roslint-wiimote.xml" "--working-dir" "/opt/autolabor/ros/catkin_ws/build/wiimote" "--return-code" "/opt/ros/melodic/share/roslint/cmake/../../../lib/roslint/test_wrapper /opt/autolabor/ros/catkin_ws/build/wiimote/test_results/wiimote/roslint-wiimote.xml make roslint_wiimote")
set_tests_properties(_ctest_wiimote_roslint_package PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/melodic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/melodic/share/roslint/cmake/roslint-extras.cmake;67;catkin_run_tests_target;/home/autolabor/catkin_ws/src/driver/joystick/joystick_drivers/wiimote/CMakeLists.txt;36;roslint_add_test;/home/autolabor/catkin_ws/src/driver/joystick/joystick_drivers/wiimote/CMakeLists.txt;0;")
subdirs("gtest")
