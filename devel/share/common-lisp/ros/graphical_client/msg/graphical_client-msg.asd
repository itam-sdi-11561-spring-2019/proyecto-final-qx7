
(cl:in-package :asdf)

(defsystem "graphical_client-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "Pose2D_Array" :depends-on ("_package_Pose2D_Array"))
    (:file "_package_Pose2D_Array" :depends-on ("_package"))
  ))