; Auto-generated. Do not edit!


(cl:in-package path_server-srv)


;//! \htmlinclude SetPointName-request.msg.html

(cl:defclass <SetPointName-request> (roslisp-msg-protocol:ros-message)
  ((point_name
    :reader point_name
    :initarg :point_name
    :type cl:string
    :initform ""))
)

(cl:defclass SetPointName-request (<SetPointName-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetPointName-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetPointName-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name path_server-srv:<SetPointName-request> is deprecated: use path_server-srv:SetPointName-request instead.")))

(cl:ensure-generic-function 'point_name-val :lambda-list '(m))
(cl:defmethod point_name-val ((m <SetPointName-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader path_server-srv:point_name-val is deprecated.  Use path_server-srv:point_name instead.")
  (point_name m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetPointName-request>) ostream)
  "Serializes a message object of type '<SetPointName-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'point_name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'point_name))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetPointName-request>) istream)
  "Deserializes a message object of type '<SetPointName-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'point_name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'point_name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetPointName-request>)))
  "Returns string type for a service object of type '<SetPointName-request>"
  "path_server/SetPointNameRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetPointName-request)))
  "Returns string type for a service object of type 'SetPointName-request"
  "path_server/SetPointNameRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetPointName-request>)))
  "Returns md5sum for a message object of type '<SetPointName-request>"
  "0e0e3778202d80927ca53f4e1bc7f936")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetPointName-request)))
  "Returns md5sum for a message object of type 'SetPointName-request"
  "0e0e3778202d80927ca53f4e1bc7f936")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetPointName-request>)))
  "Returns full string definition for message of type '<SetPointName-request>"
  (cl:format cl:nil "string point_name~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetPointName-request)))
  "Returns full string definition for message of type 'SetPointName-request"
  (cl:format cl:nil "string point_name~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetPointName-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'point_name))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetPointName-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SetPointName-request
    (cl:cons ':point_name (point_name msg))
))
;//! \htmlinclude SetPointName-response.msg.html

(cl:defclass <SetPointName-response> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass SetPointName-response (<SetPointName-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetPointName-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetPointName-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name path_server-srv:<SetPointName-response> is deprecated: use path_server-srv:SetPointName-response instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetPointName-response>) ostream)
  "Serializes a message object of type '<SetPointName-response>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetPointName-response>) istream)
  "Deserializes a message object of type '<SetPointName-response>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetPointName-response>)))
  "Returns string type for a service object of type '<SetPointName-response>"
  "path_server/SetPointNameResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetPointName-response)))
  "Returns string type for a service object of type 'SetPointName-response"
  "path_server/SetPointNameResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetPointName-response>)))
  "Returns md5sum for a message object of type '<SetPointName-response>"
  "0e0e3778202d80927ca53f4e1bc7f936")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetPointName-response)))
  "Returns md5sum for a message object of type 'SetPointName-response"
  "0e0e3778202d80927ca53f4e1bc7f936")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetPointName-response>)))
  "Returns full string definition for message of type '<SetPointName-response>"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetPointName-response)))
  "Returns full string definition for message of type 'SetPointName-response"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetPointName-response>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetPointName-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SetPointName-response
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SetPointName)))
  'SetPointName-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SetPointName)))
  'SetPointName-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetPointName)))
  "Returns string type for a service object of type '<SetPointName>"
  "path_server/SetPointName")