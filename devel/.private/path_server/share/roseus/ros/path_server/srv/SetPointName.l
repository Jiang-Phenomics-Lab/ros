;; Auto-generated. Do not edit!


(when (boundp 'path_server::SetPointName)
  (if (not (find-package "PATH_SERVER"))
    (make-package "PATH_SERVER"))
  (shadow 'SetPointName (find-package "PATH_SERVER")))
(unless (find-package "PATH_SERVER::SETPOINTNAME")
  (make-package "PATH_SERVER::SETPOINTNAME"))
(unless (find-package "PATH_SERVER::SETPOINTNAMEREQUEST")
  (make-package "PATH_SERVER::SETPOINTNAMEREQUEST"))
(unless (find-package "PATH_SERVER::SETPOINTNAMERESPONSE")
  (make-package "PATH_SERVER::SETPOINTNAMERESPONSE"))

(in-package "ROS")





(defclass path_server::SetPointNameRequest
  :super ros::object
  :slots (_point_name ))

(defmethod path_server::SetPointNameRequest
  (:init
   (&key
    ((:point_name __point_name) "")
    )
   (send-super :init)
   (setq _point_name (string __point_name))
   self)
  (:point_name
   (&optional __point_name)
   (if __point_name (setq _point_name __point_name)) _point_name)
  (:serialization-length
   ()
   (+
    ;; string _point_name
    4 (length _point_name)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _point_name
       (write-long (length _point_name) s) (princ _point_name s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _point_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _point_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass path_server::SetPointNameResponse
  :super ros::object
  :slots ())

(defmethod path_server::SetPointNameResponse
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(defclass path_server::SetPointName
  :super ros::object
  :slots ())

(setf (get path_server::SetPointName :md5sum-) "0e0e3778202d80927ca53f4e1bc7f936")
(setf (get path_server::SetPointName :datatype-) "path_server/SetPointName")
(setf (get path_server::SetPointName :request) path_server::SetPointNameRequest)
(setf (get path_server::SetPointName :response) path_server::SetPointNameResponse)

(defmethod path_server::SetPointNameRequest
  (:response () (instance path_server::SetPointNameResponse :init)))

(setf (get path_server::SetPointNameRequest :md5sum-) "0e0e3778202d80927ca53f4e1bc7f936")
(setf (get path_server::SetPointNameRequest :datatype-) "path_server/SetPointNameRequest")
(setf (get path_server::SetPointNameRequest :definition-)
      "string point_name
---

")

(setf (get path_server::SetPointNameResponse :md5sum-) "0e0e3778202d80927ca53f4e1bc7f936")
(setf (get path_server::SetPointNameResponse :datatype-) "path_server/SetPointNameResponse")
(setf (get path_server::SetPointNameResponse :definition-)
      "string point_name
---

")



(provide :path_server/SetPointName "0e0e3778202d80927ca53f4e1bc7f936")


