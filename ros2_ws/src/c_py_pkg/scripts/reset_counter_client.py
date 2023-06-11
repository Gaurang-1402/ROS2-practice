#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import SetBool
import random
import time
 
class MyCustomNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("reset_counter_client") # MODIFY NAME


    def call_reset_counter_client(self, bool):
        client = self.create_client(SetBool, "reset_counter")

        req = SetBool.Request()
        req.data = bool

        future = client.call_async(req)

        future.add_done_callback(lambda future: self.callback_call_reset_counter(future, bool))

    def callback_call_reset_counter(self, future, bool):
        try:
            res = future.result()
            self.get_logger().info("Counter has been reset")

        except Exception as e:
            self.get_logger().info(f"Service call failed {e}")
 
    def run(self):
        while True:
            rand_time = random.randint(1, 10)
            if rand_time % 2:
                self.call_reset_counter_client(True)
            else:
                self.call_reset_counter_client(False)

            time.sleep(rand_time)

def main(args=None):
    rclpy.init(args=args)
    node = MyCustomNode() # MODIFY NAME

    node.run()
    try:
        rclpy.spin(node) # keeps calling the callback
    except KeyboardInterrupt:
        node.destroy_node()
        rclpy.shutdown()
 
if __name__ == "__main__":
    main()