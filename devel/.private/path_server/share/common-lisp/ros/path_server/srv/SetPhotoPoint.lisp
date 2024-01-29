; Auto-generated. Do not edit!


(cl:in-package path_server-srv)


;//! \htmlinclude SetPhotoPoint-request.msg.html

(cl:defclass <SetPhotoPoint-request> (roslisp-msg-protocol:ros-message)
  ((id
    :reader id
    :initarg :id
    :type cl:integer
    :initform 0)
   (x
    :reader x
    :initarg :x
    :type cl:float
    :initform 0.0)
   (y
    :reader y
    :initarg :y
    :type cl:float
    :initform 0.0)
   (yaw
    :reader yaw
    :initarg :yaw
    :type cl:float
    :initform 0.0))
)

(cl:defclass SetPhotoPoint-request (<SetPhotoPoint-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetPhotoPoint-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetPhotoPoint-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name path_server-srv:<SetPhotoPoint-request> is deprecated: use path_server-srv:SetPhotoPoint-request instead.")))

(cl:ensure-generic-function 'id-val :lambda-list '(m))
(cl:defmethod id-val ((m <SetPhotoPoint-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader path_server-srv:id-val is deprecated.  Use path_server-srv:id instead.")
  (id m))

(cl:ensure-generic-function 'x-val :lambda-list '(m))
(cl:defmethod x-val ((m <SetPhotoPoint-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader path_server-srv:x-val is deprecated.  Use path_server-srv:x instead.")
  (x m))

(cl:ensure-generic-function 'y-val :lambda-list '(m))
(cl:defmethod y-val ((m <SetPhotoPoint-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader path_server-srv:y-val is deprecated.  Use path_server-srv:y instead.")
  (y m))

(cl:ensure-generic-function 'yaw-val :lambda-list '(m))
(cl:defmethod yaw-val ((m <SetPhotoPoint-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader path_server-srv:yaw-val is deprecated.  Use path_server-srv:yaw instead.")
  (yaw m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetPhotoPoint-request>) ostream)
  "Serializes a message object of type '<SetPhotoPoint-request>"
  (cl:let* ((signed (cl:slot-value msg 'id)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 18446744073709551616) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'x))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'y))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'yaw))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetPhotoPoint-request>) istream)
  "Deserializes a message object of type '<SetPhotoPoint-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'id) (cl:if (cl:< unsigned 9223372036854775808) unsigned (cl:- unsigned 18446744073709551616))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'x) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'y) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'yaw) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetPhotoPoint-request>)))
  "Returns string type for a service object of type '<SetPhotoPoint-request>"
  "path_server/SetPhotoPointRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetPhotoPoint-request)))
  "Returns string type for a service object of type 'SetPhotoPoint-request"
  "path_server/SetPhotoPointRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetPhotoPoint-request>)))
  "Returns md5sum for a message object of type '<SetPhotoPoint-request>"
  "c4a0898a68886791d7b84a9f35d84726")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetPhotoPoint-request)))
  "Returns md5sum for a message object of type 'SetPhotoPoint-request"
  "c4a0898a68886791d7b84a9f35d84726")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetPhotoPoint-request>)))
  "Returns full string definition for message of type '<SetPhotoPoint-request>"
  (cl:format cl:nil "int64 id~%float64 x~%float64 y~%float64 yaw~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetPhotoPoint-request)))
  "Returns full string definition for message of type 'SetPhotoPoint-request"
  (cl:format cl:nil "int64 id~%float64 x~%float64 y~%float64 yaw~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetPhotoPoint-request>))
  (cl:+ 0
     8
     8
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetPhotoPoint-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SetPhotoPoint-request
    (cl:cons ':id (id msg))
    (cl:cons ':x (x msg))
    (cl:cons ':y (y msg))
    (cl:cons ':yaw (yaw msg))
))
;//! \htmlinclude SetPhotoPoint-response.msg.html

(cl:defclass <SetPhotoPoint-response> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass SetPhotoPoint-response (<SetPhotoPoint-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetPhotoPoint-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetPhotoPoint-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name path_server-srv:<SetPhotoPoint-response> is deprecated: use path_server-srv:SetPhotoPoint-response instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetPhotoPoint-response>) ostream)
  "Serializes a message object of type '<SetPhotoPoint-response>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetPhotoPoint-response>) istream)
  "Deserializes a message object of type '<SetPhotoPoint-response>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetPhotoPoint-response>)))
  "Returns string type for a service object of type '<SetPhotoPoint-response>"
  "path_server/SetPhotoPointResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetPhotoPoint-response)))
  "Returns string type for a service object of type 'SetPhotoPoint-response"
  "path_server/SetPhotoPointResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetPhotoPoint-response>)))
  "Returns md5sum for a message object of type '<SetPhotoPoint-response>"
  "c4a0898a68886791d7b84a9f35d84726")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetPhotoPoint-response)))
  "Returns md5sum for a message object of type 'SetPhotoPoint-response"
  "c4a0898a68886791d7b84a9f35d84726")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetPhotoPoint-response>)))
  "Returns full string definition for message of type '<SetPhotoPoint-response>"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetPhotoPoint-response)))
  "Returns full string definition for message of type 'SetPhotoPoint-response"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetPhotoPoint-response>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetPhotoPoint-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SetPhotoPoint-response
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SetPhotoPoint)))
  'SetPhotoPoint-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SetPhotoPoint)))
  'SetPhotoPoint-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetPhotoPoint)))
  "Returns string type for a service object of type '<SetPhotoPoint>"
  "path_server/SetPhotoPoint")