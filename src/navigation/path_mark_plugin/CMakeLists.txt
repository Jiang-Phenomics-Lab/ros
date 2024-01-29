cmake_minimum_required(VERSION 3.5)
project(path_mark_plugin)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  path_server
  random_numbers
  rviz
  geometry_msgs
  std_msgs
  actionlib_msgs
  tf2
  tf2_ros
)

catkin_package(
  CATKIN_DEPENDS message_runtime
#  LIBRARIES path_mark_plugin
#  CATKIN_DEPENDS roscpp rviz
#  DEPENDS system_lib
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

link_directories(${catkin_LIBRARY_DIRS})


set(CMAKE_AUTOMOC ON)

if(rviz_QT_VERSION VERSION_LESS "5")
    message(STATUS "Using Qt4 based on the rviz_QT_VERSION: ${rviz_QT_VERSION}")
    find_package(Qt4 ${rviz_QT_VERSION} EXACT REQUIRED QtCore QtGui)
    ## pull in all required include dirs, define QT_LIBRARIES, etc.
    include(${QT_USE_FILE})
else()
    message(STATUS "Using Qt5 based on the rviz_QT_VERSION: ${rviz_QT_VERSION}")
    find_package(Qt5 ${rviz_QT_VERSION} EXACT REQUIRED Core Widgets)
    ## make target_link_libraries(${QT_LIBRARIES}) pull in all required dependencies
    set(QT_LIBRARIES Qt5::Widgets)
endif()

add_definitions(-DQT_NO_KEYWORDS)

add_library(path_mark_plugin src/path_mark_plugin.cpp include/path_mark_plugin/path_mark_plugin.h)
add_dependencies(path_mark_plugin ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(path_mark_plugin ${QT_LIBRARIES} ${catkin_LIBRARIES})
