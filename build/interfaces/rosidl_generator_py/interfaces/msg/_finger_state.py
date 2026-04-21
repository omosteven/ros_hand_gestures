# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/FingerState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FingerState(type):
    """Metaclass of message 'FingerState'."""

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
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.msg.FingerState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__finger_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__finger_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__finger_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__finger_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__finger_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FingerState(metaclass=Metaclass_FingerState):
    """Message class 'FingerState'."""

    __slots__ = [
        '_thumb',
        '_index',
        '_middle',
        '_ring',
        '_little',
    ]

    _fields_and_field_types = {
        'thumb': 'boolean',
        'index': 'boolean',
        'middle': 'boolean',
        'ring': 'boolean',
        'little': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.thumb = kwargs.get('thumb', bool())
        self.index = kwargs.get('index', bool())
        self.middle = kwargs.get('middle', bool())
        self.ring = kwargs.get('ring', bool())
        self.little = kwargs.get('little', bool())

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
        if self.thumb != other.thumb:
            return False
        if self.index != other.index:
            return False
        if self.middle != other.middle:
            return False
        if self.ring != other.ring:
            return False
        if self.little != other.little:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def thumb(self):
        """Message field 'thumb'."""
        return self._thumb

    @thumb.setter
    def thumb(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'thumb' field must be of type 'bool'"
        self._thumb = value

    @builtins.property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'index' field must be of type 'bool'"
        self._index = value

    @builtins.property
    def middle(self):
        """Message field 'middle'."""
        return self._middle

    @middle.setter
    def middle(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'middle' field must be of type 'bool'"
        self._middle = value

    @builtins.property
    def ring(self):
        """Message field 'ring'."""
        return self._ring

    @ring.setter
    def ring(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ring' field must be of type 'bool'"
        self._ring = value

    @builtins.property
    def little(self):
        """Message field 'little'."""
        return self._little

    @little.setter
    def little(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'little' field must be of type 'bool'"
        self._little = value
