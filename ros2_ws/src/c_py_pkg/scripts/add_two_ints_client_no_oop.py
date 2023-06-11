#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

def main(args=None):
    rclpy.init(args=args)
    node = Node("add_two_ints_client_no_oop") # MODIFY NAME

    client = node.create_client(AddTwoInts, "add_two_ints")
    while not client.wait_for_service(1):
        node.get_logger().warn("Waiting for Server Add Two Ints...")

    req = AddTwoInts.Request()
    req.a = 3
    req.b = 8

    future = client.call_async(req)

    rclpy.spin_until_future_complete(node, future)

    try:
        res = future.result()
        node.get_logger().info(str(req.a) + " + " + str(req.b) + " = " + str(res.sum))

    except Exception as e:
        node.get_logger().info(f"Service call failed {e}")


if __name__ == "__main__":
    main()