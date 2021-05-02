// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vive_interfaces:msg\Controller.idl
// generated code does not contain a copyright notice

#ifndef VIVE_INTERFACES__MSG__DETAIL__CONTROLLER__STRUCT_H_
#define VIVE_INTERFACES__MSG__DETAIL__CONTROLLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Controller in the package vive_interfaces.
typedef struct vive_interfaces__msg__Controller
{
  float x;
  float y;
  float z;
  float yaw;
  float pitch;
  float roll;
  bool grip;
  bool menu;
  bool trigger;
  bool trackpad_pressed;
  bool trackpad_touched;
  float trackpad_x;
  float trackpad_y;
} vive_interfaces__msg__Controller;

// Struct for a sequence of vive_interfaces__msg__Controller.
typedef struct vive_interfaces__msg__Controller__Sequence
{
  vive_interfaces__msg__Controller * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vive_interfaces__msg__Controller__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VIVE_INTERFACES__MSG__DETAIL__CONTROLLER__STRUCT_H_
