# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/autolabor/catkin_ws/src/driver/joystick/joystick_drivers/wiimote

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /opt/autolabor/ros/catkin_ws/build/wiimote

# Include any dependencies generated for this target.
include CMakeFiles/wiimote_node.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/wiimote_node.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/wiimote_node.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/wiimote_node.dir/flags.make

CMakeFiles/wiimote_node.dir/src/wiimote_controller.cpp.o: CMakeFiles/wiimote_node.dir/flags.make
CMakeFiles/wiimote_node.dir/src/wiimote_controller.cpp.o: /home/autolabor/catkin_ws/src/driver/joystick/joystick_drivers/wiimote/src/wiimote_controller.cpp
CMakeFiles/wiimote_node.dir/src/wiimote_controller.cpp.o: CMakeFiles/wiimote_node.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/autolabor/ros/catkin_ws/build/wiimote/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/wiimote_node.dir/src/wiimote_controller.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/wiimote_node.dir/src/wiimote_controller.cpp.o -MF CMakeFiles/wiimote_node.dir/src/wiimote_controller.cpp.o.d -o CMakeFiles/wiimote_node.dir/src/wiimote_controller.cpp.o -c /home/autolabor/catkin_ws/src/driver/joystick/joystick_drivers/wiimote/src/wiimote_controller.cpp

CMakeFiles/wiimote_node.dir/src/wiimote_controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wiimote_node.dir/src/wiimote_controller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/autolabor/catkin_ws/src/driver/joystick/joystick_drivers/wiimote/src/wiimote_controller.cpp > CMakeFiles/wiimote_node.dir/src/wiimote_controller.cpp.i

CMakeFiles/wiimote_node.dir/src/wiimote_controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wiimote_node.dir/src/wiimote_controller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/autolabor/catkin_ws/src/driver/joystick/joystick_drivers/wiimote/src/wiimote_controller.cpp -o CMakeFiles/wiimote_node.dir/src/wiimote_controller.cpp.s

CMakeFiles/wiimote_node.dir/src/stat_vector_3d.cpp.o: CMakeFiles/wiimote_node.dir/flags.make
CMakeFiles/wiimote_node.dir/src/stat_vector_3d.cpp.o: /home/autolabor/catkin_ws/src/driver/joystick/joystick_drivers/wiimote/src/stat_vector_3d.cpp
CMakeFiles/wiimote_node.dir/src/stat_vector_3d.cpp.o: CMakeFiles/wiimote_node.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/autolabor/ros/catkin_ws/build/wiimote/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/wiimote_node.dir/src/stat_vector_3d.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/wiimote_node.dir/src/stat_vector_3d.cpp.o -MF CMakeFiles/wiimote_node.dir/src/stat_vector_3d.cpp.o.d -o CMakeFiles/wiimote_node.dir/src/stat_vector_3d.cpp.o -c /home/autolabor/catkin_ws/src/driver/joystick/joystick_drivers/wiimote/src/stat_vector_3d.cpp

CMakeFiles/wiimote_node.dir/src/stat_vector_3d.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wiimote_node.dir/src/stat_vector_3d.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/autolabor/catkin_ws/src/driver/joystick/joystick_drivers/wiimote/src/stat_vector_3d.cpp > CMakeFiles/wiimote_node.dir/src/stat_vector_3d.cpp.i

CMakeFiles/wiimote_node.dir/src/stat_vector_3d.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wiimote_node.dir/src/stat_vector_3d.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/autolabor/catkin_ws/src/driver/joystick/joystick_drivers/wiimote/src/stat_vector_3d.cpp -o CMakeFiles/wiimote_node.dir/src/stat_vector_3d.cpp.s

# Object files for target wiimote_node
wiimote_node_OBJECTS = \
"CMakeFiles/wiimote_node.dir/src/wiimote_controller.cpp.o" \
"CMakeFiles/wiimote_node.dir/src/stat_vector_3d.cpp.o"

# External object files for target wiimote_node
wiimote_node_EXTERNAL_OBJECTS =

/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: CMakeFiles/wiimote_node.dir/src/wiimote_controller.cpp.o
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: CMakeFiles/wiimote_node.dir/src/stat_vector_3d.cpp.o
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: CMakeFiles/wiimote_node.dir/build.make
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /opt/ros/melodic/lib/libroscpp.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /opt/ros/melodic/lib/librosconsole.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /opt/ros/melodic/lib/librostime.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /opt/ros/melodic/lib/libcpp_common.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /opt/ros/melodic/lib/libroslib.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /opt/ros/melodic/lib/librospack.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /usr/lib/x86_64-linux-gnu/libpython2.7.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
/home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node: CMakeFiles/wiimote_node.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/autolabor/ros/catkin_ws/build/wiimote/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable /home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/wiimote_node.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/wiimote_node.dir/build: /home/autolabor/catkin_ws/devel/.private/wiimote/lib/wiimote/wiimote_node
.PHONY : CMakeFiles/wiimote_node.dir/build

CMakeFiles/wiimote_node.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/wiimote_node.dir/cmake_clean.cmake
.PHONY : CMakeFiles/wiimote_node.dir/clean

CMakeFiles/wiimote_node.dir/depend:
	cd /opt/autolabor/ros/catkin_ws/build/wiimote && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/autolabor/catkin_ws/src/driver/joystick/joystick_drivers/wiimote /home/autolabor/catkin_ws/src/driver/joystick/joystick_drivers/wiimote /opt/autolabor/ros/catkin_ws/build/wiimote /opt/autolabor/ros/catkin_ws/build/wiimote /opt/autolabor/ros/catkin_ws/build/wiimote/CMakeFiles/wiimote_node.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/wiimote_node.dir/depend

