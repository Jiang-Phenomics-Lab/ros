#ifndef PROJECT_PHOTO_POINT_H
#define PROJECT_PHOTO_POINT_H

#include <ros/ros.h>

#include <ros/package.h>

#include <string>
#include <fstream>

#include <tf/transform_listener.h>
#include <tf/transform_datatypes.h>

#include <nav_msgs/Odometry.h>
#include <nav_msgs/Path.h>
#include <geometry_msgs/PoseStamped.h>

#include <tf/transform_datatypes.h>

#include <actionlib_msgs/GoalID.h>


#include <cstdio>

#include <ros/console.h>

#include <fstream>
#include <sstream>

#include <string>

#include <tf2_geometry_msgs/tf2_geometry_msgs.h>

#include <geometry_msgs/PoseArray.h>
#include <geometry_msgs/Point.h>

#include <std_msgs/String.h>

#include <random_numbers/random_numbers.h>



namespace photo_point {
	//ros::NodeHandle nh_;
	//ros::Subscriber path_subscribe_;
	random_numbers::RandomNumberGenerator generator_;
	ros::Publisher start_task_pub_, cancel_task_pub_;
	nav_msgs::Path record_path_point_;
	void callback(const nav_msgs::Path::ConstPtr &msg);
}


#endif //PROJECT_PHOTO_POINT_H
