#ifndef PROJECT_LOAD_PATH_NODE_H
#define PROJECT_LOAD_PATH_NODE_H

#include <string>
#include <fstream>

#include <ros/ros.h>
#include <ros/package.h>

#include <tf/transform_listener.h>
#include <tf/transform_datatypes.h>

#include <nav_msgs/Path.h>
#include "path_server/SetPathName.h"
#include <path_server/SetPointName.h>

namespace autolabor_tools {
    class LoadPath {
    public:
        LoadPath();

        ~LoadPath();

        void run();

    private:
        bool load_path(std::string path);

        bool load_path_callback(path_server::SetPathName::Request &req, path_server::SetPathName::Response &res);

	bool load_point_callback(path_server::SetPointName::Request &req, path_server::SetPointName::Response &res);

	bool load_point(std::string path);

	bool load_track(std::string path);

    private:
        ros::NodeHandle nh_;
        tf::TransformListener tf_;

        std::string map_frame_, path_file_, point_file_,track_file_;
        ros::Publisher full_path_pub_, full_point_pub_, full_track_pub_;
        nav_msgs::Path record_path_, record_path_point_, record_path_track_;
        ros::ServiceServer load_path_server_,load_point_server_;
    };
}


#endif //PROJECT_LOAD_PATH_NODE_H
