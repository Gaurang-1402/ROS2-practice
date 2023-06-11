#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts
from functools import partial
 
class AddTwoClientsNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("add_two_ints_client_oop") # MODIFY NAME
        self.call_add_two_ints_server(6, 7)
 
    def call_add_two_ints_server(self, a, b):
        client = self.create_client(AddTwoInts, "add_two_ints")
        while not client.wait_for_service(1):
            self.get_logger().warn("Waiting for Server Add Two Ints")

        req = AddTwoInts.Request()
        req.a = 3
        req.b = 8

        future = client.call_async(req)
        future.add_done_callback(partial(self.callback_call_add_two_ints, a=a, b=b))

    def callback_call_add_two_ints(self, future, a, b):
        try:
            res = future.result()
            self.get_logger().info(str(a) + " + " + str(b) + " = " + str(res.sum))

        except Exception as e:
            self.get_logger().info(f"Service call failed {e}")

def main(args=None):
    rclpy.init(args=args)
    node = AddTwoClientsNode() # MODIFY NAME
    try:
        rclpy.spin(node) # keeps calling the callback
    except KeyboardInterrupt:
        node.destroy_node()
        rclpy.shutdown()
 
if __name__ == "__main__":
    main()