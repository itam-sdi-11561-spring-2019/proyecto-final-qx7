#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Pose2D

poseSelf= Pose2D()
poseNav= Pose2D()

def callbackTrajectory(data):
    rospy.loginfo(data)

def callbackSelf(dataSelf):
    poseSelf.x = dataSelf.x
    poseSelf.y = dataSelf.y
    poseSelf.theta = dataSelf.theta

def talker():
    pub = rospy.Publisher('/nav_target', Pose2D, queue_size=10)
    rospy.Subscriber('/trajectory', Pose2D_Array, callbackTrajectory)
    rospy.Subscriber('/y_r0', Pose2D, callbackSelf)
    rospy.init_node('navigation')
    rate = rospy.Rate(2) # Hz

    while not rospy.is_shutdown():
        poseNav= poseSelf
        pub.publish(poseNav)
        rate.sleep()

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass
