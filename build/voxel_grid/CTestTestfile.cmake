# CMake generated Testfile for 
# Source directory: /home/autolabor/catkin_ws/src/navigation/voxel_grid
# Build directory: /opt/autolabor/ros/catkin_ws/build/voxel_grid
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_voxel_grid_gtest_voxel_grid_tests "/opt/autolabor/ros/catkin_ws/build/voxel_grid/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/opt/autolabor/ros/catkin_ws/build/voxel_grid/test_results/voxel_grid/gtest-voxel_grid_tests.xml" "--return-code" "/home/autolabor/catkin_ws/devel/.private/voxel_grid/lib/voxel_grid/voxel_grid_tests --gtest_output=xml:/opt/autolabor/ros/catkin_ws/build/voxel_grid/test_results/voxel_grid/gtest-voxel_grid_tests.xml")
set_tests_properties(_ctest_voxel_grid_gtest_voxel_grid_tests PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/melodic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/melodic/share/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/opt/ros/melodic/share/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/autolabor/catkin_ws/src/navigation/voxel_grid/CMakeLists.txt;42;catkin_add_gtest;/home/autolabor/catkin_ws/src/navigation/voxel_grid/CMakeLists.txt;0;")
subdirs("gtest")
