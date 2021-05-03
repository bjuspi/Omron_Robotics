from __future__ import print_function
import argparse
import math
import time
import sys
import random
import pandas as pd
from signal import signal, SIGINT
import driver
from pythonosc import osc_message_builder
from pythonosc import osc_bundle_builder
from pythonosc import udp_client
from reprint import output
from colorama import Fore, Back, Style

print(Back.CYAN + Fore.WHITE + Style.BRIGHT +
"""                            \n      OpenVR OSC 1.0        \n                            \n"""
 + Style.RESET_ALL)

# Initialize Tria's OpenVR wrapper and print discovered objects
v = driver.triad_openvr()
print(Style.DIM)
v.print_discovered_objects()
print(Style.RESET_ALL)

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


def handler(signal_received, frame):
    # Handle any cleanup here
    df["Device Type"] = device_types
    df["Device Id"] = device_ids
    df["X"] = x
    df["Y"] = y
    df["Z"] = z
    df["Yaw"] = yaw
    df["Pitch"] = pitch
    df["Roll"] = roll
    df.to_csv("htc_vive_output.csv")
    #print('SIGINT or CTRL-C detected. Exiting gracefully')
    exit(0)

if __name__ == "__main__":
    # Parse CLI arguments
    parser = argparse.ArgumentParser()
    parser.add_argument("--ip", default="127.0.0.1", help="ip of the OSC server")
    parser.add_argument("--port", type=int, default=7000, help="port the OSC server is listening on")
    parser.add_argument("--track", nargs="*", default=["hmd", "tracker", "controller"], help="devices to track (hmd, tracker, controller)")
    parser.add_argument("--freq", type=int, default=250, help="tracking frequency (in ms)")
    parser.add_argument("--mode", choices=['euler', 'quaternion'], default="euler", help="get pose data in euler angles or quaternions")
    args = parser.parse_args()

    # Tell Python to run the handler() function when SIGINT is recieved
    signal(SIGINT, handler)

    # pose tracking interval
    interval = 1/250

    # initialize OSC client
    client = udp_client.SimpleUDPClient(args.ip, args.port)

    # print some stuff
    print(Fore.GREEN + "\rSending OSC tracking data on " + args.ip + ":" + str(args.port), end="\n\n")
    print(
        Fore.YELLOW + 
        '{0: <13}'.format("OSC address") + 
        '{0: <11}'.format("X") + 
        '{0: <11}'.format("Y") + 
        '{0: <11}'.format("Z") + 
        '{0: <11}'.format("Yaw") + 
        '{0: <11}'.format("Pitch") + 
        '{0: <11}'.format("Roll") + 
        # '{0: <14}'.format("unPacketNum") + 
        '{0: <10}'.format("Trigger") + 
        '{0: <12}'.format("Trackpad X") + 
        '{0: <12}'.format("Trackpad Y") + 
        # '{0: <18}'.format("ulButton Pressed") + 
        # '{0: <18}'.format("ulButton Touched") + 
        '{0: <12}'.format("Menu Button") + 
        '{0: <18}'.format("Trackpad Pressed") + 
        '{0: <18}'.format("Trackpad Touched") + 
        '{0: <12}'.format("Grip Button"))

    pose_tracking = pd.DataFrame()

    df = pd.DataFrame()

    device_types = []
    device_ids = []
    x = []
    y = []
    z = []
    yaw = []
    pitch = []
    roll = []
    unpacketnum = []
    trigger = []
    trackpad_x = []
    trackpad_y = []
    ulbuttonpressed = []
    ulbuttontouched = []
    menu_button = []
    trackpad_pressed = []
    trackpad_touched = []
    grip_button = []

    with output(output_type="list", initial_len=5, interval=0) as output_list:
        while(True):
            start = time.time()

            # Initialize OSC bundle for all tracked controllers
            bundle = osc_bundle_builder.OscBundleBuilder(osc_bundle_builder.IMMEDIATELY)

            # iterate over tracked device types and build OSC messages
            di = 0
            for deviceType in args.track:
                for device in devices[deviceType]:
                    # get device post
                    pose = device.get_pose_euler()
                    velocity = device.get_velocity()
                    angular_velocity = device.get_angular_velocity()
                    controller_inputs = device.get_controller_inputs()
                    haptic_pulse = device.trigger_haptic_pulse()

                    # Build message and add to bundle
                    msg = osc_message_builder.OscMessageBuilder(address="/" + deviceType + "/" + device._id)
                    #msg.add_arg(device.get_pose_euler())
                    bundle.add_content(msg.build())

                    ### report device pose in the console
                    txt = Fore.CYAN + '{0: <13}'.format(deviceType + device._id) + Fore.WHITE + Style.BRIGHT
                    if not pose:
                        pose = previous_pose
                
                    for each in pose:
                        txt += '{0: <10}'.format("%.4f" % each)
                        txt += " "
                    

                    # txt += '{0: <14}'.format(controller_inputs["unPacketNum"])
                    txt += '{0: <10.4f}'.format(controller_inputs["trigger"])
                    txt += '{0: <12.4f}'.format(controller_inputs["trackpad_x"])
                    txt += '{0: <12.4f}'.format(controller_inputs["trackpad_y"])
                    # txt += '{0: <18}'.format(controller_inputs["ulButtonPressed"])
                    # txt += '{0: <18}'.format(controller_inputs["ulButtonTouched"])
                    txt += '{0: <12}'.format(controller_inputs["menu_button"])
                    txt += '{0: <18}'.format(controller_inputs["trackpad_pressed"])
                    txt += '{0: <18}'.format(controller_inputs["trackpad_touched"])
                    txt += '{0: <12}'.format(controller_inputs["grip_button"])

                    device_types.append(deviceType)
                    device_ids.append(device._id)
                    x.append(pose[0])
                    y.append(pose[1])
                    z.append(pose[2])
                    yaw.append(pose[3])
                    pitch.append(pose[4])
                    roll.append(pose[5])

                    unpacketnum.append(controller_inputs["unPacketNum"])
                    trigger.append(controller_inputs["trigger"])
                    trackpad_x.append(controller_inputs["trackpad_x"])
                    trackpad_y.append(controller_inputs["trackpad_y"])
                    ulbuttonpressed.append(controller_inputs["ulButtonPressed"])
                    ulbuttontouched.append(controller_inputs["ulButtonTouched"])
                    menu_button.append(controller_inputs["menu_button"])
                    trackpad_pressed.append(controller_inputs["trackpad_pressed"])
                    trackpad_touched.append(controller_inputs["trackpad_touched"])
                    grip_button.append(controller_inputs["grip_button"])

                    output_list[di] = txt
                    di += 1

                    previous_pose = pose

            # Send the bundle
            client.send(bundle.build())

            # wait for next tick
            sleep_time = interval-(time.time()-start)
            if sleep_time>0:
                time.sleep(sleep_time)
                