// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from vive_interfaces:msg\Controller.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "vive_interfaces/msg/detail/controller__struct.h"
#include "vive_interfaces/msg/detail/controller__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool vive_interfaces__msg__controller__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("vive_interfaces.msg._controller.Controller", full_classname_dest, 42) == 0);
  }
  vive_interfaces__msg__Controller * ros_message = _ros_message;
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // grip
    PyObject * field = PyObject_GetAttrString(_pymsg, "grip");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->grip = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // menu
    PyObject * field = PyObject_GetAttrString(_pymsg, "menu");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->menu = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // trigger
    PyObject * field = PyObject_GetAttrString(_pymsg, "trigger");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->trigger = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // trackpad_pressed
    PyObject * field = PyObject_GetAttrString(_pymsg, "trackpad_pressed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trackpad_pressed = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // trackpad_touched
    PyObject * field = PyObject_GetAttrString(_pymsg, "trackpad_touched");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trackpad_touched = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // trackpad_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "trackpad_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->trackpad_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // trackpad_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "trackpad_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->trackpad_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * vive_interfaces__msg__controller__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Controller */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("vive_interfaces.msg._controller");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Controller");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  vive_interfaces__msg__Controller * ros_message = (vive_interfaces__msg__Controller *)raw_ros_message;
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grip
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->grip);
    {
      int rc = PyObject_SetAttrString(_pymessage, "grip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // menu
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->menu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "menu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trigger
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->trigger);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trigger", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trackpad_pressed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->trackpad_pressed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trackpad_pressed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trackpad_touched
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->trackpad_touched);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trackpad_touched", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trackpad_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->trackpad_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trackpad_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trackpad_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->trackpad_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trackpad_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
