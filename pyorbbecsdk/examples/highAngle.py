# This Python file uses the following encoding: utf-8

# if __name__ == "__main__":
#     pass

# Python 常用接口测试
#! /home/autolabor/anaconda3/envs/orbbec/bin/python
import ctypes
import os
import time
import datetime
from pyorbbecsdk import Pipeline, FrameSet
from pyorbbecsdk import Config
from pyorbbecsdk import OBSensorType, OBFormat
from pyorbbecsdk import OBError
from pyorbbecsdk import VideoStreamProfile
import cv2
import numpy as np
from utils import frame_to_bgr_image


# ESC_KEY = 27

if __name__ == "__main__":
    #相机
    config = Config()
    pipeline = Pipeline()
    try:
        profile_list = pipeline.get_stream_profile_list(OBSensorType.COLOR_SENSOR)
        try:
            color_profile: VideoStreamProfile = profile_list.get_default_video_stream_profile()
        except OBError as e:
            print(e)
            # color_profile = profile_list.get_default_video_stream_profile()
        config.enable_stream(color_profile)
    except Exception as e:
        print(e)
    pipeline.start(config)






    CUR_PATH = os.path.dirname(os.path.realpath(__file__))
    dllPath = os.path.join(CUR_PATH, "libRM_Base.so")
    pDll = ctypes.cdll.LoadLibrary(dllPath)

    #   API 初始化
    pDll.RM_API_Init(75, 0)

    #   连接机械臂
    byteIP = bytes("192.168.1.18", "gbk")
    nSocket = pDll.Arm_Socket_Start(byteIP, 8080, 200)
    print(nSocket)

    #   查询机械臂连接状态
    nRet = pDll.Arm_Socket_State(nSocket)
    print(nRet)

    #   设置机械臂末端参数为初始值
    nRet = pDll.Set_Arm_Tip_Init(nSocket, 1)
    print(nRet)

    #   设置机械臂动力学碰撞检测等级
    nRet = pDll.Set_Collision_Stage(nSocket, 6, 1)
    print(nRet)

    #joint poses list
    joint_list = [
		   #[-50.027,-20.768,-2.425,33.205,9.864,84.738,0.03],
		   #[-50.027,-20.768,-2.425,33.205,9.864,92,0.03],
		   #[-50.027,-20.768,-2.557,33.237,9.911,100.695,0.004],
                   #[-50.027,-20.768,-2.557,33.237,9.911,107.695,0.004],
		   #[-50.027,-20.996,-2.425,30.205,9.864,114.98,-0.869],
		   #[-53.771,-20.654,2.202,32.325,9.742,113.972,-0.005],
		   #[-53.82,-8.618,2.101,22.201,8.886,121.14,-0.018]]
		    [-45.315,-38.739,-1.266,58.224,8.052,114,-0.181],
                    [-45.315,-39.739,-1.266,54.224,8.052,114,-0.181],
                    [-45.278,-40.85,-1.266,50.4,8.052,114,-0.20],
		    [-45.278,-44.85,-1.266,50.4,8.052,114,-0.20],
		    [-45.278,-48.85,-1.266,50.4,8.052,114,-0.20],
		    [-45.278,-52.85,-1.266,50.4,8.052,114,-0.20],
		    [-45.278,-57.914,-1.237,50.4,8.052,114,-0.20]]

    float_joint = ctypes.c_float * 7
    joint = float_joint()
    for j,pose in enumerate(joint_list):
        for i, value in enumerate(pose):
            joint[i] = value
        ret = pDll.Movej_Cmd(nSocket, joint, 20, 1)
        print("movej ret:" + str(ret))
        time.sleep(0.5)
        i = 0
        while True:
            print('start get frame')
            frames: FrameSet = pipeline.wait_for_frames(100)
            print('got frame')
            if frames is None:
                continue
            color_frame = frames.get_color_frame()
            if color_frame is None:
                continue
            # covert to RGB format
            color_image = frame_to_bgr_image(color_frame)
            if color_image is None:
                print("failed to convert frame to image")
                continue
            # i  = i + 1
            current_time = datetime.datetime.now().strftime("%Y%m%d_%H%M%S")

            # if i == 40:
                #time.sleep(0.5)
            cv2.imwrite(f'/home/autolabor/catkin_ws/{current_time}_pose_{j}.jpg', color_image)
            break

            # print("take photo!")
    # joint[0] = -0.21
    # joint[1] = 6.135
    # joint[2] = -51.627
    # joint[3] = 51.877
    # joint[4] = 10.277
    # joint[5] = 58.672
    # joint[6] = -0.036
    # MoveJ 运动
    # ret = pDll.Movej_Cmd(nSocket, joint, 20, 0, 1)
    # print("movej ret:" + str(ret))
    # time.sleep(10)
#test
    # i = 0
    # while True:
    #     frames: FrameSet = pipeline.wait_for_frames(100)
    #     if frames is None:
    #         continue
    #     color_frame = frames.get_color_frame()
    #     if color_frame is None:
    #         continue
    #     # covert to RGB format
    #     color_image = frame_to_bgr_image(color_frame)
    #     if color_image is None:
    #         print("failed to convert frame to image")
    #         continue
    #     i  = i + 1
    #     if i == 30:
    #         cv2.imwrite('/home/autolabor/catkin_ws/pose_1.jpg', color_image)
    #         break

    # print("take photo!")

    # float_joint = ctypes.c_float * 7
    # joint = float_joint()
    # joint[0] = 19.462
    # joint[1] = 61.572
    # joint[2] = -48.838
    # joint[3] = 100.897
    # joint[4] = 63.435
    # joint[5] = -43.221
    # joint[6] = -0.017
    # # MoveJ 运动
    # ret = pDll.Movej_Cmd(nSocket, joint, 20, 0, 1)
    # print("movej ret:" + str(ret))
    # time.sleep(10)
    # # pipeline.stop()
    # i = 0
    # while True:
    #     frames: FrameSet = pipeline.wait_for_frames(100)
    #     if frames is None:
    #         continue
    #     color_frame = frames.get_color_frame()
    #     if color_frame is None:
    #         continue
    #     # covert to RGB format
    #     color_image = frame_to_bgr_image(color_frame)
    #     if color_image is None:
    #         print("failed to convert frame to image")
    #         continue
    #     i  = i + 1
    #     if i == 30:
    #         cv2.imwrite('/home/autolabor/catkin_ws/pose_2.jpg', color_image)
    #         break

    # print("take photo!")

    float_joint = ctypes.c_float * 7
    joint = float_joint()
    joint[0] =0
    joint[1] = 0
    joint[2] = 0
    joint[3] = 0
    joint[4] = 0
    joint[5] =0
    joint[6] = 0
    # MoveJ 运动


	
    ret = pDll.Movej_Cmd(nSocket, joint, 20, 1)
    print("movej ret:" + str(ret))


    #   关闭连接
    pDll.Arm_Socket_Close(nSocket)
