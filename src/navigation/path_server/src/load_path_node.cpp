
#include <load_path/load_path_node.h>

namespace autolabor_tools {

    LoadPath::LoadPath() {

    }

    LoadPath::~LoadPath() {

    }

    bool LoadPath::load_path_callback(path_server::SetPathName::Request &req, path_server::SetPathName::Response &res) {
        std::string filename = req.path_name;
        if (filename.empty()) {
            ROS_WARN_STREAM("path_file cannot be empty!");
            return false;
        } else {
            std::string path = ros::package::getPath("path_server") + "/path_data/";
            return load_path(path + filename + ".path");
        }
    }

    bool LoadPath::load_path(std::string path) {
        if (path.empty()) {
            ROS_WARN_STREAM("path_file cannot be empty!");
            return false;
        }
        std::ifstream is(path);
        if (!is) {
            ROS_WARN_STREAM("file : " + path + " not exist!");
            return false;
        } else {
            record_path_.poses.clear();
            record_path_.header.frame_id = map_frame_;
            record_path_.header.stamp = ros::Time::now();
            while (!is.eof()) {
                double x, y, yaw;
                geometry_msgs::PoseStamped poseStamped;
                is >> x >> y >> yaw;
		//ROS_ERROR("pos: %f;%f;%f",x,y,yaw);
                poseStamped.header.frame_id = map_frame_;
                poseStamped.header.stamp = ros::Time::now();
                poseStamped.pose.position.x = x;
                poseStamped.pose.position.y = y;
                poseStamped.pose.position.z = 0;
                poseStamped.pose.orientation = tf::createQuaternionMsgFromYaw(yaw);
                record_path_.poses.push_back(poseStamped);
            }
            full_path_pub_.publish(record_path_);
            return true;
        }
    }

    bool LoadPath::load_point_callback(path_server::SetPointName::Request &req, path_server::SetPointName::Response &res) {
        std::string filename = req.point_name;
        if (filename.empty()) {
            ROS_WARN_STREAM("point_file cannot be empty!");
            return false;
        } else {
            std::string path = ros::package::getPath("path_server") + "/path_data_point/";
            return load_point(path + filename + ".point");
        }
    }

    bool LoadPath::load_point(std::string path) {
        if (path.empty()) {
            ROS_WARN_STREAM("point_file cannot be empty!");
            return false;
        }
        std::ifstream is(path);
        if (!is) {
            ROS_WARN_STREAM("file : " + path + " not exist!");
            return false;
        } else {
            record_path_point_.poses.clear();
            record_path_point_.header.frame_id = map_frame_;
            record_path_point_.header.stamp = ros::Time::now();
            while (!is.eof()) {
                double x, y, yaw;
		int id;
                geometry_msgs::PoseStamped poseStamped;
                is >> id >> x >> y >> yaw;
		ROS_ERROR("mark id:%d  pos: %f;%f;%f",id,x,y,yaw);
                poseStamped.header.frame_id = map_frame_;
                poseStamped.header.stamp = ros::Time::now();
                poseStamped.pose.position.x = x;
                poseStamped.pose.position.y = y;
                poseStamped.pose.position.z = id;
                poseStamped.pose.orientation = tf::createQuaternionMsgFromYaw(yaw);
                record_path_point_.poses.push_back(poseStamped);
            }
            full_point_pub_.publish(record_path_point_);
            return true;
        }
    }

    bool LoadPath::load_track(std::string path) {
        if (path.empty()) {
            ROS_WARN_STREAM("track_file cannot be empty!");
            return false;
        }
        std::ifstream is(path);
        if (!is) {
            ROS_WARN_STREAM("file : " + path + " not exist!");
            return false;
        } else {
            while (!is.eof()) {
                double x, y, yaw;
                geometry_msgs::PoseStamped poseStamped;
                is >> x >> y >> yaw;
		//ROS_ERROR("track_pos: %f;%f;%f",x,y,yaw);
                poseStamped.header.frame_id = map_frame_;
                poseStamped.header.stamp = ros::Time::now();
                poseStamped.pose.position.x = x;
                poseStamped.pose.position.y = y;
                poseStamped.pose.position.z = 0;
                poseStamped.pose.orientation = tf::createQuaternionMsgFromYaw(yaw);
		record_path_track_.poses.push_back(poseStamped);
		
		//ROS_ERROR("track has been published!");
            }
	    full_track_pub_.publish(record_path_track_);
            return true;
        }
    }

    void LoadPath::run() {
        ros::NodeHandle private_nh("~");

        private_nh.param<std::string>("map_frame", map_frame_, "map");
        private_nh.param<std::string>("path_file", path_file_, "");
	private_nh.param<std::string>("point_file", point_file_, "");
	private_nh.param<std::string>("track_file", track_file_, "default_track_point");

        load_path_server_ = nh_.advertiseService("load_path_server", &LoadPath::load_path_callback, this);
	load_point_server_ = nh_.advertiseService("load_point_server", &LoadPath::load_point_callback, this);
        full_path_pub_ = nh_.advertise<nav_msgs::Path>("recorded_path", 1, true);
	full_point_pub_ = nh_.advertise<nav_msgs::Path>("recorded_path_point", 1, true);
	full_track_pub_ = nh_.advertise<nav_msgs::Path>("my_track_topic", 1, true);

        if (!path_file_.empty()) {
            std::string path = ros::package::getPath("path_server") + "/path_data/";
            if (access(path.c_str(), 0) != -1) {
                load_path(path + path_file_ + ".path");
            }
        }

        if (!point_file_.empty()) {
            std::string path_p = ros::package::getPath("path_server") + "/path_data_point/";
            if (access(path_p.c_str(), 0) != -1) {
                load_point(path_p + point_file_ + ".point");
            }
        }

        if (!track_file_.empty()) {
            std::string path_t = ros::package::getPath("path_server") + "/path_track_data/";
            if (access(path_t.c_str(), 0) != -1) {
                load_track(path_t + track_file_ + ".track");
            }
        }
        ros::spin();
    }

}

int main(int argc, char **argv) {
    ros::init(argc, argv, "load_path");
    autolabor_tools::LoadPath loadPath;
    loadPath.run();
    return 0;
}
