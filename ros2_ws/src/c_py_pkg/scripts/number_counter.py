#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64 as Integer
from example_interfaces.srv import SetBool
from functools import partial

 
class NumberCounter(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("number_counter") # MODIFY NAME
        self.subsrciber_ = self.create_subscription(Integer, "number", self.callback_number, 10)
        self.publisher_  = self.create_publisher(Integer, "number_count", 10)
        self.counter_ = 0
        self.get_logger().info("Number Counter has been started")

        self.server_ = self.create_service(SetBool, "/reset_counter", self.callback_reset_counter)

    def callback_number(self, msg):
        curr_number = msg.data
        self.counter_ += curr_number

        # publish the counter
        msg = Integer()
        msg.data = self.counter_
        self.publisher_.publish(msg)

    def callback_reset_counter(self, req, res):
        if req.data == True:
            self.counter_ = 0
            self.get_logger().info("The counter has been reset")
            res.success = True
            return res
        else:
            self.get_logger().info("The counter was not reset")
            res.success = False
            return res
 
def main(args=None):

    rclpy.init(args=args)

    node = NumberCounter() # MODIFY NAME
    try:
        rclpy.spin(node) # keeps calling the callback
    except KeyboardInterrupt:
        node.destroy_node()
        rclpy.shutdown()
 
 
 
if __name__ == "__main__":
    main()