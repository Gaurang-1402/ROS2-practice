#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String
 
class RobotNewsStationNode(Node):
    def __init__(self):
        super().__init__("robot_news_station")

        self.name_ = "Carr-E"
        self.publisher_ = self.create_publisher(String, "robot_news", 10)
        self.timer = self.create_timer(0.5, self.publish_news)

        self.get_logger().info("Robot News Station has been started.") # printed once at the end of the constructor
 
    def publish_news(self):
        # published multiple times every time callback is called
        msg = String()
        msg.data = f"Hello this is {self.name_} from the Robot News Station."
        self.publisher_.publish(msg)
 
def main(args=None):
    rclpy.init(args=args)
    news_station_node = RobotNewsStationNode() # MODIFY NAME

    try:
        rclpy.spin(news_station_node) # keeps calling the callback
    except KeyboardInterrupt:
        news_station_node.destroy_node()
        rclpy.shutdown()

 
 
if __name__ == "__main__":
    main()