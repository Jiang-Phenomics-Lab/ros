;; Auto-generated. Do not edit!


(when (boundp 'path_server::SetPhotoPoint)
  (if (not (find-package "PATH_SERVER"))
    (make-package "PATH_SERVER"))
  (shadow 'SetPhotoPoint (find-package "PATH_SERVER")))
(unless (find-package "PATH_SERVER::SETPHOTOPOINT")
  (make-package "PATH_SERVER::SETPHOTOPOINT"))
(unless (find-package "PATH_SERVER::SETPHOTOPOINTREQUEST")
  (make-package "PATH_SERVER::SETPHOTOPOINTREQUEST"))
(unless (find-package "PATH_SERVER::SETPHOTOPOINTRESPONSE")
  (make-package "PATH_SERVER::SETPHOTOPOINTRESPONSE"))

(in-package "ROS")





(defclass path_server::SetPhotoPointRequest
  :super ros::object
  :slots (_id _x _y _yaw ))

(defmethod path_server::SetPhotoPointRequest
  (:init
   (&key
    ((:id __id) 0)
    ((:x __x) 0.0)
    ((:y __y) 0.0)
    ((:yaw __yaw) 0.0)
    )
   (send-super :init)
   (setq _id (round __id))
   (setq _x (float __x))
   (setq _y (float __y))
   (setq _yaw (float __yaw))
   self)
  (:id
   (&optional __id)
   (if __id (setq _id __id)) _id)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:yaw
   (&optional __yaw)
   (if __yaw (setq _yaw __yaw)) _yaw)
  (:serialization-length
   ()
   (+
    ;; int64 _id
    8
    ;; float64 _x
    8
    ;; float64 _y
    8
    ;; float64 _yaw
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int64 _id
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _id (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _id) (= (length (_id . bv)) 2)) ;; bignum
              (write-long (ash (elt (_id . bv) 0) 0) s)
              (write-long (ash (elt (_id . bv) 1) -1) s))
             ((and (class _id) (= (length (_id . bv)) 1)) ;; big1
              (write-long (elt (_id . bv) 0) s)
              (write-long (if (>= _id 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _id s)(write-long (if (>= _id 0) 0 #xffffffff) s)))
     ;; float64 _x
       (sys::poke _x (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _y
       (sys::poke _y (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _yaw
       (sys::poke _yaw (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int64 _id
#+(or :alpha :irix6 :x86_64)
      (setf _id (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _id (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; float64 _x
     (setq _x (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _y
     (setq _y (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _yaw
     (setq _yaw (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass path_server::SetPhotoPointResponse
  :super ros::object
  :slots ())

(defmethod path_server::SetPhotoPointResponse
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

(defclass path_server::SetPhotoPoint
  :super ros::object
  :slots ())

(setf (get path_server::SetPhotoPoint :md5sum-) "c4a0898a68886791d7b84a9f35d84726")
(setf (get path_server::SetPhotoPoint :datatype-) "path_server/SetPhotoPoint")
(setf (get path_server::SetPhotoPoint :request) path_server::SetPhotoPointRequest)
(setf (get path_server::SetPhotoPoint :response) path_server::SetPhotoPointResponse)

(defmethod path_server::SetPhotoPointRequest
  (:response () (instance path_server::SetPhotoPointResponse :init)))

(setf (get path_server::SetPhotoPointRequest :md5sum-) "c4a0898a68886791d7b84a9f35d84726")
(setf (get path_server::SetPhotoPointRequest :datatype-) "path_server/SetPhotoPointRequest")
(setf (get path_server::SetPhotoPointRequest :definition-)
      "int64 id
float64 x
float64 y
float64 yaw
---

")

(setf (get path_server::SetPhotoPointResponse :md5sum-) "c4a0898a68886791d7b84a9f35d84726")
(setf (get path_server::SetPhotoPointResponse :datatype-) "path_server/SetPhotoPointResponse")
(setf (get path_server::SetPhotoPointResponse :definition-)
      "int64 id
float64 x
float64 y
float64 yaw
---

")



(provide :path_server/SetPhotoPoint "c4a0898a68886791d7b84a9f35d84726")


