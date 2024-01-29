#ifndef PROJECT_PATH_MARK_PLUGIN_H
#define PROJECT_PATH_MARK_PLUGIN_H

# include <ros/ros.h>
# include <rviz/panel.h>

#include <QHBoxLayout>
#include <QPushButton>
#include <QString>

#include <random_numbers/random_numbers.h>

#include <ros/package.h>

#include <string>
#include <fstream>

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#include <tf/transform_listener.h>
#include <tf/transform_datatypes.h>

#include <path_server/SetPathName.h>
#include <std_srvs/Empty.h>
#include <nav_msgs/Odometry.h>
#include <nav_msgs/Path.h>
#include <geometry_msgs/PoseStamped.h>

#include <tf/transform_datatypes.h>

#include <std_srvs/Empty.h>
#include <actionlib_msgs/GoalID.h>

#include <geometry_msgs/PoseStamped.h>


#include <cstdio>

#include <ros/console.h>

#include <fstream>
#include <sstream>

#include <QPainter>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QLabel>
#include <QTimer>
#include <QDebug>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/qheaderview.h>

#include <string>



#include <tf2_ros/transform_listener.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>



#include <QPushButton>
#include <QTableWidget>
#include <QCheckBox>

#include <visualization_msgs/Marker.h>
#include <geometry_msgs/PoseArray.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/PoseStamped.h>
#include <std_msgs/String.h>
#include <actionlib_msgs/GoalStatus.h>
#include <actionlib_msgs/GoalStatusArray.h>
#include <tf/transform_datatypes.h>

#include <visualization_msgs/MarkerArray.h>
namespace autolabor_plugin1 {
    class PathMarkPlugin : public rviz::Panel {
    Q_OBJECT
    public:
        PathMarkPlugin(QWidget *parent = 0);

        virtual void load(const rviz::Config &config);

        virtual void save(rviz::Config config) const;

    protected Q_SLOTS:

        void start_record_callback();

        void stop_record_callback();

        void start_task_callback();

        void stop_task_callback();

	void photo_task_button_callback();

        void markPose(const geometry_msgs::PoseStamped::ConstPtr &pose);
	
	void initPoseTable();
	void writePose(const geometry_msgs::PoseStamped::ConstPtr& msg);
	
	void photo_point_callback(int row, int column);
	void del_marker(const visualization_msgs::Marker::ConstPtr& msg,int row);

	void resetTable();

	void writeTrack(const nav_msgs::Path::ConstPtr &msg);
    protected:
        QTableWidget *poseArray_table_;
        QCheckBox *cycle_checkbox_;
        //QTableWidgetItem*item_;
	geometry_msgs::PoseArray pose_array_;

    private:
        random_numbers::RandomNumberGenerator generator_;
	nav_msgs::Path record_path_point_, record_path_track_;
        ros::NodeHandle nh_;
        ros::ServiceClient start_record_client_, stop_record_client_, start_record_client_point_, stop_record_client_point_, stop_record_client_track_;
        ros::Publisher start_task_pub_, cancel_task_pub_,marker_pub_;

        ros::Subscriber point_sub_, path_subscribe_, photopoint_sub, track_sub_;


        QPushButton *start_record_button_;
        QPushButton *stop_record_button_;
        QPushButton *start_task_button_;
        QPushButton *stop_task_button_;
	QPushButton *photo_task_button_;

        void record_callback(const nav_msgs::Odometry::ConstPtr &msg);
        void record_data(double x, double y, double yaw);
	void callback(const nav_msgs::Path::ConstPtr &msg);
    };
}


#endif //PROJECT_PATH_MARK_PLUGIN_H
