# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from urg_node/Status.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Status(genpy.Message):
  _md5sum = "b393072b65230b373302bfe803e80784"
  _type = "urg_node/Status"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Normal vs setting in the UAM manual.
uint16 NORMAL=0
uint16 SETTING=1
uint16 operating_mode

# The configured area number the stop occurred in.
uint16 area_number
# If the laser is reporting an error or not.
bool error_status
# The error code the laser is reporting.
uint16 error_code
# Does the laser report that it is locked out.
bool lockout_status
# Distance in mm the stop was reported at.
uint16 distance
# The reported angle of the stop in deg.
float32 angle
"""
  # Pseudo-constants
  NORMAL = 0
  SETTING = 1

  __slots__ = ['operating_mode','area_number','error_status','error_code','lockout_status','distance','angle']
  _slot_types = ['uint16','uint16','bool','uint16','bool','uint16','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       operating_mode,area_number,error_status,error_code,lockout_status,distance,angle

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Status, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.operating_mode is None:
        self.operating_mode = 0
      if self.area_number is None:
        self.area_number = 0
      if self.error_status is None:
        self.error_status = False
      if self.error_code is None:
        self.error_code = 0
      if self.lockout_status is None:
        self.lockout_status = False
      if self.distance is None:
        self.distance = 0
      if self.angle is None:
        self.angle = 0.
    else:
      self.operating_mode = 0
      self.area_number = 0
      self.error_status = False
      self.error_code = 0
      self.lockout_status = False
      self.distance = 0
      self.angle = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2HBHBHf().pack(_x.operating_mode, _x.area_number, _x.error_status, _x.error_code, _x.lockout_status, _x.distance, _x.angle))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 14
      (_x.operating_mode, _x.area_number, _x.error_status, _x.error_code, _x.lockout_status, _x.distance, _x.angle,) = _get_struct_2HBHBHf().unpack(str[start:end])
      self.error_status = bool(self.error_status)
      self.lockout_status = bool(self.lockout_status)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2HBHBHf().pack(_x.operating_mode, _x.area_number, _x.error_status, _x.error_code, _x.lockout_status, _x.distance, _x.angle))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 14
      (_x.operating_mode, _x.area_number, _x.error_status, _x.error_code, _x.lockout_status, _x.distance, _x.angle,) = _get_struct_2HBHBHf().unpack(str[start:end])
      self.error_status = bool(self.error_status)
      self.lockout_status = bool(self.lockout_status)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2HBHBHf = None
def _get_struct_2HBHBHf():
    global _struct_2HBHBHf
    if _struct_2HBHBHf is None:
        _struct_2HBHBHf = struct.Struct("<2HBHBHf")
    return _struct_2HBHBHf
