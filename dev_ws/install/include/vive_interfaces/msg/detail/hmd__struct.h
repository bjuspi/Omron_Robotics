// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vive_interfaces:msg\Hmd.idl
// generated code does not contain a copyright notice

#ifndef VIVE_INTERFACES__MSG__DETAIL__HMD__STRUCT_H_
#define VIVE_INTERFACES__MSG__DETAIL__HMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Hmd in the package vive_interfaces.
typedef struct vive_interfaces__msg__Hmd
{
  float x;
  float y;
  float z;
  float yaw;
  float pitch;
  float roll;
} vive_interfaces__msg__Hmd;

// Struct for a sequence of vive_interfaces__msg__Hmd.
typedef struct vive_interfaces__msg__Hmd__Sequence
{
  vive_interfaces__msg__Hmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vive_interfaces__msg__Hmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VIVE_INTERFACES__MSG__DETAIL__HMD__STRUCT_H_
