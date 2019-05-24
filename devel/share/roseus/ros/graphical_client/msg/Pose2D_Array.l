;; Auto-generated. Do not edit!


(when (boundp 'graphical_client::Pose2D_Array)
  (if (not (find-package "GRAPHICAL_CLIENT"))
    (make-package "GRAPHICAL_CLIENT"))
  (shadow 'Pose2D_Array (find-package "GRAPHICAL_CLIENT")))
(unless (find-package "GRAPHICAL_CLIENT::POSE2D_ARRAY")
  (make-package "GRAPHICAL_CLIENT::POSE2D_ARRAY"))

(in-package "ROS")
;;//! \htmlinclude Pose2D_Array.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass graphical_client::Pose2D_Array
  :super ros::object
  :slots (_header _poses ))

(defmethod graphical_client::Pose2D_Array
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:poses __poses) (let (r) (dotimes (i 0) (push (instance geometry_msgs::Pose2D :init) r)) r))
    )
   (send-super :init)
   (setq _header __header)
   (setq _poses __poses)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:poses
   (&rest __poses)
   (if (keywordp (car __poses))
       (send* _poses __poses)
     (progn
       (if __poses (setq _poses (car __poses)))
       _poses)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; geometry_msgs/Pose2D[] _poses
    (apply #'+ (send-all _poses :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; geometry_msgs/Pose2D[] _poses
     (write-long (length _poses) s)
     (dolist (elem _poses)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; geometry_msgs/Pose2D[] _poses
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _poses (let (r) (dotimes (i n) (push (instance geometry_msgs::Pose2D :init) r)) r))
     (dolist (elem- _poses)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get graphical_client::Pose2D_Array :md5sum-) "fe69439915367943cc7cac6f66b2df68")
(setf (get graphical_client::Pose2D_Array :datatype-) "graphical_client/Pose2D_Array")
(setf (get graphical_client::Pose2D_Array :definition-)
      "Header header
geometry_msgs/Pose2D[] poses 
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/Pose2D
# This expresses a position and orientation on a 2D manifold.

float64 x
float64 y
float64 theta
")



(provide :graphical_client/Pose2D_Array "fe69439915367943cc7cac6f66b2df68")


