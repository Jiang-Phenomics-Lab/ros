#include <tf/transform_datatypes.h>

#include <std_srvs/Empty.h>
#include <actionlib_msgs/GoalID.h>
#include <path_server/SetPathName.h>
#include <path_server/SetPhotoPoint.h>
#include <geometry_msgs/PoseStamped.h>
#include <path_mark_plugin/path_mark_plugin.h>

#include <cstdio>

#include <ros/console.h>

#include <fstream>
#include <sstream>
#include <iostream>

#include <QPainter>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QLabel>
#include <QTimer>
#include <QDebug>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/qheaderview.h>
#include <visualization_msgs/Marker.h>

#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>

#include <visualization_msgs/MarkerArray.h>

#include <thread>

namespace autolabor_plugin1 {

    PathMarkPlugin::PathMarkPlugin(QWidget *parent) : Panel(parent) {
        auto *table_layout = new QVBoxLayout;
        poseArray_table_ = new QTableWidget;
        //item_ = new QTableWidgetItem();
        initPoseTable();
        table_layout->addWidget(poseArray_table_);

        auto *button_layout = new QHBoxLayout;
        start_record_button_ = new QPushButton(tr("录制路径"), this);
        button_layout->addWidget(start_record_button_);
        stop_record_button_ = new QPushButton(tr("保存路径"), this);
        button_layout->addWidget(stop_record_button_);

        start_task_button_ = new QPushButton(tr("开始任务"), this);
        button_layout->addWidget(start_task_button_);
        stop_task_button_ = new QPushButton(tr("取消任务"), this);
        button_layout->addWidget(stop_task_button_);

        photo_task_button_ = new QPushButton(tr("find photo point"), this);
        button_layout->addWidget(photo_task_button_);

        table_layout->addLayout(button_layout);
        setLayout(table_layout);

        stop_record_button_->setEnabled(false);

        connect(start_record_button_, SIGNAL(clicked()), this, SLOT(start_record_callback()));
        connect(stop_record_button_, SIGNAL(clicked()), this, SLOT(stop_record_callback()));
        connect(start_task_button_, SIGNAL(clicked()), this, SLOT(start_task_callback()));
        connect(stop_task_button_, SIGNAL(clicked()), this, SLOT(stop_task_callback()));
		connect(photo_task_button_, SIGNAL(clicked()), this, SLOT(photo_task_button_callback()));

//        connect(poseArray_table_,  &QTableWidget::cellChanged, [=](int row, int column) {
//            if (column == 0) // 判断是否是第一列
//            {
//                QTableWidgetItem* item = poseArray_table_->item(row, column);
//                if (item->checkState() == Qt::Checked)
//                {
//                    ROS_INFO("Row %d is checked", row);
//		    double point_x = poseArray_table_[row][1];
//                    double point_y = poseArray_table_[row][2];
//                    double point_yaw = poseArray_table_[row][3];
//                }
//                else
//                {
//                    ROS_INFO("Row %d is unchecked", row);
//                }
//            }
//        });
        connect(poseArray_table_,  SIGNAL(cellChanged(int,int)), this, SLOT(photo_point_callback(int,int)));
	
	//connect(poseArray_table_,  SIGNAL(reset()), this, SLOT(resetTable()));
	//connect(poseArray_table_,  SIGNAL(cellChanged(int,int)), this, SLOT(del_marker(int,int)));

        start_record_client_ = nh_.serviceClient<path_server::SetPathName>("start_record_path");
        stop_record_client_ = nh_.serviceClient<std_srvs::Empty>("stop_record_path");

        start_record_client_point_ = nh_.serviceClient<path_server::SetPhotoPoint>("start_record_path_point");

	

        stop_record_client_point_ = nh_.serviceClient<std_srvs::Empty>("stop_record_path_point");

        stop_record_client_track_ = nh_.serviceClient<std_srvs::Empty>("stop_record_path_track");

        start_task_pub_ = nh_.advertise<geometry_msgs::PoseStamped>("move_base_simple/goal", 1);
        cancel_task_pub_ = nh_.advertise<actionlib_msgs::GoalID>("move_base/cancel", 1);

        point_sub_ = nh_.subscribe("my_pose_topic", 10, &PathMarkPlugin::writePose, this);

	marker_pub_ = nh_.advertise<visualization_msgs::Marker>("visualization_marker", 10);

	track_sub_ = nh_.subscribe("my_track_topic", 1, &PathMarkPlugin::writeTrack,this);
    }

    void PathMarkPlugin::load(const rviz::Config &config) {
        Panel::load(config);
    }

    void PathMarkPlugin::save(rviz::Config config) const {
        Panel::save(config);
    }

    void PathMarkPlugin::start_record_callback() {
	poseArray_table_->clear();
        pose_array_.poses.clear();
	poseArray_table_->setRowCount(0);
	poseArray_table_->setColumnCount(4);
        poseArray_table_->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        QStringList pose_header;
        pose_header << "设为拍照点"  << "x" << "y" << "yaw";
        poseArray_table_->setHorizontalHeaderLabels(pose_header);
        path_server::SetPathName msg;
        msg.request.path_name = "default_path";
        if (!start_record_client_.call(msg)) {
            ROS_ERROR_STREAM("记录路径发生错误，请重试！");
        } else {
            stop_record_button_->setEnabled(true);
            start_task_button_->setEnabled(false);
        }
    }

    void PathMarkPlugin::stop_record_callback() {
        std_srvs::Empty msg;
        if (!stop_record_client_.call(msg)) {
            ROS_ERROR_STREAM("保存路径发生错误，请重试！");
        } 
	else {
	    if (!stop_record_client_point_.call(msg)) {
            ROS_ERROR_STREAM("保存marker发生错误，请重试！");
            } 
	    if (!stop_record_client_track_.call(msg)) {
            ROS_ERROR_STREAM("保存track发生错误，请重试！");
            } 
            start_task_button_->setEnabled(true);
        }
    }



    void PathMarkPlugin::start_task_callback() {
        geometry_msgs::PoseStamped msg;
        msg.header.stamp = ros::Time::now();
        msg.header.frame_id = "map";
        msg.pose.orientation = tf::createQuaternionMsgFromYaw(generator_.uniformReal(-M_PI, M_PI));
        msg.pose.position.x = generator_.uniformReal(-100, 100);
        msg.pose.position.y = generator_.uniformReal(-100, 100);
        msg.pose.position.z = generator_.uniformReal(-100, 100);
        start_task_pub_.publish(msg);

//new
	//ROS_INFO("start_photo_point_Sub");
	//photopoint_sub = nh_.subscribe<visualization_msgs::MarkerArray>("marker_array",10,&PathMarkPlugin::callback);
	//ROS_INFO("start_photo_point_Sub");
	//ros::spin();
	//path_subscribe_ = nh_.subscribe<nav_msgs::Path>("recorded_path_point", 10, boost::bind(&PathMarkPlugin::callback,this,_1));
    }

//    void PathMarkPlugin::callback(const nav_msgs::Path::ConstPtr &msg){
//	ROS_ERROR("start_CALLBACK");
// 	tf2_ros::Buffer tfBuffer_;
//        tf2_ros::TransformListener tfListener_(tfBuffer_);
//        std::string target_frame = "map";
//        std::string child_frame = "base_link";
//	ros::Rate loop_rate(0.2);
//	while(ros::ok){
//		  if (tfBuffer_.canTransform(target_frame, child_frame, 
//                  ros::Time(0),ros::Duration(4.0))) 
//		{
//		//ROS_ERROR("got car pos");
//		geometry_msgs::TransformStamped transformStamped = tfBuffer_.lookupTransform(target_frame, child_frame,ros::Time(0),ros::Duration(4.0));
//		double x = transformStamped.transform.translation.x;
//		double y = transformStamped.transform.translation.y;
//		ROS_ERROR("car pos %f;%f",x,y);
//		record_path_point_ = *msg;
//		//ROS_ERROR(record_path_point_);
//		int mark_num = record_path_point_.poses.size();
//		//ROS_ERROR("mark_num = %d",mark_num);
//		bool photo_flag = true;
//		for (int i = 0; i < mark_num; i++)
//		{
//		  geometry_msgs::PoseStamped p = record_path_point_.poses.at(i);
//		  double dx = p.pose.position.x;
//		  double dy = p.pose.position.y;
//		  int 	 id = p.pose.position.z;
//		  //ROS_ERROR("mark_num = %d",mark_num);
//		  //ROS_ERROR("i = %d",i);
//		  //ROS_ERROR("mark pos %f;%f",dx,dy);
//		  double distance = sqrt((dx-x)*(dx-x)+(dy-y)*(dy-y));
//		  if(distance < 0.5 && photo_flag){
//			//ros::Duration(5.0).sleep();
//			//system("rosrun take_photo take_photo.py");
//                        ROS_ERROR("take_photo at point:%d,i=%d",id,i);
//			photo_flag = false;
//			continue;
//			}
//		  else if(distance > 2.5){
//			photo_flag = true;
//			ROS_ERROR("distance > 2.5");
//			  	    	 }
//                                                              
//		 }
//		 }
//		loop_rate.sleep();
//                     }
//								}
    void PathMarkPlugin::photo_task_button_callback(){
	std::thread photo_thread([](){
//	path_subscribe_ = nh_.subscribe<nav_msgs::Path>("recorded_path_point", 10, boost::bind(&PathMarkPlugin::callback,this,_1));
	system("rosrun photo_point photo_point");
});
	photo_thread.detach();
	}                                                        
    void PathMarkPlugin::stop_task_callback() {
        actionlib_msgs::GoalID msg;
        msg.stamp = ros::Time::now();
        cancel_task_pub_.publish(msg);
    }
    void PathMarkPlugin::initPoseTable(){
        ROS_INFO("Initialize");
//        poseArray_table_->clear();
//        pose_array_.poses.clear();
//        deleteMark();
        poseArray_table_->setColumnCount(4);
        poseArray_table_->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        QStringList pose_header;
        pose_header << "设为拍照点"  << "x" << "y" << "yaw";
        poseArray_table_->setHorizontalHeaderLabels(pose_header);
	

    }

    void PathMarkPlugin::resetTable(){
        poseArray_table_->clear();
        pose_array_.poses.clear();

    }



    void PathMarkPlugin::writePose(const geometry_msgs::PoseStamped::ConstPtr& msg) {
        int row = poseArray_table_->rowCount();
	ROS_INFO("row=%d",row);
        poseArray_table_->insertRow(row);
	ROS_INFO("insertRow");
	QTableWidgetItem* item_ = new QTableWidgetItem();
	ROS_INFO("create new item");
        //item_->setTextAlignment(Qt::AlignCenter);
        //item_->setFont( poseArray_table_->font());
        //item_->setCheckState(Qt::Unchecked);
        //poseArray_table_->setItem(-1, 0, item_);
        //item->setTextAlignment(Qt::AlignCenter);
        //item->setFont( poseArray_table_->font());
	item_->setFlags(item_->flags() | Qt::ItemIsUserCheckable);
	ROS_INFO("setFlags");
        item_->setCheckState(Qt::Unchecked);
	ROS_INFO("setCheckState");
        poseArray_table_->setItem(row, 0, item_);
        ROS_INFO("setItem");

        double x = msg->pose.position.x;
        double y = msg->pose.position.y;
        double yaw = tf::getYaw(msg->pose.orientation);
        //ROS_INFO("Received pose: x=%f, y=%f, yaw=%f", x, y, yaw);

        //poseArray_table_->setItem(pose_array_.poses.size() - 1, 1,
        //                            new QTableWidgetItem(QString::number(x, 'f', 2)));
        //poseArray_table_->setItem(pose_array_.poses.size() - 1, 2,
        //                            new QTableWidgetItem(QString::number(y, 'f', 2)));
        //poseArray_table_->setItem(pose_array_.poses.size() - 1, 3,
        //                            new QTableWidgetItem(
        //                                    QString::number(yaw * 180.0 / 3.14, 'f', 2)));
        poseArray_table_->setItem(row, 1,
                                    new QTableWidgetItem(QString::number(x, 'f', 2)));
        poseArray_table_->setItem(row, 2,
                                    new QTableWidgetItem(QString::number(y, 'f', 2)));
        poseArray_table_->setItem(row, 3,
                                    new QTableWidgetItem(QString::number(yaw * 180.0 / 3.14, 'f', 2)));

    }

    void PathMarkPlugin::writeTrack(const nav_msgs::Path::ConstPtr &msg) {
	record_path_track_ = *msg;
	int track_num = record_path_track_.poses.size();
	ROS_ERROR("track_num = %d", track_num);
	std::string path_point = ros::package::getPath("path_server") + "/path_data_point/" + "default_photo_point.point";
	std::ifstream is(path_point);
	std::vector<int> marker_id;
	bool is_mark = false;
        if (!is) {
            ROS_WARN_STREAM("file : " + path_point + " not exist!");
        } else {
            while (!is.eof()) {
                double x, y, yaw;
		int id;
                is >> id >> x >> y >> yaw;
		int num = id - 1;
		ROS_ERROR("num=%d",num);
		if(num < 0)break;
		marker_id.push_back(num);}
		//QTableWidgetItem* item = poseArray_table_->item(num,0);
		//item->setCheckState(Qt::Checked);
		
    
		}
	for(int i = 0; i < track_num; i++){
		geometry_msgs::PoseStamped t = record_path_track_.poses.at(i);
		double x = t.pose.position.x;
		double y = t.pose.position.y;
		double yaw = tf::getYaw(t.pose.orientation);
		int row = poseArray_table_->rowCount();
		//ROS_ERROR("row = %d",row);
		//ROS_INFO("row=%d",row);
		
		//ROS_INFO("insertRow");
		
		//ROS_INFO("create new item");
		//item_->setTextAlignment(Qt::AlignCenter);
		//item_->setFont( poseArray_table_->font());
		//item_->setCheckState(Qt::Unchecked);
		//poseArray_table_->setItem(-1, 0, item_);
		//item->setTextAlignment(Qt::AlignCenter);
		//item->setFont( poseArray_table_->font());
		
		//ROS_INFO("setFlags");
		for(int mar:marker_id){
			//ROS_ERROR("mar = %d",mar);
			if(i == mar){
				//ROS_ERROR("i:%d == mar:%d",i,mar);
				is_mark = true;
				break;}
		}
		if(is_mark == true){
		//ROS_ERROR("insertRow=%d",row);
		poseArray_table_->insertRow(row);
		QTableWidgetItem* item_ = new QTableWidgetItem();
		item_->setFlags(item_->flags() | Qt::ItemIsUserCheckable);
		item_->setCheckState(Qt::Unchecked);
		poseArray_table_->setItem(row, 0, item_);

		poseArray_table_->setItem(row, 1,
		                            new QTableWidgetItem(QString::number(x, 'f', 2)));
		poseArray_table_->setItem(row, 2,
		                            new QTableWidgetItem(QString::number(y, 'f', 2)));
		poseArray_table_->setItem(row, 3,
		                            new QTableWidgetItem(QString::number(yaw * 180.0 / 3.14, 'f', 2)));
		//ROS_ERROR("insertRow=%d success",row);
		QTableWidgetItem* item = poseArray_table_->item(row,0);
		item->setCheckState(Qt::Checked);
		is_mark = false;
		}

		else{
		//ROS_ERROR("insertRow=%d",row);
		poseArray_table_->insertRow(row);
		QTableWidgetItem* item_ = new QTableWidgetItem();
		item_->setFlags(item_->flags() | Qt::ItemIsUserCheckable);
		item_->setCheckState(Qt::Unchecked);
		poseArray_table_->setItem(row, 0, item_);

		poseArray_table_->setItem(row, 1,
		                            new QTableWidgetItem(QString::number(x, 'f', 2)));
		poseArray_table_->setItem(row, 2,
		                            new QTableWidgetItem(QString::number(y, 'f', 2)));
		poseArray_table_->setItem(row, 3,
		                            new QTableWidgetItem(QString::number(yaw * 180.0 / 3.14, 'f', 2)));
		//ROS_ERROR("insertRow=%d success",row);
					    }
		



}
}

    void PathMarkPlugin::photo_point_callback(int row, int column){
	if (column == 0) // 判断是否是第一列
	{

		QTableWidgetItem* item = poseArray_table_->item(row, column);

			if (item->checkState() == Qt::Checked)
			{
			    //ROS_INFO("Row %d is checked", row);
//                            geometry_msgs::PoseStamped msg;
//			    msg.header.stamp = ros::Time::now();
//			    msg.header.frame_id = "map";
//			    msg.pose.orientation = tf::createQuaternionMsgFromYaw(generator_.uniformReal(-M_PI, M_PI));
//			    msg.pose.position.x = generator_.uniformReal(-100, 100);
//			    msg.pose.position.y = generator_.uniformReal(-100, 100);
//			    msg.pose.position.z = generator_.uniformReal(-100, 100);
//			    start_task_pub_.publish(msg);
                            //ROS_INFO("point_x %f", point_x);
                            //ROS_INFO("point_y %f", point_y);
                            //ROS_INFO("point_yaw %f", point_yaw);
			    double point_x = poseArray_table_->item(row,1)->text().toDouble();
		            double point_y = poseArray_table_->item(row,2)->text().toDouble();
		            double point_yaw = poseArray_table_->item(row,3)->text().toDouble();
			    visualization_msgs::Marker number;
	                    number.ns = "photo_point_number";
			    number.header.frame_id = "map";
			    number.action = visualization_msgs::Marker::ADD;
			    number.type = visualization_msgs::Marker::TEXT_VIEW_FACING;
			    number.pose.position.x = point_x;
			    number.pose.position.y = point_y;
			    number.pose.position.z = 0;
			    number.scale.z = 1.0;
			    number.color.r = 1.0f;
			    number.color.g = 0.98f;
			    number.color.b = 0.80f;
			    number.color.a = 1.0;
			    number.id = row+1;//fan hui shu liang
			    number.text = std::to_string(row+1);
			    marker_pub_.publish(number);
			    //ROS_INFO("marker publish");
			    path_server::SetPhotoPoint msg;
        		    msg.request.id = row + 1;
			    msg.request.x = point_x;
			    msg.request.y = point_y;
			    msg.request.yaw = point_yaw;
			    if (!start_record_client_point_.call(msg)) {
			       ROS_ERROR_STREAM("记录marker发生错误，请重试！");
			    } 
                            
			}
			else
			{
			    //ROS_INFO("Row %d is unchecked", row);

//new
			    //ros::NodeHandle nh;
			    //ros::Subscriber sub = nh.subscribe<visualization_msgs::Marker>("del_marker",10,[&row](const visualization_msgs::Marker::ConstPtr& msg)
				//{
					//del_marker(msg,row);
				//});

			    visualization_msgs::Marker delMarker;
			    int id = row+1;
			    delMarker.id = id;
			    delMarker.ns = "photo_point_number";
			    delMarker.header.frame_id = "map";
			    //delMarker.lifetime = ros::Duration(0.1);
			    delMarker.action = visualization_msgs::Marker::DELETE;
			    marker_pub_.publish(delMarker);
			    
			    std::string filename_point = "default_photo_point";
        		    std::string path_point = ros::package::getPath("path_server") + "/path_data_point/";
        		    if (access(path_point.c_str(), 0) == -1) {
            			mkdir(path_point.c_str(), 0777);
                                }
        //output_file_point_.close();
			    std::fstream in(path_point + filename_point + ".point",std::ios::in);
			    std::fstream out(path_point + "temp" + ".point",std::ios::out);       
                        
			    std::string delstr;
			    	
			    //std::string delrow = id + " " + point_x + " " + point_y + " " + point_yaw;
			    while(getline(in,delstr))
			    {
				if(!std::string(1,delstr[0]).compare(std::to_string(id)))
					continue;
				out << delstr << "\n";
			    }
			    in.close();
			    out.close();
			    std::fstream outfile(path_point + filename_point + ".point",std::ios::out);
			    std::fstream infile(path_point + "temp" + ".point",std::ios::in);
			    std::string estr;
			    while(getline(infile,estr))
			    {
				outfile<<estr<<"\n";
			    }
			    std::string path = path_point + "temp" + ".point";

			    remove(path.c_str());
			    outfile.close();
			    infile.close();
                            ROS_INFO("marker delete");
			    //订阅marker，遍历marker，写一个回调函数，参数是row
			    //visualization_msgs::MarkerArray markers;
			    //for (auto& marker : markers.markers){
				//ROS_INFO("marker %d got", marker.id);
				//if(marker.id == row){
				//ROS_INFO("find marker");
				//marker.action = visualization_msgs::Marker::DELETE;
                        	//marker_pub_.publish(marker);}
                                //                                 }

			}

	}
}
	//void PathMarkPlugin::del_marker(const visualization_msgs::Marker::ConstPtr& msg,int row){
	 // for (int i = 0;i < msg -> markers.size(); i++){
	//	int id = msg -> markers[i].id;
	//	if(id == row){
	//		visualization_msgs::Marker marker;
	//		marker.id = id;
	//		marker.action = visualization_msgs::Marker::DELETE;
	//}
//}
	
//	else
//	{
//		ROS_INFO("Row %d is changed", row);
//	}
    

}

#include <pluginlib/class_list_macros.h>

PLUGINLIB_EXPORT_CLASS(autolabor_plugin1::PathMarkPlugin, rviz::Panel)
