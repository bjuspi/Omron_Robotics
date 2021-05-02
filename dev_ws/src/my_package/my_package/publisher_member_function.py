import os
print(os.path.dirname(os.path.realpath(__file__)))

import argparse
import math
import time
import sys
import random
import pandas as pd
from signal import signal, SIGINT
from pythonosc import osc_message_builder
from pythonosc import osc_bundle_builder
from pythonosc import udp_client
from reprint import output
from colorama import Fore, Back, Style

import time
import sys
import openvr
import math
import json

from functools import lru_cache

# Function to print out text but instead of starting a new line it will overwrite the existing line
def update_text(txt):
    sys.stdout.write('\r'+txt)
    sys.stdout.flush()

#Convert the standard 3x4 position/rotation matrix to a x,y,z location and the appropriate Euler angles (in degrees)
def convert_to_euler(pose_mat):
    yaw = 180 / math.pi * math.atan2(pose_mat[1][0], pose_mat[0][0])
    pitch = 180 / math.pi * math.atan2(pose_mat[2][0], pose_mat[0][0])
    roll = 180 / math.pi * math.atan2(pose_mat[2][1], pose_mat[2][2])
    x = pose_mat[0][3]
    y = pose_mat[1][3]
    z = pose_mat[2][3]
    return [x,y,z,yaw,pitch,roll]

#Convert the standard 3x4 position/rotation matrix to a x,y,z location and the appropriate Quaternion
def convert_to_quaternion(pose_mat):
    # Per issue #2, adding a abs() so that sqrt only results in real numbers
    r_w = math.sqrt(abs(1+pose_mat[0][0]+pose_mat[1][1]+pose_mat[2][2]))/2
    r_x = (pose_mat[2][1]-pose_mat[1][2])/(4*r_w)
    r_y = (pose_mat[0][2]-pose_mat[2][0])/(4*r_w)
    r_z = (pose_mat[1][0]-pose_mat[0][1])/(4*r_w)

    x = pose_mat[0][3]
    y = pose_mat[1][3]
    z = pose_mat[2][3]
    return [x,y,z,r_w,r_x,r_y,r_z]

#Define a class to make it easy to append pose matricies and convert to both Euler and Quaternion for plotting
class pose_sample_buffer():
    def __init__(self):
        self.i = 0
        self.index = []
        self.time = []
        self.x = []
        self.y = []
        self.z = []
        self.yaw = []
        self.pitch = []
        self.roll = []
        self.r_w = []
        self.r_x = []
        self.r_y = []
        self.r_z = []

    def append(self,pose_mat,t):
        self.time.append(t)
        self.x.append(pose_mat[0][3])
        self.y.append(pose_mat[1][3])
        self.z.append(pose_mat[2][3])
        self.yaw.append(180 / math.pi * math.atan(pose_mat[1][0] /pose_mat[0][0]))
        self.pitch.append(180 / math.pi * math.atan(-1 * pose_mat[2][0] / math.sqrt(pow(pose_mat[2][1], 2) + math.pow(pose_mat[2][2], 2))))
        self.roll.append(180 / math.pi * math.atan(pose_mat[2][1] /pose_mat[2][2]))
        r_w = math.sqrt(abs(1+pose_mat[0][0]+pose_mat[1][1]+pose_mat[2][2]))/2
        self.r_w.append(r_w)
        self.r_x.append((pose_mat[2][1]-pose_mat[1][2])/(4*r_w))
        self.r_y.append((pose_mat[0][2]-pose_mat[2][0])/(4*r_w))
        self.r_z.append((pose_mat[1][0]-pose_mat[0][1])/(4*r_w))

def get_pose(vr_obj):
    return vr_obj.getDeviceToAbsoluteTrackingPose(openvr.TrackingUniverseStanding, 0, openvr.k_unMaxTrackedDeviceCount)


class vr_tracked_device():
    def __init__(self,vr_obj,index,device_class):
        self.device_class = device_class
        self.index = index
        self.vr = vr_obj

    @lru_cache(maxsize=None)
    def get_serial(self):
        return self.vr.getStringTrackedDeviceProperty(self.index, openvr.Prop_SerialNumber_String)

    def get_model(self):
        return self.vr.getStringTrackedDeviceProperty(self.index, openvr.Prop_ModelNumber_String)

    def get_battery_percent(self):
        return self.vr.getFloatTrackedDeviceProperty(self.index, openvr.Prop_DeviceBatteryPercentage_Float)

    def is_charging(self):
        return self.vr.getBoolTrackedDeviceProperty(self.index, openvr.Prop_DeviceIsCharging_Bool)


    def sample(self,num_samples,sample_rate):
        interval = 1/sample_rate
        rtn = pose_sample_buffer()
        sample_start = time.time()
        for i in range(num_samples):
            start = time.time()
            pose = get_pose(self.vr)
            rtn.append(pose[self.index].mDeviceToAbsoluteTracking,time.time()-sample_start)
            sleep_time = interval- (time.time()-start)
            if sleep_time>0:
                time.sleep(sleep_time)
        return rtn

    def get_pose_euler(self, pose=None):
        if pose == None:
            pose = get_pose(self.vr)
        if pose[self.index].bPoseIsValid:
            return convert_to_euler(pose[self.index].mDeviceToAbsoluteTracking)
        else:
            return None

    def get_pose_matrix(self, pose=None):
        if pose == None:
            pose = get_pose(self.vr)
        if pose[self.index].bPoseIsValid:
            return pose[self.index].mDeviceToAbsoluteTracking
        else:
            return None

    def get_velocity(self, pose=None):
        if pose == None:
            pose = get_pose(self.vr)
        if pose[self.index].bPoseIsValid:
            return pose[self.index].vVelocity
        else:
            return None

    def get_angular_velocity(self, pose=None):
        if pose == None:
            pose = get_pose(self.vr)
        if pose[self.index].bPoseIsValid:
            return pose[self.index].vAngularVelocity
        else:
            return None

    def get_pose_quaternion(self, pose=None):
        if pose == None:
            pose = get_pose(self.vr)
        if pose[self.index].bPoseIsValid:
            return convert_to_quaternion(pose[self.index].mDeviceToAbsoluteTracking)
        else:
            return None

    def controller_state_to_dict(self, pControllerState):
        # This function is graciously borrowed from https://gist.github.com/awesomebytes/75daab3adb62b331f21ecf3a03b3ab46
        # docs: https://github.com/ValveSoftware/openvr/wiki/IVRSystem::GetControllerState
        d = {}
        d['unPacketNum'] = pControllerState.unPacketNum
        # on trigger .y is always 0.0 says the docs
        d['trigger'] = pControllerState.rAxis[1].x
        # 0.0 on trigger is fully released
        # -1.0 to 1.0 on joystick and trackpads
        d['trackpad_x'] = pControllerState.rAxis[0].x
        d['trackpad_y'] = pControllerState.rAxis[0].y
        # These are published and always 0.0
        # for i in range(2, 5):
        #     d['unknowns_' + str(i) + '_x'] = pControllerState.rAxis[i].x
        #     d['unknowns_' + str(i) + '_y'] = pControllerState.rAxis[i].y
        d['ulButtonPressed'] = pControllerState.ulButtonPressed
        d['ulButtonTouched'] = pControllerState.ulButtonTouched
        # To make easier to understand what is going on
        # Second bit marks menu button
        d['menu_button'] = bool(pControllerState.ulButtonPressed >> 1 & 1)
        # 32 bit marks trackpad
        d['trackpad_pressed'] = bool(pControllerState.ulButtonPressed >> 32 & 1)
        d['trackpad_touched'] = bool(pControllerState.ulButtonTouched >> 32 & 1)
        # third bit marks grip button
        d['grip_button'] = bool(pControllerState.ulButtonPressed >> 2 & 1)
        # System button can't be read, if you press it
        # the controllers stop reporting
        return d

    def get_controller_inputs(self):
        result, state = self.vr.getControllerState(self.index)
        return self.controller_state_to_dict(state)

    def trigger_haptic_pulse(self, duration_micros=1000, axis_id=0):
        """
        Causes devices with haptic feedback to vibrate for a short time.
        """
        self.vr.triggerHapticPulse(self.index ,axis_id, duration_micros)

class vr_tracking_reference(vr_tracked_device):
    def get_mode(self):
        return self.vr.getStringTrackedDeviceProperty(self.index,openvr.Prop_ModeLabel_String).decode('utf-8').upper()
    def sample(self,num_samples,sample_rate):
        print("Warning: Tracking References do not move, sample isn't much use...")

class triad_openvr():
    def __init__(self, configfile_path=None):
        # Initialize OpenVR in the
        self.vr = openvr.init(openvr.VRApplication_Other)
        self.vrsystem = openvr.VRSystem()

        # Initializing object to hold indexes for various tracked objects
        self.object_names = {"Tracking Reference":[],"HMD":[],"Controller":[],"Tracker":[]}
        self.devices = {}
        self.device_index_map = {}
        poses = self.vr.getDeviceToAbsoluteTrackingPose(openvr.TrackingUniverseStanding, 0,
                                                               openvr.k_unMaxTrackedDeviceCount)

        # Loading config file
        if configfile_path:
            try:
                with open(configfile_path, 'r') as json_data:
                    config = json.load(json_data)
            except EnvironmentError: # parent of IOError, OSError *and* WindowsError where available
                print('config.json not found.')
                exit(1)

            # Iterate through the pose list to find the active devices and determine their type
            for i in range(openvr.k_unMaxTrackedDeviceCount):
                if poses[i].bDeviceIsConnected:
                    device_serial = self.vr.getStringTrackedDeviceProperty(i,openvr.Prop_SerialNumber_String).decode('utf-8')
                    for device in config['devices']:
                        if device_serial == device['serial']:
                            device_name = device['name']
                            self.object_names[device['type']].append(device_name)
                            self.devices[device_name] = vr_tracked_device(self.vr,i,device['type'])
        else:
            # Iterate through the pose list to find the active devices and determine their type
            for i in range(openvr.k_unMaxTrackedDeviceCount):
                if poses[i].bDeviceIsConnected:
                    self.add_tracked_device(i)

    def __del__(self):
        openvr.shutdown()

    def get_pose(self):
        return get_pose(self.vr)

    def poll_vr_events(self):
        """
        Used to poll VR events and find any new tracked devices or ones that are no longer tracked.
        """
        event = openvr.VREvent_t()
        while self.vrsystem.pollNextEvent(event):
            if event.eventType == openvr.VREvent_TrackedDeviceActivated:
                self.add_tracked_device(event.trackedDeviceIndex)
            elif event.eventType == openvr.VREvent_TrackedDeviceDeactivated:
                #If we were already tracking this device, quit tracking it.
                if event.trackedDeviceIndex in self.device_index_map:
                    self.remove_tracked_device(event.trackedDeviceIndex)

    def add_tracked_device(self, tracked_device_index):
        i = tracked_device_index
        device_class = self.vr.getTrackedDeviceClass(i)
        if (device_class == openvr.TrackedDeviceClass_Controller):
            device_name = "controller_"+str(len(self.object_names["Controller"])+1)
            self.object_names["Controller"].append(device_name)
            self.devices[device_name] = vr_tracked_device(self.vr,i,"Controller")
            self.device_index_map[i] = device_name
        elif (device_class == openvr.TrackedDeviceClass_HMD):
            device_name = "hmd_"+str(len(self.object_names["HMD"])+1)
            self.object_names["HMD"].append(device_name)
            self.devices[device_name] = vr_tracked_device(self.vr,i,"HMD")
            self.device_index_map[i] = device_name
        elif (device_class == openvr.TrackedDeviceClass_GenericTracker):
            device_name = "tracker_"+str(len(self.object_names["Tracker"])+1)
            self.object_names["Tracker"].append(device_name)
            self.devices[device_name] = vr_tracked_device(self.vr,i,"Tracker")
            self.device_index_map[i] = device_name
        elif (device_class == openvr.TrackedDeviceClass_TrackingReference):
            device_name = "tracking_reference_"+str(len(self.object_names["Tracking Reference"])+1)
            self.object_names["Tracking Reference"].append(device_name)
            self.devices[device_name] = vr_tracking_reference(self.vr,i,"Tracking Reference")
            self.device_index_map[i] = device_name

    def remove_tracked_device(self, tracked_device_index):
        if tracked_device_index in self.device_index_map:
            device_name = self.device_index_map[tracked_device_index]
            self.object_names[self.devices[device_name].device_class].remove(device_name)
            del self.device_index_map[tracked_device_index]
            del self.devices[device_name]
        else:
            raise Exception("Tracked device index {} not valid. Not removing.".format(tracked_device_index))

    def rename_device(self,old_device_name,new_device_name):
        self.devices[new_device_name] = self.devices.pop(old_device_name)
        for i in range(len(self.object_names[self.devices[new_device_name].device_class])):
            if self.object_names[self.devices[new_device_name].device_class][i] == old_device_name:
                self.object_names[self.devices[new_device_name].device_class][i] = new_device_name

    def print_discovered_objects(self):
        for device_type in self.object_names:
            plural = device_type
            if len(self.object_names[device_type])!=1:
                plural+="s"
            print("Found "+str(len(self.object_names[device_type]))+" "+plural)
            for device in self.object_names[device_type]:
                if device_type == "Tracking Reference":
                    print("  "+device+" ("+self.devices[device].get_serial()+
                          ", Mode "+self.devices[device].get_model()+
                          ", "+self.devices[device].get_model()+
                          ")")
                else:
                    print("  "+device+" ("+self.devices[device].get_serial()+
                          ", "+self.devices[device].get_model()+")")


# Initialize Tria's OpenVR wrapper and print discovered objects
v = triad_openvr()
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
track = ["hmd"]
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
        # self.i = 0

    def publish(self, x, y, z, yaw, pitch, roll):
        msg = Hmd()
        msg.x = x
        msg.y = y
        msg.z = z
        msg.yaw = yaw
        msg.pitch = pitch
        msg.roll = roll
        self.publisher_.publish(msg)
    
    def log(self, txt):
        self.get_logger().info(txt)

    # def timer_callback(self):
    #     msg = Hmd()
    #     msg.x = float(self.i)
    #     msg.y = float(self.i)
    #     msg.z = float(self.i)
    #     msg.yaw = float(self.i)
    #     msg.pitch = float(self.i)
    #     msg.roll = float(self.i)

        # msg.data = 'Hello World: %d' % self.i
        # self.publisher_.publish(msg)
        # text = "Publishing: "
        # text += '{0: <10}'.format("%.4f" % msg.x)
        # text += " "
        # text += '{0: <10}'.format("%.4f" % msg.y)
        # text += " "
        # text += '{0: <10}'.format("%.4f" % msg.z)
        # text += " "
        # text += '{0: <10}'.format("%.4f" % msg.yaw)
        # text += " "
        # text += '{0: <10}'.format("%.4f" % msg.pitch)
        # text += " "
        # text += '{0: <10}'.format("%.4f" % msg.roll)
        # text += " "

        # self.get_logger().info(text)
        # self.i += 1


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    # rclpy.spin(minimal_publisher)
    
    while True:
        # Initialize OSC bundle for all tracked controllers
        bundle = osc_bundle_builder.OscBundleBuilder(osc_bundle_builder.IMMEDIATELY)

        # iterate over tracked device types and build OSC messages
        for deviceType in track:
            for device in devices[deviceType]:
                # get device post
                pose = device.get_pose_euler()
                # velocity = device.get_velocity()
                # angular_velocity = device.get_angular_velocity()
                # controller_inputs = device.get_controller_inputs()
                # haptic_pulse = device.trigger_haptic_pulse()

                # Build message and add to bundle
                msg = osc_message_builder.OscMessageBuilder(address="/" + deviceType + "/" + device._id)
                #msg.add_arg(device.get_pose_euler())
                bundle.add_content(msg.build())

                ### report device pose in the console
                txt = Fore.CYAN + '{0: <13}'.format(deviceType + device._id) + Fore.WHITE + Style.BRIGHT
                if not pose:
                    pose = previous_pose
                
                # Publish
                minimal_publisher.publish(float(pose[0]), float(pose[1]), float(pose[2]), float(pose[3]), float(pose[4]), float(pose[5]))

                # Log
                for each in pose:
                    txt += '{0: <10}'.format("%.4f" % each)
                    txt += " "
                minimal_publisher.log(txt)
                previous_pose = pose

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    # rclpy.shutdown()


if __name__ == '__main__':
    main()
