# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vive_interfaces:msg\Controller.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Controller(type):
    """Metaclass of message 'Controller'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('vive_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vive_interfaces.msg.Controller')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__controller
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__controller
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__controller
            cls._TYPE_SUPPORT = module.type_support_msg__msg__controller
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__controller

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Controller(metaclass=Metaclass_Controller):
    """Message class 'Controller'."""

    __slots__ = [
        '_x',
        '_y',
        '_z',
        '_yaw',
        '_pitch',
        '_roll',
        '_grip',
        '_menu',
        '_trigger',
        '_trackpad_pressed',
        '_trackpad_touched',
        '_trackpad_x',
        '_trackpad_y',
    ]

    _fields_and_field_types = {
        'x': 'float',
        'y': 'float',
        'z': 'float',
        'yaw': 'float',
        'pitch': 'float',
        'roll': 'float',
        'grip': 'boolean',
        'menu': 'boolean',
        'trigger': 'boolean',
        'trackpad_pressed': 'boolean',
        'trackpad_touched': 'boolean',
        'trackpad_x': 'float',
        'trackpad_y': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.yaw = kwargs.get('yaw', float())
        self.pitch = kwargs.get('pitch', float())
        self.roll = kwargs.get('roll', float())
        self.grip = kwargs.get('grip', bool())
        self.menu = kwargs.get('menu', bool())
        self.trigger = kwargs.get('trigger', bool())
        self.trackpad_pressed = kwargs.get('trackpad_pressed', bool())
        self.trackpad_touched = kwargs.get('trackpad_touched', bool())
        self.trackpad_x = kwargs.get('trackpad_x', float())
        self.trackpad_y = kwargs.get('trackpad_y', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.yaw != other.yaw:
            return False
        if self.pitch != other.pitch:
            return False
        if self.roll != other.roll:
            return False
        if self.grip != other.grip:
            return False
        if self.menu != other.menu:
            return False
        if self.trigger != other.trigger:
            return False
        if self.trackpad_pressed != other.trackpad_pressed:
            return False
        if self.trackpad_touched != other.trackpad_touched:
            return False
        if self.trackpad_x != other.trackpad_x:
            return False
        if self.trackpad_y != other.trackpad_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
        self._y = value

    @property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
        self._z = value

    @property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
        self._yaw = value

    @property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
        self._pitch = value

    @property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
        self._roll = value

    @property
    def grip(self):
        """Message field 'grip'."""
        return self._grip

    @grip.setter
    def grip(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'grip' field must be of type 'bool'"
        self._grip = value

    @property
    def menu(self):
        """Message field 'menu'."""
        return self._menu

    @menu.setter
    def menu(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'menu' field must be of type 'bool'"
        self._menu = value

    @property
    def trigger(self):
        """Message field 'trigger'."""
        return self._trigger

    @trigger.setter
    def trigger(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'trigger' field must be of type 'bool'"
        self._trigger = value

    @property
    def trackpad_pressed(self):
        """Message field 'trackpad_pressed'."""
        return self._trackpad_pressed

    @trackpad_pressed.setter
    def trackpad_pressed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'trackpad_pressed' field must be of type 'bool'"
        self._trackpad_pressed = value

    @property
    def trackpad_touched(self):
        """Message field 'trackpad_touched'."""
        return self._trackpad_touched

    @trackpad_touched.setter
    def trackpad_touched(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'trackpad_touched' field must be of type 'bool'"
        self._trackpad_touched = value

    @property
    def trackpad_x(self):
        """Message field 'trackpad_x'."""
        return self._trackpad_x

    @trackpad_x.setter
    def trackpad_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'trackpad_x' field must be of type 'float'"
        self._trackpad_x = value

    @property
    def trackpad_y(self):
        """Message field 'trackpad_y'."""
        return self._trackpad_y

    @trackpad_y.setter
    def trackpad_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'trackpad_y' field must be of type 'float'"
        self._trackpad_y = value
