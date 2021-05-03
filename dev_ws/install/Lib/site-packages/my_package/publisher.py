import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from vive_interfaces.msg import Hmd, Controller

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('vive_publisher')
        self.hmd_publisher_ = self.create_publisher(Hmd, 'hmd', 10)
        self.controller_publisher1_ = self.create_publisher(Controller, 'controller1', 10)
        self.controller_publisher2_ = self.create_publisher(Controller, 'controller2', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        # Hmd
        hmd_msg = Hmd()
        hmd_msg.x = float(self.i)
        hmd_msg.y = float(self.i)
        hmd_msg.z = float(self.i)
        hmd_msg.yaw = float(self.i)
        hmd_msg.pitch = float(self.i)
        hmd_msg.roll = float(self.i)

        # Controller1
        controller1_msg = Controller()
        controller1_msg.x = 1.0
        controller1_msg.y = float(self.i)
        controller1_msg.z = float(self.i)
        controller1_msg.yaw = float(self.i)
        controller1_msg.pitch = float(self.i)
        controller1_msg.roll = float(self.i)
        controller1_msg.grip = 1
        controller1_msg.menu = 1
        controller1_msg.trigger = 1.0
        controller1_msg.trackpad_pressed = 1
        controller1_msg.trackpad_touched = 1
        controller1_msg.trackpad_x = -1.0
        controller1_msg.trackpad_y = -1.0

        # Controller2
        controller2_msg = Controller()
        controller2_msg.x = -1.0
        controller2_msg.y = float(self.i)
        controller2_msg.z = float(self.i)
        controller2_msg.yaw = float(self.i)
        controller2_msg.pitch = float(self.i)
        controller2_msg.roll = float(self.i)
        controller2_msg.grip = 1
        controller2_msg.menu = 1
        controller2_msg.trigger = 1.0
        controller2_msg.trackpad_pressed = 1
        controller2_msg.trackpad_touched = 1
        controller2_msg.trackpad_x = -1.0
        controller2_msg.trackpad_y = -1.0

        self.hmd_publisher_.publish(hmd_msg)
        self.controller_publisher1_.publish(controller1_msg)
        self.controller_publisher2_.publish(controller2_msg)
        
        self.get_logger().info("Publishing")
        self.i += 1


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()