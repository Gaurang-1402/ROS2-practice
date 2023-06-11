#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64 as Integer

 
class NumberPublisher(Node): 
    def __init__(self):
        super().__init__("number_publisher") 
        self.publisher_ = self.create_publisher(Integer, "number", 10)

        self.timer_ = self.create_timer(1.0, self.publish_number)
        self.i = 2
        self.get_logger().info("Number Publisher has been started")
 
    def publish_number(self):
        msg = Integer()
        msg.data = self.i
        self.publisher_.publish(msg)

 
def main(args=None):
    rclpy.init(args=args)
    node = NumberPublisher() 
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.destroy_node()
        rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()