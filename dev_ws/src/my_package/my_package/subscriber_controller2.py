import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from vive_interfaces.msg import Controller

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('vive_subscriber')
        self.subscription = self.create_subscription(
            Controller,
            'controller2',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%f"' % msg.x)


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()