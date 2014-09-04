/* Auto-generated by genmsg_cpp for file /home/jeppe/workspace-d3/robovision3d/host/vrm3dvision/srv/setPattern.srv */
#ifndef VRM3DVISION_SERVICE_SETPATTERN_H
#define VRM3DVISION_SERVICE_SETPATTERN_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace vrm3dvision
{
template <class ContainerAllocator>
struct setPatternRequest_ {
  typedef setPatternRequest_<ContainerAllocator> Type;

  setPatternRequest_()
  : partial_view(false)
  , resolution(0)
  , type(0)
  , use_simple_occlusion(false)
  , add_point_colors(false)
  {
  }

  setPatternRequest_(const ContainerAllocator& _alloc)
  : partial_view(false)
  , resolution(0)
  , type(0)
  , use_simple_occlusion(false)
  , add_point_colors(false)
  {
  }

  typedef uint8_t _partial_view_type;
  uint8_t partial_view;

  typedef int32_t _resolution_type;
  int32_t resolution;

  typedef int32_t _type_type;
  int32_t type;

  typedef uint8_t _use_simple_occlusion_type;
  uint8_t use_simple_occlusion;

  typedef uint8_t _add_point_colors_type;
  uint8_t add_point_colors;

  enum { LARGE_GAP_GC = 0 };
  enum { CONVENTIONAL_GC = 1 };

  typedef boost::shared_ptr< ::vrm3dvision::setPatternRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrm3dvision::setPatternRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct setPatternRequest
typedef  ::vrm3dvision::setPatternRequest_<std::allocator<void> > setPatternRequest;

typedef boost::shared_ptr< ::vrm3dvision::setPatternRequest> setPatternRequestPtr;
typedef boost::shared_ptr< ::vrm3dvision::setPatternRequest const> setPatternRequestConstPtr;



template <class ContainerAllocator>
struct setPatternResponse_ {
  typedef setPatternResponse_<ContainerAllocator> Type;

  setPatternResponse_()
  : success(false)
  {
  }

  setPatternResponse_(const ContainerAllocator& _alloc)
  : success(false)
  {
  }

  typedef uint8_t _success_type;
  uint8_t success;


  typedef boost::shared_ptr< ::vrm3dvision::setPatternResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrm3dvision::setPatternResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct setPatternResponse
typedef  ::vrm3dvision::setPatternResponse_<std::allocator<void> > setPatternResponse;

typedef boost::shared_ptr< ::vrm3dvision::setPatternResponse> setPatternResponsePtr;
typedef boost::shared_ptr< ::vrm3dvision::setPatternResponse const> setPatternResponseConstPtr;


struct setPattern
{

typedef setPatternRequest Request;
typedef setPatternResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct setPattern
} // namespace vrm3dvision

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrm3dvision::setPatternRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrm3dvision::setPatternRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrm3dvision::setPatternRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "28724d00da03246f122f3dd4c81ba15b";
  }

  static const char* value(const  ::vrm3dvision::setPatternRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x28724d00da03246fULL;
  static const uint64_t static_value2 = 0x122f3dd4c81ba15bULL;
};

template<class ContainerAllocator>
struct DataType< ::vrm3dvision::setPatternRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrm3dvision/setPatternRequest";
  }

  static const char* value(const  ::vrm3dvision::setPatternRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrm3dvision::setPatternRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 LARGE_GAP_GC = 0\n\
int32 CONVENTIONAL_GC = 1\n\
\n\
bool partial_view\n\
int32 resolution\n\
int32 type\n\
bool use_simple_occlusion\n\
bool add_point_colors\n\
\n\
";
  }

  static const char* value(const  ::vrm3dvision::setPatternRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrm3dvision::setPatternRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrm3dvision::setPatternResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrm3dvision::setPatternResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrm3dvision::setPatternResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const  ::vrm3dvision::setPatternResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrm3dvision::setPatternResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrm3dvision/setPatternResponse";
  }

  static const char* value(const  ::vrm3dvision::setPatternResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrm3dvision::setPatternResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool success\n\
\n\
\n\
";
  }

  static const char* value(const  ::vrm3dvision::setPatternResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrm3dvision::setPatternResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrm3dvision::setPatternRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.partial_view);
    stream.next(m.resolution);
    stream.next(m.type);
    stream.next(m.use_simple_occlusion);
    stream.next(m.add_point_colors);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct setPatternRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrm3dvision::setPatternResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.success);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct setPatternResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<vrm3dvision::setPattern> {
  static const char* value() 
  {
    return "2251a41e841e515d865157e5f0247c6a";
  }

  static const char* value(const vrm3dvision::setPattern&) { return value(); } 
};

template<>
struct DataType<vrm3dvision::setPattern> {
  static const char* value() 
  {
    return "vrm3dvision/setPattern";
  }

  static const char* value(const vrm3dvision::setPattern&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrm3dvision::setPatternRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2251a41e841e515d865157e5f0247c6a";
  }

  static const char* value(const vrm3dvision::setPatternRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrm3dvision::setPatternRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrm3dvision/setPattern";
  }

  static const char* value(const vrm3dvision::setPatternRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrm3dvision::setPatternResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2251a41e841e515d865157e5f0247c6a";
  }

  static const char* value(const vrm3dvision::setPatternResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrm3dvision::setPatternResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrm3dvision/setPattern";
  }

  static const char* value(const vrm3dvision::setPatternResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // VRM3DVISION_SERVICE_SETPATTERN_H

