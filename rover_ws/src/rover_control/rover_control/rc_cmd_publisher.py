import pygame
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist 

def map_range(x, in_min, in_max, out_min, out_max):
    """Maps a value from one range to another."""
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min

def constrain(val, min_val, max_val):
    """Clamps a value between a minimum and maximum."""
    return min(max_val, max(min_val, val))

class MinimalPublisher(Node):
    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 1)
        self.timer = self.create_timer(0.05, self.timer_callback)  # 20Hz update rate

        self.throttle = 0.0
        self.steer = 0.0

        # Initialize Pygame
        pygame.init()
        pygame.joystick.init()

        if pygame.joystick.get_count() == 0:
            self.get_logger().warn("No joystick detected.")
            self.joystick = None
        else:
            self.joystick = pygame.joystick.Joystick(0)
            self.joystick.init()
            self.get_logger().info(f"Connected to {self.joystick.get_name()}")

    def timer_callback(self):
        """Reads joystick input, processes it, and publishes a message."""
        if self.joystick:
            pygame.event.pump()  # Process Pygame events

            try:
                # Read joystick values
                self.throttle = self.joystick.get_axis(0)  # Adjust axis index if needed
                self.steer = self.joystick.get_axis(1)

                # Map values to fixed-length output range
                mapped_throttle = float(constrain(map_range(round(self.throttle, 3), -1.0, 1.0, 100, 999), 100, 999))
                mapped_steer = float(constrain(map_range(round(self.steer, 3), -1.0, 1.0, 100, 999), 100, 999))

                # Create and publish the Twist message
                msg = Twist()
                msg.linear.x = mapped_throttle
                msg.linear.y = mapped_steer
                self.publisher_.publish(msg)

                # Debugging output
                print(f"Raw: Throttle={round(self.throttle,3)}, Steer={round(self.steer,3)} | Mapped: {mapped_throttle}, {mapped_steer}")

            except pygame.error:
                self.get_logger().error("Joystick read failed!")

def main(args=None):
    """Main function to initialize the node and run the ROS2 loop."""
    rclpy.init(args=args)
    minimal_publisher = MinimalPublisher()

    try:
        rclpy.spin(minimal_publisher)
    except KeyboardInterrupt:
        pass  # Handle Ctrl+C gracefully
    finally:
        minimal_publisher.destroy_node()
        rclpy.shutdown()
        pygame.quit()  # Clean up Pygame

if __name__ == "__main__":
    main()
