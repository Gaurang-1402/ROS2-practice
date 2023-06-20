#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import time
from interfaces.srv import SetLed # TODO: Define
 
class BatteryNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("battery_node_client") # MODIFY NAME

        self.battery_state_ = 100.0
        self.get_logger().info("Battery Node client has started")


    def call_set_led(self, charge_status):
        client = self.create_client(SetLed, "set_led") 

        req = SetLed.Request()
        req.battery_level = charge_status

        future = client.call_async(req)

        future.add_done_callback(lambda future: self.callback_call_set_led(future, charge_status)) 

    def callback_call_set_led(self, future, charge_status):
        try:
            res = future.result()
            self.get_logger().info(f"LED has been set for battery level {charge_status} with success? {res.success}")

        except Exception as e:
            self.get_logger().info(f"Service call failed {e}")
        self.get_logger().info("callback_call_set_led() has been called")

    def update_battery_state_continously(self):
        curr_time = 0
        while True:
            if curr_time >= 2:
                curr_time = 0
                self.battery_state_ -= 20
                if self.battery_state_ < 0:
                    self.battery_state_ = 100.0

                self.call_set_led(self.battery_state_)
            time.sleep(0.1)
            curr_time += 0.1

def main(args=None):
    rclpy.init(args=args)
    node = BatteryNode() # MODIFY NAME

    node.update_battery_state_continously()
    try:
        rclpy.spin(node) # keeps calling the callback
    except KeyboardInterrupt:
        node.destroy_node()
        rclpy.shutdown()
 
if __name__ == "__main__":
    main()