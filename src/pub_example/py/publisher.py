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

def talker():
    pub = rospy.Publisher('/trajectory', Pose2D_Array, queue_size=10)
    rospy.Subscriber('/y_r0', Pose2D, callbackSelf)
    rospy.Subscriber('/ball', Pose2D, callbackTarget)
    rospy.Subscriber('/b_r0', Pose2D, callbackObs0)
    # rospy.Subscriber('/b_r1', Pose2D, callbackB1)
    # rospy.Subscriber('/b_r2', Pose2D, callbackB2)
    # rospy.Subscriber('/b_r3', Pose2D, callbackB3)
    # rospy.Subscriber('/b_r4', Pose2D, callbackB4)
    # rospy.Subscriber('/b_r5', Pose2D, callbackB5)
    # rospy.Subscriber('/b_r6', Pose2D, callbackB6)
    # rospy.Subscriber('/b_r7', Pose2D, callbackB7)
    rospy.init_node('talker', anonymous=True)
    rate = rospy.Rate(1) # 10hz!!!! CAMBIARLO
    while not rospy.is_shutdown():
        arr = Pose2D_Array()  #contiene la salida del nodo
        arr.poses.append(poseSelf)
        arr.poses.append(poseTarget)
        for x in range(0,10):
            c0 = Circle(Point(int(poseObs0.x),int(poseObs0.y)), 180)
            c1=Circle(Point(int(poseObs1.x),int(poseObs1.y)), 180)
            c1=Circle(Point(int(poseObs1.x),int(poseObs1.y)), 180)
            c1=Circle(Point(int(poseObs1.x),int(poseObs1.y)), 180)
            c1=Circle(Point(int(poseObs1.x),int(poseObs1.y)), 180)
            c1=Circle(Point(int(poseObs1.x),int(poseObs1.y)), 180)
            c1=Circle(Point(int(poseObs1.x),int(poseObs1.y)), 180)
            c1=Circle(Point(int(poseObs1.x),int(poseObs1.y)), 180)
        s = Segment(Point(int(poseSelf.x),int(poseSelf.y)),Point(int(poseTarget.x),int(poseTarget.y)))

        print "The array is:", arr
        print "Intersection with obstacle 0 is:",intersection(c0,s)
        pub.publish(arr)
        rate.sleep()

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass
