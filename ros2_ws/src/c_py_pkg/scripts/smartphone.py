#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String


class SmartphoneNode(Node):
    def __init__(self):
        super().__init__("smartphone")
        self.subscriber_ = self.create_subscription(
            String, "robot_news", self.callback_robot_news, 10)
        # printed once at the end of the constructor
        self.get_logger().info("Smartphone has been started.")

    def callback_robot_news(self, msg):
        # published multiple times every time callback is called
        self.get_logger().info(msg.data)  # prints the message on the topic


def main(args=None):
    rclpy.init(args=args)
    smartphone_node = SmartphoneNode()
    try:
        rclpy.spin(smartphone_node) # keeps calling the callback
    except KeyboardInterrupt:
        smartphone_node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
