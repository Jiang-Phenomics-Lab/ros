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
	double min = INT_MAX;
	int min_marker = INT_MIN;
	int min_before = INT_MAX;
	//bool photo_flag = true;
	ros::Rate loop_rate(1);
	// std::ofstream outputFile("/home/autolabor/catkin_ws/src/navigation/photo_point/carPos.txt", std::ios::trunc);
	
	record_path_point_1 = *msg;
	int mark_num1 = record_path_point_1.poses.size();
	bool arr[mark_num1] = {false};

	while(ros::ok){


		//save the car position into file
		// std::ofstream outputFile("/home/autolabor/catkin_ws/src/navigation/photo_point/carPos.txt",std::ios::app);
		// outputFile << x<<" "<< y << std::endl;
		// outputFile.close();
		


		//ROS_ERROR("car pos %f;%f",x,y);
		record_path_point_ = *msg;
		//ROS_ERROR(record_path_point_);
		int mark_num = record_path_point_.poses.size();
        double x;
		double y;
		//ROS_ERROR("mark_num = %d",mark_num);
		//for (int i = 0; i < mark_num; i++)
		//with_interval
		while(true){
		if (tfBuffer_.canTransform(target_frame, child_frame, 
		  ros::Time(0),ros::Duration(4.0))) 
		{
		// ROS_ERROR("got car pos");
		geometry_msgs::TransformStamped transformStamped = tfBuffer_.lookupTransform(target_frame, child_frame,ros::Time(0),ros::Duration(4.0));
		 x = transformStamped.transform.translation.x;
		 y = transformStamped.transform.translation.y;
		// ROS_ERROR("car pos %f;%f",x,y);
		}
		  bool all_take_photo = true;
		  for(int i = 0; i  < mark_num; i+=3)
		  {
			// ROS_ERROR("i = %d",i);
			// ROS_ERROR("mark_num = %d",mark_num);
		    if(!arr[i]){all_take_photo = false;}
		  }
		  for(int i = 0; i  < mark_num; i+=3){
		  geometry_msgs::PoseStamped p = record_path_point_.poses.at(i);
		   double dx = p.pose.position.x;
		   double dy = p.pose.position.y;
		   int id = p.pose.position.z;
		  //ROS_ERROR("mark_num = %d",mark_num);
		  //ROS_ERROR("i = %d",i);
		  //ROS_ERROR("mark pos %f;%f",dx,dy);
		  double distance = sqrt((dx-x)*(dx-x)+(dy-y)*(dy-y));
		//   ROS_ERROR("compare pos %f;%f",x,y);
		  if(distance < min){
		  min_marker = id;
		  }
		  //ROS_ERROR("min:%f;min_marker:%d;distance:%f",min,min_marker,distance); 
		  if(distance < min && min_marker != min_before&& arr[min_marker-1] == false){
			min = distance;
			
			}

		
		//  ROS_ERROR("min:%f;min_marker:%d",min,min_marker); 
		 if(min < 0.12 && min_marker!=min_before && arr[min_marker-1] == false){
		 	ROS_ERROR("take_photo at point:%d",min_marker); 

			arr[min_marker-1] = true;

		 	min_before = min_marker;
	     	min = INT_MAX;
	     	ROS_ERROR("min:%f;min_marker:%d",min,min_marker);

			actionlib_msgs::GoalID msg1;
        	msg1.stamp = ros::Time::now();
        	cancel_task_pub_.publish(msg1);

	     	system("/home/autolabor/anaconda3/envs/orbbec/bin/python /home/autolabor/Desktop/pyorbbecsdk/examples/highAngle.py");
	    //  ROS_ERROR("result:%d", result);      

		 
			geometry_msgs::PoseStamped msg;
        	msg.header.stamp = ros::Time::now();
        	msg.header.frame_id = "map";
        	msg.pose.orientation = tf::createQuaternionMsgFromYaw(generator_.uniformReal(-M_PI, M_PI));
        	msg.pose.position.x = generator_.uniformReal(-100, 100);
        	msg.pose.position.y = generator_.uniformReal(-100, 100);
        	msg.pose.position.z = generator_.uniformReal(-100, 100);
        	start_task_pub_.publish(msg);

		    
		 }
		 }
		 if(all_take_photo){break;}
		}
		
	    while(true){
			bool all_take_photo = true;
		  for(int i = 1; i  < mark_num; i+=3)
		  {
		    if(!arr[i]){all_take_photo = false;}
		  }
		if (tfBuffer_.canTransform(target_frame, child_frame, 
		  ros::Time(0),ros::Duration(4.0))) 
		{
		// ROS_ERROR("got car pos");
		geometry_msgs::TransformStamped transformStamped = tfBuffer_.lookupTransform(target_frame, child_frame,ros::Time(0),ros::Duration(4.0));
		 x = transformStamped.transform.translation.x;
		 y = transformStamped.transform.translation.y;
		// ROS_ERROR("car pos %f;%f",x,y);
		}

		  for(int i = 1; i  < mark_num; i+=3){
		  geometry_msgs::PoseStamped p = record_path_point_.poses.at(i);
		  double dx = p.pose.position.x;
		  double dy = p.pose.position.y;
		  int 	 id = p.pose.position.z;
		  //ROS_ERROR("mark_num = %d",mark_num);
		  //ROS_ERROR("i = %d",i);
		  //ROS_ERROR("mark pos %f;%f",dx,dy);
		  double distance = sqrt((dx-x)*(dx-x)+(dy-y)*(dy-y));
		//   ROS_ERROR("compare pos %f;%f",x,y);
		  if(distance < min){
		  min_marker = id;
		  }
		  //ROS_ERROR("min:%f;min_marker:%d;distance:%f",min,min_marker,distance); 
		  if(distance < min && min_marker != min_before&& arr[min_marker-1] == false){
			min = distance;
			
			}

		
		//  ROS_ERROR("min:%f;min_marker:%d",min,min_marker); 
		 if(min < 0.12 && min_marker!=min_before && arr[min_marker-1] == false){
		 	ROS_ERROR("take_photo at point:%d",min_marker); 

			arr[min_marker-1] = true;

		 	min_before = min_marker;
	     	min = INT_MAX;
	     	ROS_ERROR("min:%f;min_marker:%d",min,min_marker);

			actionlib_msgs::GoalID msg1;
        	msg1.stamp = ros::Time::now();
        	cancel_task_pub_.publish(msg1);

	     	system("/home/autolabor/anaconda3/envs/orbbec/bin/python /home/autolabor/Desktop/pyorbbecsdk/examples/highAngle.py");
	     //ROS_ERROR("result:%d", result);      

		 
			geometry_msgs::PoseStamped msg;
        	msg.header.stamp = ros::Time::now();
        	msg.header.frame_id = "map";
        	msg.pose.orientation = tf::createQuaternionMsgFromYaw(generator_.uniformReal(-M_PI, M_PI));
        	msg.pose.position.x = generator_.uniformReal(-100, 100);
        	msg.pose.position.y = generator_.uniformReal(-100, 100);
        	msg.pose.position.z = generator_.uniformReal(-100, 100);
        	start_task_pub_.publish(msg);

		    
		 }
		 }
		 if(all_take_photo){break;}
		}

				while(true){
		if (tfBuffer_.canTransform(target_frame, child_frame, 
		  ros::Time(0),ros::Duration(4.0))) 
		{
		// ROS_ERROR("got car pos");
		geometry_msgs::TransformStamped transformStamped = tfBuffer_.lookupTransform(target_frame, child_frame,ros::Time(0),ros::Duration(4.0));
		 x = transformStamped.transform.translation.x;
		 y = transformStamped.transform.translation.y;
		// ROS_ERROR("car pos %f;%f",x,y);
		}
		  bool all_take_photo = true;
		  for(int i = 2; i  < mark_num; i+=3)
		  {
		    if(!arr[i]){all_take_photo = false;}
		  }
		  for(int i = 2; i  < mark_num; i+=3){
		  geometry_msgs::PoseStamped p = record_path_point_.poses.at(i);
		  double dx = p.pose.position.x;
		  double dy = p.pose.position.y;
		  int 	 id = p.pose.position.z;
		  //ROS_ERROR("mark_num = %d",mark_num);
		  //ROS_ERROR("i = %d",i);
		  //ROS_ERROR("mark pos %f;%f",dx,dy);
		  double distance = sqrt((dx-x)*(dx-x)+(dy-y)*(dy-y));
		//   ROS_ERROR("compare pos %f;%f",x,y);
		  if(distance < min){
		  min_marker = id;
		  }
		  //ROS_ERROR("min:%f;min_marker:%d;distance:%f",min,min_marker,distance); 
		  if(distance < min && min_marker != min_before && arr[min_marker-1] == false){
			min = distance;
			
			}

		
		//  ROS_ERROR("min:%f;min_marker:%d",min,min_marker); 
		 if(min < 0.12 && min_marker!=min_before && arr[min_marker-1] == false){
		 	ROS_ERROR("take_photo at point:%d",min_marker); 

			arr[min_marker-1] = true;

		 	min_before = min_marker;
	     	min = INT_MAX;
	     	ROS_ERROR("min:%f;min_marker:%d",min,min_marker);

			actionlib_msgs::GoalID msg1;
        	msg1.stamp = ros::Time::now();
        	cancel_task_pub_.publish(msg1);

	     	system("/home/autolabor/anaconda3/envs/orbbec/bin/python /home/autolabor/Desktop/pyorbbecsdk/examples/highAngle.py");
	     //ROS_ERROR("result:%d", result);      

		 
			geometry_msgs::PoseStamped msg;
        	msg.header.stamp = ros::Time::now();
        	msg.header.frame_id = "map";
        	msg.pose.orientation = tf::createQuaternionMsgFromYaw(generator_.uniformReal(-M_PI, M_PI));
        	msg.pose.position.x = generator_.uniformReal(-100, 100);
        	msg.pose.position.y = generator_.uniformReal(-100, 100);
        	msg.pose.position.z = generator_.uniformReal(-100, 100);
        	start_task_pub_.publish(msg);

		    
		 }
		 }
		 if(all_take_photo){break;}
		}
		loop_rate.sleep();
             }
}
}
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
