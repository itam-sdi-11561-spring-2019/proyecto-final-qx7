#!/usr/bin/env python
import rospy
import time
import math
from geometry_msgs.msg import Pose2D
from graphical_client.msg import Pose2D_Array
import sympy
import sympy as sym
from sympy.abc import s
from sympy.geometry import Point, Circle, Segment, intersection, Ray

poseSelf= Pose2D()
poseNav= Pose2D()
velVector= Pose2D()

def callbackTrajectory(data):
    n=len(data.poses)
    poseNav.x= int(data.poses[1].x)
    poseNav.y= int(data.poses[1].y)
    poseNav.theta= data.poses[1].theta

def callbackSelf(dataSelf):
    poseSelf.x = int(dataSelf.x)
    poseSelf.y = int(dataSelf.y)
    poseSelf.theta = dataSelf.theta

def navigator():
    pub= rospy.Publisher('/nav_target', Pose2D, queue_size=10)
    rospy.Subscriber('/trajectory', Pose2D_Array, callbackTrajectory)
    rospy.Subscriber('/y_r0', Pose2D, callbackSelf)
    rospy.init_node('navigation')
    rate= rospy.Rate(1) # Hz
    while not rospy.is_shutdown():
        pSelf=Point(poseSelf.x,poseSelf.y)
        pNav=Point(poseNav.x,poseNav.y)
        dist= pSelf.distance(pNav)
        s= math.atan2(poseNav.y-poseSelf.y,poseNav.x-poseSelf.x)
        velVector.theta= s-poseSelf.theta
        if(dist>500):
            v= 350
        elif(dist>100):
            v=0.3*dist +230
        else:
            v=200
        velVector.x= v

        pub.publish(velVector)
        rate.sleep()

if __name__ == '__main__':
    try:
        navigator()
    except rospy.ROSInterruptException:
        pass
