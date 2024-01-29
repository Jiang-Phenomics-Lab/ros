#include <tf/transform_datatypes.h>

#include <geometry_msgs/PoseStamped.h>

#include <cstdio>

#include <ros/console.h>

#include <fstream>
#include <sstream>
#include <iostream>

#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>

#include <photo_point/photo_point.h>
#include <actionlib_msgs/GoalID.h>

namespace photo_point{
void callback(const nav_msgs::Path::ConstPtr &msg){
	//ROS_ERROR("start_CALLBACK");
	tf2_ros::Buffer tfBuffer_;
	tf2_ros::TransformListener tfListener_(tfBuffer_);
	std::string target_frame = "map";
	std::string child_frame = "base_link";
	double min = 999;
	int min_marker;
	int min_before = 999;
	//bool photo_flag = true;
	ros::Rate loop_rate(0.2);
	while(ros::ok){
		  if (tfBuffer_.canTransform(target_frame, child_frame, 
		  ros::Time(0),ros::Duration(4.0))) 
		{
		//ROS_ERROR("got car pos");
		geometry_msgs::TransformStamped transformStamped = tfBuffer_.lookupTransform(target_frame, child_frame,ros::Time(0),ros::Duration(4.0));
		double x = transformStamped.transform.translation.x;
		double y = transformStamped.transform.translation.y;
		//ROS_ERROR("car pos %f;%f",x,y);
		record_path_point_ = *msg;
		//ROS_ERROR(record_path_point_);
		int mark_num = record_path_point_.poses.size();
		//ROS_ERROR("mark_num = %d",mark_num);
		for (int i = 0; i < mark_num; i++)
		{
		  geometry_msgs::PoseStamped p = record_path_point_.poses.at(i);
		  double dx = p.pose.position.x;
		  double dy = p.pose.position.y;
		  int 	 id = p.pose.position.z;
		  //ROS_ERROR("mark_num = %d",mark_num);
		  //ROS_ERROR("i = %d",i);
		  //ROS_ERROR("mark pos %f;%f",dx,dy);
		  double distance = sqrt((dx-x)*(dx-x)+(dy-y)*(dy-y));
		  ROS_ERROR("min:%f;min_marker:%d;distance:%f",min,min_marker,distance); 
		  if(distance < min){
			min = distance;
			min_marker = id;
			
			}

		}



		  //if(distance < 0.5 && photo_flag){
			//ros::Duration(5.0).sleep();
			//system("rosrun take_photo take_photo.py");
		        //ROS_ERROR("take_photo at point:%d,i=%d",id,i);
			//photo_flag = false;
			//break;
			//}
		  //else if(distance > 1.5){
			//photo_flag = true;
			//ROS_ERROR("distance > 1.5");
			//  	    	 }
		 //ROS_ERROR("min:%f;min_marker:%d",min,min_marker); 
		 if(min < 0.5 && min_marker!=min_before){
	     ROS_ERROR("take_photo at point:%d",min_marker); 

		actionlib_msgs::GoalID msg1;
        msg1.stamp = ros::Time::now();
        cancel_task_pub_.publish(msg1);

	     int result = system("/home/autolabor/anaconda3/envs/orbbec/bin/python /home/autolabor/Desktop/pyorbbecsdk/examples/highAngle.py");
	     ROS_ERROR("result:%d", result);      
	     min_before = min_marker;
	     min = 999;
		 
		geometry_msgs::PoseStamped msg;
        msg.header.stamp = ros::Time::now();
        msg.header.frame_id = "map";
        msg.pose.orientation = tf::createQuaternionMsgFromYaw(generator_.uniformReal(-M_PI, M_PI));
        msg.pose.position.x = generator_.uniformReal(-100, 100);
        msg.pose.position.y = generator_.uniformReal(-100, 100);
        msg.pose.position.z = generator_.uniformReal(-100, 100);
        start_task_pub_.publish(msg);
		 }
		loop_rate.sleep();
             }
}}}
int main(int argc, char **argv) {
    //ros::init(argc, argv, "record_path");
    //autolabor_tools::RecordPath recordPath;
    ros::init(argc, argv, "photo_point");
    ros::NodeHandle nh_;
    ros::Subscriber path_subscribe_;
	photo_point::start_task_pub_ = nh_.advertise<geometry_msgs::PoseStamped>("move_base_simple/goal", 1);
    photo_point::cancel_task_pub_ = nh_.advertise<actionlib_msgs::GoalID>("move_base/cancel", 1);
    path_subscribe_ = nh_.subscribe<nav_msgs::Path>("recorded_path_point", 10, &photo_point::callback);
    ros::spin();
    return 0;
}

