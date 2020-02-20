#!/usr/bin/env python
# license removed for brevity
import rospy
from std_msgs.msg import Int16

def ejercicio1():
    pub = rospy.Publisher('chatter', Int16, queue_size=0)
    rospy.init_node('ejercicio1', anonymous=True) 


    while not rospy.is_shutdown():
        numero=int(input("dame un numero: "))
        rospy.loginfo(numero)
        pub.publish(numero)
        rate.sleep()

if __name__ == '__main__':
    try:
        ejercicio1()
    except rospy.ROSInterruptException:
        pass 
