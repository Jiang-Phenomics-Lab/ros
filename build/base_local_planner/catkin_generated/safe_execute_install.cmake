execute_process(COMMAND "/opt/autolabor/ros/catkin_ws/build/base_local_planner/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/opt/autolabor/ros/catkin_ws/build/base_local_planner/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
