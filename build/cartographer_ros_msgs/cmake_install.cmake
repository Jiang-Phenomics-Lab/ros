# Install script for directory: /home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/autolabor/catkin_ws/install")
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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/opt/autolabor/ros/catkin_ws/build/cartographer_ros_msgs/gtest/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/autolabor/catkin_ws/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/autolabor/catkin_ws/install" TYPE PROGRAM FILES "/opt/autolabor/ros/catkin_ws/build/cartographer_ros_msgs/catkin_generated/installspace/_setup_util.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/autolabor/catkin_ws/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/autolabor/catkin_ws/install" TYPE PROGRAM FILES "/opt/autolabor/ros/catkin_ws/build/cartographer_ros_msgs/catkin_generated/installspace/env.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/autolabor/catkin_ws/install/setup.bash;/home/autolabor/catkin_ws/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/autolabor/catkin_ws/install" TYPE FILE FILES
    "/opt/autolabor/ros/catkin_ws/build/cartographer_ros_msgs/catkin_generated/installspace/setup.bash"
    "/opt/autolabor/ros/catkin_ws/build/cartographer_ros_msgs/catkin_generated/installspace/local_setup.bash"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/autolabor/catkin_ws/install/setup.sh;/home/autolabor/catkin_ws/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/autolabor/catkin_ws/install" TYPE FILE FILES
    "/opt/autolabor/ros/catkin_ws/build/cartographer_ros_msgs/catkin_generated/installspace/setup.sh"
    "/opt/autolabor/ros/catkin_ws/build/cartographer_ros_msgs/catkin_generated/installspace/local_setup.sh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/autolabor/catkin_ws/install/setup.zsh;/home/autolabor/catkin_ws/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/autolabor/catkin_ws/install" TYPE FILE FILES
    "/opt/autolabor/ros/catkin_ws/build/cartographer_ros_msgs/catkin_generated/installspace/setup.zsh"
    "/opt/autolabor/ros/catkin_ws/build/cartographer_ros_msgs/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/autolabor/catkin_ws/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/autolabor/catkin_ws/install" TYPE FILE FILES "/opt/autolabor/ros/catkin_ws/build/cartographer_ros_msgs/catkin_generated/installspace/.rosinstall")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cartographer_ros_msgs/msg" TYPE FILE FILES
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/msg/BagfileProgress.msg"
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/msg/HistogramBucket.msg"
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/msg/LandmarkEntry.msg"
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/msg/LandmarkList.msg"
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/msg/MetricFamily.msg"
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/msg/MetricLabel.msg"
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/msg/Metric.msg"
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/msg/StatusCode.msg"
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/msg/StatusResponse.msg"
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/msg/SubmapEntry.msg"
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/msg/SubmapList.msg"
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/msg/SubmapTexture.msg"
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/msg/TrajectoryStates.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cartographer_ros_msgs/srv" TYPE FILE FILES
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/srv/FinishTrajectory.srv"
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/srv/GetTrajectoryStates.srv"
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/srv/ReadMetrics.srv"
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/srv/StartTrajectory.srv"
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/srv/SubmapQuery.srv"
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/srv/TrajectoryQuery.srv"
    "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/srv/WriteState.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cartographer_ros_msgs/cmake" TYPE FILE FILES "/opt/autolabor/ros/catkin_ws/build/cartographer_ros_msgs/catkin_generated/installspace/cartographer_ros_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/autolabor/catkin_ws/devel/.private/cartographer_ros_msgs/include/cartographer_ros_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/autolabor/catkin_ws/devel/.private/cartographer_ros_msgs/share/roseus/ros/cartographer_ros_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/autolabor/catkin_ws/devel/.private/cartographer_ros_msgs/share/common-lisp/ros/cartographer_ros_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/autolabor/catkin_ws/devel/.private/cartographer_ros_msgs/share/gennodejs/ros/cartographer_ros_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/autolabor/catkin_ws/devel/.private/cartographer_ros_msgs/lib/python2.7/dist-packages/cartographer_ros_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/autolabor/catkin_ws/devel/.private/cartographer_ros_msgs/lib/python2.7/dist-packages/cartographer_ros_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/opt/autolabor/ros/catkin_ws/build/cartographer_ros_msgs/catkin_generated/installspace/cartographer_ros_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cartographer_ros_msgs/cmake" TYPE FILE FILES "/opt/autolabor/ros/catkin_ws/build/cartographer_ros_msgs/catkin_generated/installspace/cartographer_ros_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cartographer_ros_msgs/cmake" TYPE FILE FILES
    "/opt/autolabor/ros/catkin_ws/build/cartographer_ros_msgs/catkin_generated/installspace/cartographer_ros_msgsConfig.cmake"
    "/opt/autolabor/ros/catkin_ws/build/cartographer_ros_msgs/catkin_generated/installspace/cartographer_ros_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cartographer_ros_msgs" TYPE FILE FILES "/home/autolabor/catkin_ws/src/mapping/cartographer_ros/cartographer_ros_msgs/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/opt/autolabor/ros/catkin_ws/build/cartographer_ros_msgs/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
