import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import serial
import time

class MinimalSubscriber(Node):
    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            Twist,
            'cmd_vel',
            self.listener_callback,
            1)
        self.subscription  # prevent unused variable warning
        
        # Open Serial Port (Ensure correct port, e.g., "/dev/ttyUSB0" or "COM3")
        self.arduino = serial.Serial('/dev/ttyACM0', 115200, timeout=0.1)  # Increase timeout
        time.sleep(2)  # Allow time for Arduino to reset
        print("Connection Successful")

    def listener_callback(self, msg):
        throttle = int(round(msg.linear.x))
        steer = int(round(msg.linear.y))

        # Format with explicit start '<' and end '>'
        serial_data = f"<{throttle},{steer}>"

        self.arduino.reset_input_buffer()  # Clear any residual data
        self.arduino.write(serial_data.encode())  # Send data

def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = MinimalSubscriber()
    rclpy.spin(minimal_subscriber)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
