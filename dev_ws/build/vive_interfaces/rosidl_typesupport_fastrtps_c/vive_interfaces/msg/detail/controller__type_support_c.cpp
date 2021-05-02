// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from vive_interfaces:msg\Controller.idl
// generated code does not contain a copyright notice
#include "vive_interfaces/msg/detail/controller__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "vive_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vive_interfaces/msg/detail/controller__struct.h"
#include "vive_interfaces/msg/detail/controller__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Controller__ros_msg_type = vive_interfaces__msg__Controller;

static bool _Controller__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Controller__ros_msg_type * ros_message = static_cast<const _Controller__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: z
  {
    cdr << ros_message->z;
  }

  // Field name: yaw
  {
    cdr << ros_message->yaw;
  }

  // Field name: pitch
  {
    cdr << ros_message->pitch;
  }

  // Field name: roll
  {
    cdr << ros_message->roll;
  }

  // Field name: grip
  {
    cdr << (ros_message->grip ? true : false);
  }

  // Field name: menu
  {
    cdr << (ros_message->menu ? true : false);
  }

  // Field name: trigger
  {
    cdr << (ros_message->trigger ? true : false);
  }

  // Field name: trackpad_pressed
  {
    cdr << (ros_message->trackpad_pressed ? true : false);
  }

  // Field name: trackpad_touched
  {
    cdr << (ros_message->trackpad_touched ? true : false);
  }

  // Field name: trackpad_x
  {
    cdr << ros_message->trackpad_x;
  }

  // Field name: trackpad_y
  {
    cdr << ros_message->trackpad_y;
  }

  return true;
}

static bool _Controller__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Controller__ros_msg_type * ros_message = static_cast<_Controller__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: z
  {
    cdr >> ros_message->z;
  }

  // Field name: yaw
  {
    cdr >> ros_message->yaw;
  }

  // Field name: pitch
  {
    cdr >> ros_message->pitch;
  }

  // Field name: roll
  {
    cdr >> ros_message->roll;
  }

  // Field name: grip
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->grip = tmp ? true : false;
  }

  // Field name: menu
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->menu = tmp ? true : false;
  }

  // Field name: trigger
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->trigger = tmp ? true : false;
  }

  // Field name: trackpad_pressed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->trackpad_pressed = tmp ? true : false;
  }

  // Field name: trackpad_touched
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->trackpad_touched = tmp ? true : false;
  }

  // Field name: trackpad_x
  {
    cdr >> ros_message->trackpad_x;
  }

  // Field name: trackpad_y
  {
    cdr >> ros_message->trackpad_y;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vive_interfaces
size_t get_serialized_size_vive_interfaces__msg__Controller(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Controller__ros_msg_type * ros_message = static_cast<const _Controller__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z
  {
    size_t item_size = sizeof(ros_message->z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw
  {
    size_t item_size = sizeof(ros_message->yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch
  {
    size_t item_size = sizeof(ros_message->pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll
  {
    size_t item_size = sizeof(ros_message->roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name grip
  {
    size_t item_size = sizeof(ros_message->grip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name menu
  {
    size_t item_size = sizeof(ros_message->menu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trigger
  {
    size_t item_size = sizeof(ros_message->trigger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trackpad_pressed
  {
    size_t item_size = sizeof(ros_message->trackpad_pressed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trackpad_touched
  {
    size_t item_size = sizeof(ros_message->trackpad_touched);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trackpad_x
  {
    size_t item_size = sizeof(ros_message->trackpad_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trackpad_y
  {
    size_t item_size = sizeof(ros_message->trackpad_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Controller__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vive_interfaces__msg__Controller(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vive_interfaces
size_t max_serialized_size_vive_interfaces__msg__Controller(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: grip
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: menu
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trigger
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trackpad_pressed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trackpad_touched
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trackpad_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: trackpad_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Controller__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_vive_interfaces__msg__Controller(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Controller = {
  "vive_interfaces::msg",
  "Controller",
  _Controller__cdr_serialize,
  _Controller__cdr_deserialize,
  _Controller__get_serialized_size,
  _Controller__max_serialized_size
};

static rosidl_message_type_support_t _Controller__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Controller,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vive_interfaces, msg, Controller)() {
  return &_Controller__type_support;
}

#if defined(__cplusplus)
}
#endif
