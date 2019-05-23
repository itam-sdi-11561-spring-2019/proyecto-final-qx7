#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Pose2D
import sympy
import sympy as sym
from sympy.abc import s
from sympy.geometry import Point, Circle, Segment, intersection, Ray

poseSelf= Pose2D()
poseNav= Pose2D()
traj= Pose2D_Array()

def callbackTrajectory(data):
    traj= data;
    rospy.loginfo(data)

def callbackSelf(dataSelf):
    poseSelf.x = dataSelf.x
    poseSelf.y = dataSelf.y
    poseSelf.theta = dataSelf.theta

def navigator():
    pub= rospy.Publisher('/nav_target', Pose2D, queue_size=10)
    rospy.Subscriber('/trajectory', Pose2D_Array, callbackTrajectory)
    rospy.Subscriber('/y_r0', Pose2D, callbackSelf)
    rospy.init_node('navigation')
    rate= rospy.Rate(2) # Hz

    while not rospy.is_shutdown():

        print "fsdj", traj
        pub.publish(poseNav)
        rate.sleep()

if __name__ == '__main__':
    try:
        navigator()
    except rospy.ROSInterruptException:
        pass
