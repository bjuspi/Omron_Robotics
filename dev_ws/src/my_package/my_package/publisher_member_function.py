from __future__ import print_function
import argparse
import math
import time
import sys
import random
import pandas as pd
from signal import signal, SIGINT
from triad_openvr import triad_openvr
from pythonosc import osc_message_builder
from pythonosc import osc_bundle_builder
from pythonosc import udp_client
from reprint import output
from colorama import Fore, Back, Style

# Initialize Tria's OpenVR wrapper and print discovered objects
v = triad_openvr.triad_openvr()
v.print_discovered_objects()

# Sort through all discovered devices and keep track by type
deviceCount = 0
devices = {
    'tracker': [],
    'hmd': [],
    'controller': [],
    'tracking reference': []
}

for deviceName, device in v.devices.items():
    device._id = deviceName.split("_").pop()
    devices[device.device_class.lower()].append(device)
    deviceCount += 1

# pose tracking interval
interval = 1/250

ip = "127.0.0.1"
port = 7000
track = ["hmd", "tracker", "controller"]
freq = 250
mode = ['euler', 'quaternion']

# initialize OSC client
client = udp_client.SimpleUDPClient(ip, port)



import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from vive_interfaces.msg import Hmd


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(Hmd, 'topic', 10)
        # timer_period = 0.5  # seconds
        # self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = Hmd()
        msg.x = float(self.i)
        msg.y = float(self.i)
        msg.z = float(self.i)
        msg.yaw = float(self.i)
        msg.pitch = float(self.i)
        msg.roll = float(self.i)

        # msg.data = 'Hello World: %d' % self.i
        self.publisher_.publish(msg)
        text = "Publishing: "
        text += '{0: <10}'.format("%.4f" % msg.x)
        text += " "
        text += '{0: <10}'.format("%.4f" % msg.y)
        text += " "
        text += '{0: <10}'.format("%.4f" % msg.z)
        text += " "
        text += '{0: <10}'.format("%.4f" % msg.yaw)
        text += " "
        text += '{0: <10}'.format("%.4f" % msg.pitch)
        text += " "
        text += '{0: <10}'.format("%.4f" % msg.roll)
        text += " "

        self.get_logger().info(text)
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
