import rclpy
from rclpy.node import Node
import serial
import time
from rc_msgs.msg import RcMsg

class MinimalSubscriber(Node):
    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            RcMsg,
            'rover_commands',
            self.listener_callback,
            1)
        self.subscription  # prevent unused variable warning
        
        # Open Serial Port (Ensure correct port, e.g., "/dev/ttyUSB0" or "COM3")
        self.arduino = serial.Serial('/dev/ttyACM0', 115200, timeout=0.1)  # Increase timeout
        time.sleep(2)  # Allow time for Arduino to reset
        print("Connection Successful")

    def listener_callback(self, msg):
        arm = int(msg.arm)
        reverse = int(msg.reverse)
        throttle = msg.throttle
        steer = msg.steer
        op_mode  = msg.op_mode

        # Format with explicit start '<' and end '>'
        serial_data = f"<{arm},{reverse},{throttle},{steer},{op_mode}>"
        print(serial_data)
        
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
