#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Pose2D
from graphical_client.msg import Pose2D_Array
import sympy
import sympy as sym
from sympy.abc import s
from sympy.geometry import Point, Circle,Segment, intersection

poseSelf= Pose2D()
poseTarget= Pose2D()
poseObs0= Pose2D()
poseObs1= Pose2D()
poseObs2= Pose2D()
poseObs3= Pose2D()
poseObs4= Pose2D()
poseObs5= Pose2D()
poseObs6= Pose2D()
poseObs7= Pose2D()
newP[]

def init_pose():
    pose = Pose2D()
    pose.x = 0
    pose.y = 0
    pose.theta = 0
    return pose
def callbackSelf(dataSelf):
    poseSelf.x = dataSelf.x
    poseSelf.y = dataSelf.y
    poseSelf.theta = dataSelf.theta

def callbackTarget(dataTarget):
    poseTarget.x = dataTarget.x
    poseTarget.y = dataTarget.y
    poseTarget.theta = dataTarget.theta

def callbackObs0(dataObs):
    poseObs0.x = dataObs.x
    poseObs0.y = dataObs.y
    poseObs0.theta = dataObs.theta

def callbackObs1(dataObs):
    poseObs1.x = dataObs.x
    poseObs1.y = dataObs.y
    poseObs1.theta = dataObs.theta

def callbackObs2(dataObs):
    poseObs2.x = dataObs.x
    poseObs2.y = dataObs.y
    poseObs2.theta = dataObs.theta

def callbackObs3(dataObs):
    poseObs3.x = dataObs.x
    poseObs3.y = dataObs.y
    poseObs3.theta = dataObs.theta

def callbackObs4(dataObs):
    poseObs4.x = dataObs.x
    poseObs4.y = dataObs.y
    poseObs4.theta = dataObs.theta

def callbackObs5(dataObs):
    poseObs5.x = dataObs.x
    poseObs5.y = dataObs.y
    poseObs5.theta = dataObs.theta

def callbackObs6(dataObs):
    poseObs6.x = dataObs.x
    poseObs6.y = dataObs.y
    poseObs6.theta = dataObs.theta

def callbackObs7(dataObs):
    poseObs7.x = dataObs.x
    poseObs7.y = dataObs.y
    poseObs7.theta = dataObs.theta

def calcCircs():
    obsCirculo=[]
    obsCirculo.append(Circle(Point(int(poseObs0.x),int(poseObs0.y)), 180))
    obsCirculo.append(Circle(Point(int(poseObs1.x),int(poseObs1.y)), 180))
    obsCirculo.append(Circle(Point(int(poseObs2.x),int(poseObs2.y)), 180))
    obsCirculo.append(Circle(Point(int(poseObs3.x),int(poseObs3.y)), 180))
    obsCirculo.append(Circle(Point(int(poseObs4.x),int(poseObs4.y)), 180))
    obsCirculo.append(Circle(Point(int(poseObs5.x),int(poseObs5.y)), 180))
    obsCirculo.append(Circle(Point(int(poseObs6.x),int(poseObs6.y)), 180))
    obsCirculo.append(Circle(Point(int(poseObs7.x),int(poseObs7.y)), 180))
    return obsCirculo;

def calcIntersect(circles,segment):
    intersect=[]
    intersect.append(intersection(circles[0],segment))
    intersect.append(intersection(circles[1],segment))
    intersect.append(intersection(circles[2],segment))
    intersect.append(intersection(circles[3],segment))
    intersect.append(intersection(circles[4],segment))
    intersect.append(intersection(circles[5],segment))
    intersect.append(intersection(circles[6],segment))
    intersect.append(intersection(circles[7],segment))
    return intersect;
# def intersectNotEmpty():
def arrange(arr):
    n= len(arr)
    for n in range(n):
        
# regresa un objeto Point para librar el obstaculo en cuestion
def recalc(inter, centro):
    a= inter[0]
    b= inter[1]
    seg= Segment(a,b)
    c= seg.midpoint

def talker():
    pub = rospy.Publisher('/trajectory', Pose2D_Array, queue_size=10)
    rospy.Subscriber('/y_r0', Pose2D, callbackSelf)
    rospy.Subscriber('/ball', Pose2D, callbackTarget)
    rospy.Subscriber('/b_r0', Pose2D, callbackObs0)
    rospy.Subscriber('/b_r2', Pose2D, callbackObs2)
    rospy.Subscriber('/b_r1', Pose2D, callbackObs1)
    rospy.Subscriber('/b_r3', Pose2D, callbackObs3)
    rospy.Subscriber('/b_r4', Pose2D, callbackObs4)
    rospy.Subscriber('/b_r5', Pose2D, callbackObs5)
    rospy.Subscriber('/b_r6', Pose2D, callbackObs6)
    rospy.Subscriber('/b_r7', Pose2D, callbackObs7)
    rospy.init_node('planner')
    rate = rospy.Rate(.5) # 10hz!!!! CAMBIARLO

    while not rospy.is_shutdown():
        pointSelf= Point(int(poseSelf.x),int(poseSelf.y))
        pointTarget= Point(int(poseTarget.x),int(poseTarget.y))
        arr = Pose2D_Array()  #contiene la salida del nodo
        arr.poses.append(poseSelf) #el primer punto siempre es donde se encuentra el robot actualmente
        obstacles= calcCircs()
        trajectory = Segment(pointSelf,pointTarget)
        intersections= calcIntersect(obstacles, trajectory)
        numIntersect= len(intersections[0])+len(intersections[1])+len(intersections[2])+len(intersections[3])+len(intersections[4])+len(intersections[5])+len(intersections[6])+len(intersections[7])

        if numIntersect==0:
            arr.poses.append(poseTarget)
        else:
            while not numIntersect==0 :
                if len(intersections[0])==2 :
                    newP.append(recalc(intersections[0],poseObs0))
                if len(intersections[1])==2 :
                    newP.append(recalc(intersections[1],poseObs1))
                if len(intersections[2])==2 :
                    newP.append(recalc(intersections[2],poseObs2))
                if len(intersections[3])==2 :
                    newP.append(recalc(intersections[3],poseObs3))
                if len(intersections[4])==2 :
                    newP.append(recalc(intersections[4],poseObs4))
                if len(intersections[5])==2 :
                    newP.append(recalc(intersections[5],poseObs5))
                if len(intersections[6])==2 :
                    newP.append(recalc(intersections[6],poseObs6))
                if len(intersectiosn[7])==2 :
                    newP.append(recalc(intersections[7],poseObs7))
                arrange(newP)


                numIntersect= len(intersections[0])+len(intersections[1])+len(intersections[2])+len(intersections[3])+len(intersections[4])+len(intersections[5])+len(intersections[6])+len(intersections[7])

        print "The array is:", arr
        pub.publish(arr)
        rate.sleep()

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass
