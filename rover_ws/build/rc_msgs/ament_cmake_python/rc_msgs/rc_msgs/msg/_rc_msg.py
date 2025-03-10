# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rc_msgs:msg/RcMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RcMsg(type):
    """Metaclass of message 'RcMsg'."""

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
            module = import_type_support('rc_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rc_msgs.msg.RcMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rc_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rc_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rc_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rc_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rc_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RcMsg(metaclass=Metaclass_RcMsg):
    """Message class 'RcMsg'."""

    __slots__ = [
        '_arm',
        '_reverse',
        '_throttle',
        '_steer',
        '_op_mode',
    ]

    _fields_and_field_types = {
        'arm': 'boolean',
        'reverse': 'boolean',
        'throttle': 'int16',
        'steer': 'int16',
        'op_mode': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.arm = kwargs.get('arm', bool())
        self.reverse = kwargs.get('reverse', bool())
        self.throttle = kwargs.get('throttle', int())
        self.steer = kwargs.get('steer', int())
        self.op_mode = kwargs.get('op_mode', int())

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
        if self.arm != other.arm:
            return False
        if self.reverse != other.reverse:
            return False
        if self.throttle != other.throttle:
            return False
        if self.steer != other.steer:
            return False
        if self.op_mode != other.op_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def arm(self):
        """Message field 'arm'."""
        return self._arm

    @arm.setter
    def arm(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'arm' field must be of type 'bool'"
        self._arm = value

    @builtins.property
    def reverse(self):
        """Message field 'reverse'."""
        return self._reverse

    @reverse.setter
    def reverse(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reverse' field must be of type 'bool'"
        self._reverse = value

    @builtins.property
    def throttle(self):
        """Message field 'throttle'."""
        return self._throttle

    @throttle.setter
    def throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'throttle' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'throttle' field must be an integer in [-32768, 32767]"
        self._throttle = value

    @builtins.property
    def steer(self):
        """Message field 'steer'."""
        return self._steer

    @steer.setter
    def steer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steer' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'steer' field must be an integer in [-32768, 32767]"
        self._steer = value

    @builtins.property
    def op_mode(self):
        """Message field 'op_mode'."""
        return self._op_mode

    @op_mode.setter
    def op_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'op_mode' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'op_mode' field must be an integer in [-32768, 32767]"
        self._op_mode = value
