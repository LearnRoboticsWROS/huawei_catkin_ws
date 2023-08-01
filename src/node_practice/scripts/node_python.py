#!/usr/bin/env python3
import rospy

if __name__ == '__main__':
    # Initialize the node, and give it a name
    rospy.init_node("node_python_practice")
    
    rospy.loginfo("Hello, The python node has been started")
    rospy.sleep(3)

    rate = rospy.Rate(10)

    while not rospy.is_shutdown():
        rospy.loginfo("Hi this is a message from while cycle at 10 Hz")
        rate.sleep()
    