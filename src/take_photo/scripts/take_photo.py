#! /usr/bin/env python

import rospy
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import time

def take_photo():
    rospy.init_node('take_photo_node')
    bridge = CvBridge()
    image_topic = '/pico_camera/color_image'
    image_msg = rospy.wait_for_message(image_topic, Image)
    cv_image = bridge.imgmsg_to_cv2(image_msg, desired_encoding='bgr8')
    cv2.imwrite('/home/autolabor/catkin_ws/{}.jpg'.format(time.ctime()),cv_image)

if __name__ == '__main__':
    take_photo()
