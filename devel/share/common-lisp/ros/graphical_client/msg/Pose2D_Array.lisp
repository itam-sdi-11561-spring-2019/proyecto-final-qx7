; Auto-generated. Do not edit!


(cl:in-package graphical_client-msg)


;//! \htmlinclude Pose2D_Array.msg.html

(cl:defclass <Pose2D_Array> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (poses
    :reader poses
    :initarg :poses
    :type (cl:vector geometry_msgs-msg:Pose2D)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:Pose2D :initial-element (cl:make-instance 'geometry_msgs-msg:Pose2D))))
)

(cl:defclass Pose2D_Array (<Pose2D_Array>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Pose2D_Array>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Pose2D_Array)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name graphical_client-msg:<Pose2D_Array> is deprecated: use graphical_client-msg:Pose2D_Array instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <Pose2D_Array>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graphical_client-msg:header-val is deprecated.  Use graphical_client-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'poses-val :lambda-list '(m))
(cl:defmethod poses-val ((m <Pose2D_Array>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader graphical_client-msg:poses-val is deprecated.  Use graphical_client-msg:poses instead.")
  (poses m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Pose2D_Array>) ostream)
  "Serializes a message object of type '<Pose2D_Array>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'poses))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'poses))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Pose2D_Array>) istream)
  "Deserializes a message object of type '<Pose2D_Array>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'poses) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'poses)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'geometry_msgs-msg:Pose2D))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Pose2D_Array>)))
  "Returns string type for a message object of type '<Pose2D_Array>"
  "graphical_client/Pose2D_Array")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Pose2D_Array)))
  "Returns string type for a message object of type 'Pose2D_Array"
  "graphical_client/Pose2D_Array")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Pose2D_Array>)))
  "Returns md5sum for a message object of type '<Pose2D_Array>"
  "fe69439915367943cc7cac6f66b2df68")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Pose2D_Array)))
  "Returns md5sum for a message object of type 'Pose2D_Array"
  "fe69439915367943cc7cac6f66b2df68")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Pose2D_Array>)))
  "Returns full string definition for message of type '<Pose2D_Array>"
  (cl:format cl:nil "Header header~%geometry_msgs/Pose2D[] poses ~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Pose2D_Array)))
  "Returns full string definition for message of type 'Pose2D_Array"
  (cl:format cl:nil "Header header~%geometry_msgs/Pose2D[] poses ~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Pose2D_Array>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'poses) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Pose2D_Array>))
  "Converts a ROS message object to a list"
  (cl:list 'Pose2D_Array
    (cl:cons ':header (header msg))
    (cl:cons ':poses (poses msg))
))
