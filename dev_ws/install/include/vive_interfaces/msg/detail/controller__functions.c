// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vive_interfaces:msg\Controller.idl
// generated code does not contain a copyright notice
#include "vive_interfaces/msg/detail/controller__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
vive_interfaces__msg__Controller__init(vive_interfaces__msg__Controller * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // yaw
  // pitch
  // roll
  // grip
  // menu
  // trigger
  // trackpad_pressed
  // trackpad_touched
  // trackpad_x
  // trackpad_y
  return true;
}

void
vive_interfaces__msg__Controller__fini(vive_interfaces__msg__Controller * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // yaw
  // pitch
  // roll
  // grip
  // menu
  // trigger
  // trackpad_pressed
  // trackpad_touched
  // trackpad_x
  // trackpad_y
}

vive_interfaces__msg__Controller *
vive_interfaces__msg__Controller__create()
{
  vive_interfaces__msg__Controller * msg = (vive_interfaces__msg__Controller *)malloc(sizeof(vive_interfaces__msg__Controller));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vive_interfaces__msg__Controller));
  bool success = vive_interfaces__msg__Controller__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
vive_interfaces__msg__Controller__destroy(vive_interfaces__msg__Controller * msg)
{
  if (msg) {
    vive_interfaces__msg__Controller__fini(msg);
  }
  free(msg);
}


bool
vive_interfaces__msg__Controller__Sequence__init(vive_interfaces__msg__Controller__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  vive_interfaces__msg__Controller * data = NULL;
  if (size) {
    data = (vive_interfaces__msg__Controller *)calloc(size, sizeof(vive_interfaces__msg__Controller));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vive_interfaces__msg__Controller__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vive_interfaces__msg__Controller__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vive_interfaces__msg__Controller__Sequence__fini(vive_interfaces__msg__Controller__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vive_interfaces__msg__Controller__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vive_interfaces__msg__Controller__Sequence *
vive_interfaces__msg__Controller__Sequence__create(size_t size)
{
  vive_interfaces__msg__Controller__Sequence * array = (vive_interfaces__msg__Controller__Sequence *)malloc(sizeof(vive_interfaces__msg__Controller__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = vive_interfaces__msg__Controller__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
vive_interfaces__msg__Controller__Sequence__destroy(vive_interfaces__msg__Controller__Sequence * array)
{
  if (array) {
    vive_interfaces__msg__Controller__Sequence__fini(array);
  }
  free(array);
}
