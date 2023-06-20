#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64 as Integer

 
class NumberPublisher(Node): 
    def __init__(self):
        super().__init__("number_publisher")  # type: ignore

        self.declare_parameter("number_to_publish", 0)
        self.declare_parameter("publish_frequency", 1.0)

        self.i = self.get_parameter("number_to_publish").value
        self.publish_frequency_ = self.get_parameter("publish_frequency").value

        self.publisher_ = self.create_publisher(Integer, "number", 10)

        self.timer_ = self.create_timer(1.0 / self.publish_frequency_, self.publish_number) # type: ignore
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