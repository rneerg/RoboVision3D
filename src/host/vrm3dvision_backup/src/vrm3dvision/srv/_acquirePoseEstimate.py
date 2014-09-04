"""autogenerated by genpy from vrm3dvision/acquirePoseEstimateRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import vrm3dvision.msg

class acquirePoseEstimateRequest(genpy.Message):
  _md5sum = "e2b11981ecf3d07c32d1e7084f305dbe"
  _type = "vrm3dvision/acquirePoseEstimateRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """string model
string method
string exposure
bool manual_trigger
SurfaceModelParams smp
AlignmentPrerejectiveParams app

================================================================================
MSG: vrm3dvision/SurfaceModelParams
#### Common parameters
float64 rel_sampling_distance

#### Creation parameters
int8 	model_invert_normals
float64 pose_ref_rel_sampling_distance
float64 feat_step_size_rel
uint16 feat_angle_resolution

#### Detection parameters

## Approximate matching
float64 key_point_fraction
float64 min_score
int8 	return_result_handle
int8 	num_matches
float64 max_overlap_dist_rel

## Sparse pose refinement
int8 	sparse_pose_refinement
string 	score_type
int8 	pose_ref_use_scene_normals

## Dense pose refinement
int8 	dense_pose_refinement
uint16 	pose_ref_num_steps
uint16 	pose_ref_sub_sampling
float64 pose_ref_dist_threshold_rel
float64 pose_ref_scoring_dist_rel

## Evaluation
float64 min_score_threshold
bool 	reset_to_default



================================================================================
MSG: vrm3dvision/AlignmentPrerejectiveParams
#### Common parameters
float64 leaf_size
float64 normal_radius_ratio_leaf
float64 feature_radius_ratio_leaf
uint32 	correspondence_randomness
float64 similarity_threshold
uint32 	max_iterations
float64 max_correspondence_distance_ratio_leaf
float64 inlier_fraction

## ICP
uint32 	icp_max_iterations
float64 icp_max_correspondence_distance_ratio_leaf

# Alignment Prerejective
float64 min_score
float64 min_score_threshold





"""
  __slots__ = ['model','method','exposure','manual_trigger','smp','app']
  _slot_types = ['string','string','string','bool','vrm3dvision/SurfaceModelParams','vrm3dvision/AlignmentPrerejectiveParams']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       model,method,exposure,manual_trigger,smp,app

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(acquirePoseEstimateRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.model is None:
        self.model = ''
      if self.method is None:
        self.method = ''
      if self.exposure is None:
        self.exposure = ''
      if self.manual_trigger is None:
        self.manual_trigger = False
      if self.smp is None:
        self.smp = vrm3dvision.msg.SurfaceModelParams()
      if self.app is None:
        self.app = vrm3dvision.msg.AlignmentPrerejectiveParams()
    else:
      self.model = ''
      self.method = ''
      self.exposure = ''
      self.manual_trigger = False
      self.smp = vrm3dvision.msg.SurfaceModelParams()
      self.app = vrm3dvision.msg.AlignmentPrerejectiveParams()

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
      _x = self.model
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.method
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.exposure
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_Bdb2dH2d2bdb.pack(_x.manual_trigger, _x.smp.rel_sampling_distance, _x.smp.model_invert_normals, _x.smp.pose_ref_rel_sampling_distance, _x.smp.feat_step_size_rel, _x.smp.feat_angle_resolution, _x.smp.key_point_fraction, _x.smp.min_score, _x.smp.return_result_handle, _x.smp.num_matches, _x.smp.max_overlap_dist_rel, _x.smp.sparse_pose_refinement))
      _x = self.smp.score_type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_2b2H3dB3dIdI2dI3d.pack(_x.smp.pose_ref_use_scene_normals, _x.smp.dense_pose_refinement, _x.smp.pose_ref_num_steps, _x.smp.pose_ref_sub_sampling, _x.smp.pose_ref_dist_threshold_rel, _x.smp.pose_ref_scoring_dist_rel, _x.smp.min_score_threshold, _x.smp.reset_to_default, _x.app.leaf_size, _x.app.normal_radius_ratio_leaf, _x.app.feature_radius_ratio_leaf, _x.app.correspondence_randomness, _x.app.similarity_threshold, _x.app.max_iterations, _x.app.max_correspondence_distance_ratio_leaf, _x.app.inlier_fraction, _x.app.icp_max_iterations, _x.app.icp_max_correspondence_distance_ratio_leaf, _x.app.min_score, _x.app.min_score_threshold))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.smp is None:
        self.smp = vrm3dvision.msg.SurfaceModelParams()
      if self.app is None:
        self.app = vrm3dvision.msg.AlignmentPrerejectiveParams()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.model = str[start:end].decode('utf-8')
      else:
        self.model = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.method = str[start:end].decode('utf-8')
      else:
        self.method = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.exposure = str[start:end].decode('utf-8')
      else:
        self.exposure = str[start:end]
      _x = self
      start = end
      end += 55
      (_x.manual_trigger, _x.smp.rel_sampling_distance, _x.smp.model_invert_normals, _x.smp.pose_ref_rel_sampling_distance, _x.smp.feat_step_size_rel, _x.smp.feat_angle_resolution, _x.smp.key_point_fraction, _x.smp.min_score, _x.smp.return_result_handle, _x.smp.num_matches, _x.smp.max_overlap_dist_rel, _x.smp.sparse_pose_refinement,) = _struct_Bdb2dH2d2bdb.unpack(str[start:end])
      self.manual_trigger = bool(self.manual_trigger)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.smp.score_type = str[start:end].decode('utf-8')
      else:
        self.smp.score_type = str[start:end]
      _x = self
      start = end
      end += 115
      (_x.smp.pose_ref_use_scene_normals, _x.smp.dense_pose_refinement, _x.smp.pose_ref_num_steps, _x.smp.pose_ref_sub_sampling, _x.smp.pose_ref_dist_threshold_rel, _x.smp.pose_ref_scoring_dist_rel, _x.smp.min_score_threshold, _x.smp.reset_to_default, _x.app.leaf_size, _x.app.normal_radius_ratio_leaf, _x.app.feature_radius_ratio_leaf, _x.app.correspondence_randomness, _x.app.similarity_threshold, _x.app.max_iterations, _x.app.max_correspondence_distance_ratio_leaf, _x.app.inlier_fraction, _x.app.icp_max_iterations, _x.app.icp_max_correspondence_distance_ratio_leaf, _x.app.min_score, _x.app.min_score_threshold,) = _struct_2b2H3dB3dIdI2dI3d.unpack(str[start:end])
      self.smp.reset_to_default = bool(self.smp.reset_to_default)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.model
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.method
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.exposure
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_Bdb2dH2d2bdb.pack(_x.manual_trigger, _x.smp.rel_sampling_distance, _x.smp.model_invert_normals, _x.smp.pose_ref_rel_sampling_distance, _x.smp.feat_step_size_rel, _x.smp.feat_angle_resolution, _x.smp.key_point_fraction, _x.smp.min_score, _x.smp.return_result_handle, _x.smp.num_matches, _x.smp.max_overlap_dist_rel, _x.smp.sparse_pose_refinement))
      _x = self.smp.score_type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_2b2H3dB3dIdI2dI3d.pack(_x.smp.pose_ref_use_scene_normals, _x.smp.dense_pose_refinement, _x.smp.pose_ref_num_steps, _x.smp.pose_ref_sub_sampling, _x.smp.pose_ref_dist_threshold_rel, _x.smp.pose_ref_scoring_dist_rel, _x.smp.min_score_threshold, _x.smp.reset_to_default, _x.app.leaf_size, _x.app.normal_radius_ratio_leaf, _x.app.feature_radius_ratio_leaf, _x.app.correspondence_randomness, _x.app.similarity_threshold, _x.app.max_iterations, _x.app.max_correspondence_distance_ratio_leaf, _x.app.inlier_fraction, _x.app.icp_max_iterations, _x.app.icp_max_correspondence_distance_ratio_leaf, _x.app.min_score, _x.app.min_score_threshold))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.smp is None:
        self.smp = vrm3dvision.msg.SurfaceModelParams()
      if self.app is None:
        self.app = vrm3dvision.msg.AlignmentPrerejectiveParams()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.model = str[start:end].decode('utf-8')
      else:
        self.model = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.method = str[start:end].decode('utf-8')
      else:
        self.method = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.exposure = str[start:end].decode('utf-8')
      else:
        self.exposure = str[start:end]
      _x = self
      start = end
      end += 55
      (_x.manual_trigger, _x.smp.rel_sampling_distance, _x.smp.model_invert_normals, _x.smp.pose_ref_rel_sampling_distance, _x.smp.feat_step_size_rel, _x.smp.feat_angle_resolution, _x.smp.key_point_fraction, _x.smp.min_score, _x.smp.return_result_handle, _x.smp.num_matches, _x.smp.max_overlap_dist_rel, _x.smp.sparse_pose_refinement,) = _struct_Bdb2dH2d2bdb.unpack(str[start:end])
      self.manual_trigger = bool(self.manual_trigger)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.smp.score_type = str[start:end].decode('utf-8')
      else:
        self.smp.score_type = str[start:end]
      _x = self
      start = end
      end += 115
      (_x.smp.pose_ref_use_scene_normals, _x.smp.dense_pose_refinement, _x.smp.pose_ref_num_steps, _x.smp.pose_ref_sub_sampling, _x.smp.pose_ref_dist_threshold_rel, _x.smp.pose_ref_scoring_dist_rel, _x.smp.min_score_threshold, _x.smp.reset_to_default, _x.app.leaf_size, _x.app.normal_radius_ratio_leaf, _x.app.feature_radius_ratio_leaf, _x.app.correspondence_randomness, _x.app.similarity_threshold, _x.app.max_iterations, _x.app.max_correspondence_distance_ratio_leaf, _x.app.inlier_fraction, _x.app.icp_max_iterations, _x.app.icp_max_correspondence_distance_ratio_leaf, _x.app.min_score, _x.app.min_score_threshold,) = _struct_2b2H3dB3dIdI2dI3d.unpack(str[start:end])
      self.smp.reset_to_default = bool(self.smp.reset_to_default)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_2b2H3dB3dIdI2dI3d = struct.Struct("<2b2H3dB3dIdI2dI3d")
_struct_Bdb2dH2d2bdb = struct.Struct("<Bdb2dH2d2bdb")
"""autogenerated by genpy from vrm3dvision/acquirePoseEstimateResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class acquirePoseEstimateResponse(genpy.Message):
  _md5sum = "358e233cde0c8a8bcfea4ce193f8fc15"
  _type = "vrm3dvision/acquirePoseEstimateResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool success


"""
  __slots__ = ['success']
  _slot_types = ['bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       success

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(acquirePoseEstimateResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.success is None:
        self.success = False
    else:
      self.success = False

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
      buff.write(_struct_B.pack(self.success))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 1
      (self.success,) = _struct_B.unpack(str[start:end])
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_struct_B.pack(self.success))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 1
      (self.success,) = _struct_B.unpack(str[start:end])
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_B = struct.Struct("<B")
class acquirePoseEstimate(object):
  _type          = 'vrm3dvision/acquirePoseEstimate'
  _md5sum = 'cf391b127fb3c1a20668508da59fe3f2'
  _request_class  = acquirePoseEstimateRequest
  _response_class = acquirePoseEstimateResponse
