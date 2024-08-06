#include <record_path/record_path_node.h>

namespace autolabor_tools {


    RecordPath::RecordPath() : record_flag_(false), first_record_(true) {

    }

    RecordPath::~RecordPath() {
        output_file_.close();

	output_file_point_.close();

	output_file_track_.close();
    }


    void RecordPath::record_callback(const nav_msgs::Odometry::ConstPtr &msg) {
        if (record_flag_ && tf_.canTransform(map_frame_, base_link_frame_, ros::Time())) {
            tf::StampedTransform map_to_baselink;
            tf_.lookupTransform(map_frame_, base_link_frame_, ros::Time(), map_to_baselink);
            double x = map_to_baselink.getOrigin().getX();
            double y = map_to_baselink.getOrigin().getY();
            double yaw = tf::getYaw(map_to_baselink.getRotation());

            if (first_record_) {
                record_data(x, y, yaw);
                first_record_ = false;
            } else if (norm2(cache_x_ - x, cache_y_ - y, 0) > (distance_interval_ * distance_interval_)) {
                record_data(x, y, yaw);
		//if(norm2(cache_x_p - x, cache_y_p - y, 0) > (distance_interval_point_ * distance_interval_point_)){
		record_data_point(x, y, yaw);
		//}
            }
            
        }
    }

    void RecordPath::record_data(double x, double y, double yaw) {
        if (output_file_) {
            output_file_ << x << " " << y << " " << yaw << std::endl;
        }

        cache_x_ = x;
        cache_y_ = y;
        cache_yaw_ = yaw;

        geometry_msgs::PoseStamped poseStamped;
        poseStamped.header.stamp = ros::Time::now();
        poseStamped.header.frame_id = map_frame_;
        poseStamped.pose.position.x = x;
        poseStamped.pose.position.y = y;
        poseStamped.pose.orientation = tf::createQuaternionMsgFromYaw(yaw);

        //point_pub_.publish(poseStamped);

        path_data_.poses.push_back(poseStamped);
        path_pub_.publish(path_data_);
    }

    void RecordPath::record_data_point(double x, double y, double yaw){

	cache_x_p = x;
        cache_y_p = y;
        cache_yaw_p = yaw;
        geometry_msgs::PoseStamped poseStamped_point;
        poseStamped_point.header.stamp = ros::Time::now();
        poseStamped_point.header.frame_id = map_frame_;
        poseStamped_point.pose.position.x = x;
        poseStamped_point.pose.position.y = y;
        poseStamped_point.pose.orientation = tf::createQuaternionMsgFromYaw(yaw);

        std::string filename_track = "default_track_point";
        std::string path_track = ros::package::getPath("path_server") + "/path_track_data/";
        if (access(path_track.c_str(), 0) == -1) {
            mkdir(path_track.c_str(), 0777);
        }
        //output_file_point_.close();
	std::ofstream output_file_track_;
        output_file_track_.open(path_track + filename_track + ".track",std::ofstream::app);

        //path_data_point_.poses.clear();
	
	output_file_track_ << x << " " << y << " " << yaw << std::endl;

	point_pub_.publish(poseStamped_point);
	}


    void RecordPath::run() {
        ros::NodeHandle private_node("~");

        private_node.param<std::string>("map_frame", map_frame_, "map");
        private_node.param<std::string>("base_link_frame", base_link_frame_, "base_link");
        private_node.param<std::string>("odom_topic", odom_topic_, "odom");

        private_node.param<double>("distance_interval", distance_interval_, 0.05);
        private_node.param<double>("distance_interval_point", distance_interval_point_, 0.5);

        path_pub_ = nh_.advertise<nav_msgs::Path>("recorded_path", 1, true);
	path_pub_point_ = nh_.advertise<nav_msgs::Path>("recorded_path_point", 1, true);
	point_pub_ = nh_.advertise<geometry_msgs::PoseStamped>("my_pose_topic", 10);
        odom_subscribe_ = nh_.subscribe<nav_msgs::Odometry>(odom_topic_, 10, &RecordPath::record_callback, this);
        start_record_server_ = nh_.advertiseService("start_record_path", &RecordPath::start_record, this);
        stop_record_server_ = nh_.advertiseService("stop_record_path", &RecordPath::stop_record, this);
	start_record_server_point_ = nh_.advertiseService("start_record_path_point", &RecordPath::start_record_point, this);
        stop_record_server_point_ = nh_.advertiseService("stop_record_path_point", &RecordPath::stop_record_point, this);
        stop_record_server_track_ = nh_.advertiseService("stop_record_path_track", &RecordPath::stop_record_track, this);
        ros::spin();
    }

    bool RecordPath::start_record(path_server::SetPathName::Request &req, path_server::SetPathName::Response &res) {
        std::string filename = req.path_name;
        if (filename.empty()) {
            filename = get_time_str();
        }
        std::string path = ros::package::getPath("path_server") + "/path_data/";
        if (access(path.c_str(), 0) == -1) {
            mkdir(path.c_str(), 0777);
        }
        output_file_.close();
        output_file_ = std::ofstream(path + filename + ".path");

        path_data_.header.stamp = ros::Time::now();
        path_data_.header.frame_id = map_frame_;
        path_data_.poses.clear();
	path_data_point_.poses.clear();

	std::string track_file_name = ros::package::getPath("path_server") + "/path_track_data/" + "default_track_point.track";
        if (access(track_file_name.c_str(), 0) == -1) {
            mkdir(track_file_name.c_str(), 0777);
        }
	std::ofstream clean_file(track_file_name, std::ios::out);
        record_flag_ = true;
        first_record_ = true;
        return true;
    }

    bool RecordPath::stop_record(std_srvs::Empty::Request &req, std_srvs::Empty::Response &res) {
        if (record_flag_ && tf_.canTransform(map_frame_, base_link_frame_, ros::Time())) {
            tf::StampedTransform map_to_baselink;
            tf_.lookupTransform(map_frame_, base_link_frame_, ros::Time(), map_to_baselink);
            record_data(map_to_baselink.getOrigin().getX(), map_to_baselink.getOrigin().getY(), tf::getYaw(map_to_baselink.getRotation()));
        }
        output_file_.close();
        record_flag_ = false;
        return true;
    }

    bool RecordPath::start_record_point(path_server::SetPhotoPoint::Request &req, path_server::SetPhotoPoint::Response &res) {
	int id = req.id;
	double x = req.x;
	double y = req.y;
	double yaw = req.yaw;


        std::string filename_point = "default_photo_point";
        std::string path_point = ros::package::getPath("path_server") + "/path_data_point/";
        if (access(path_point.c_str(), 0) == -1) {
            mkdir(path_point.c_str(), 0777);
        }
        //output_file_point_.close();
	std::ofstream output_file_point_;
        output_file_point_.open(path_point + filename_point + ".point",std::ofstream::app);



        path_data_point_.header.stamp = ros::Time::now();
        path_data_point_.header.frame_id = map_frame_;
        //path_data_point_.poses.clear();
	
	output_file_point_ << id << " " << x << " " << y << " " << yaw << std::endl;
        cache_x_point_ = x;
        cache_y_point_ = y;
        cache_yaw_point_ = yaw;
	cache_id_point_ =id;

        geometry_msgs::PoseStamped poseStamped;
        poseStamped.header.stamp = ros::Time::now();
        poseStamped.header.frame_id = map_frame_;
        poseStamped.pose.position.x = x;
        poseStamped.pose.position.y = y;
	poseStamped.pose.position.z = id;
        poseStamped.pose.orientation = tf::createQuaternionMsgFromYaw(yaw);



        path_data_point_.poses.push_back(poseStamped);
        path_pub_point_.publish(path_data_point_);
        //record_flag_ = true;
        //first_record_ = true;
        return true;
    }

    bool RecordPath::stop_record_point(std_srvs::Empty::Request &req, std_srvs::Empty::Response &res) {

        output_file_point_.close();
	
        //record_flag_ = false;
        return true;
    }

    bool RecordPath::stop_record_track(std_srvs::Empty::Request &req, std_srvs::Empty::Response &res) {

        output_file_track_.close();
	
        //record_flag_ = false;
        return true;
    }
}

int main(int argc, char **argv) {
    ros::init(argc, argv, "record_path");
    autolabor_tools::RecordPath recordPath;
    recordPath.run();
    return 0;
}
