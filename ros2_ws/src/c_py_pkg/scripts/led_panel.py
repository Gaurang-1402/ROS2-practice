#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from interfaces.msg import LedStatus 
from interfaces.srv import SetLed 

 
class LED_Panel(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("led_panel") # type: ignore # MODIFY NAME
        self.declare_parameter("led_panel_init", [0, 0, 0])

        self.panel_state_ =  self.get_parameter("led_panel_init").value
        self.publisher_  = self.create_publisher(LedStatus, "led_panel_state", 10)
        self.server_ = self.create_service(SetLed, "set_led", self.callback_set_led)
        self.get_logger().info("LED panel server has started")


    def callback_set_led(self, req, res):
        self.battery_level = req.battery_level

        num_leds_turned_on = 0

        if 60 <= self.battery_level <= 90:
            self.panel_state_[0] = 1
            num_leds_turned_on += 1
        elif 30 <= self.battery_level < 60:
            self.panel_state_[0] = 1
            self.panel_state_[1] = 1
            num_leds_turned_on += 2
        elif 0 <= self.battery_level < 30:
            self.panel_state_[0] = 1
            self.panel_state_[1] = 1 
            self.panel_state_[2] = 1 
            num_leds_turned_on += 3        
        else:
            self.panel_state_[0] = 0
            self.panel_state_[1] = 0 
            self.panel_state_[2] = 0 

        # publish the counter
        msg = LedStatus()
        msg.battery_level = self.battery_level
        msg.led_status = f"number of leds turned on are: {num_leds_turned_on}"
        self.publisher_.publish(msg)

        res.success = True
        return res


def main(args=None):
    rclpy.init(args=args)
    node = LED_Panel() # MODIFY NAME
    try:
        rclpy.spin(node) # keeps calling the callback
    except KeyboardInterrupt:
        node.destroy_node()
        rclpy.shutdown()
 
if __name__ == "__main__":
    main()