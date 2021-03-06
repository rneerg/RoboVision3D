/* Auto-generated by genmsg_cpp for file /home/jeppe/workspace-d3/robovision3d/host/vrm3dvision/srv/computeBestExposure.srv */
#ifndef VRM3DVISION_SERVICE_COMPUTEBESTEXPOSURE_H
#define VRM3DVISION_SERVICE_COMPUTEBESTEXPOSURE_H
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
struct computeBestExposureRequest_ {
  typedef computeBestExposureRequest_<ContainerAllocator> Type;

  computeBestExposureRequest_()
  : model_name()
  , exposures()
  {
  }

  computeBestExposureRequest_(const ContainerAllocator& _alloc)
  : model_name(_alloc)
  , exposures(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _model_name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  model_name;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _exposures_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  exposures;


  typedef boost::shared_ptr< ::vrm3dvision::computeBestExposureRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrm3dvision::computeBestExposureRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct computeBestExposureRequest
typedef  ::vrm3dvision::computeBestExposureRequest_<std::allocator<void> > computeBestExposureRequest;

typedef boost::shared_ptr< ::vrm3dvision::computeBestExposureRequest> computeBestExposureRequestPtr;
typedef boost::shared_ptr< ::vrm3dvision::computeBestExposureRequest const> computeBestExposureRequestConstPtr;



template <class ContainerAllocator>
struct computeBestExposureResponse_ {
  typedef computeBestExposureResponse_<ContainerAllocator> Type;

  computeBestExposureResponse_()
  : success(false)
  {
  }

  computeBestExposureResponse_(const ContainerAllocator& _alloc)
  : success(false)
  {
  }

  typedef uint8_t _success_type;
  uint8_t success;


  typedef boost::shared_ptr< ::vrm3dvision::computeBestExposureResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrm3dvision::computeBestExposureResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct computeBestExposureResponse
typedef  ::vrm3dvision::computeBestExposureResponse_<std::allocator<void> > computeBestExposureResponse;

typedef boost::shared_ptr< ::vrm3dvision::computeBestExposureResponse> computeBestExposureResponsePtr;
typedef boost::shared_ptr< ::vrm3dvision::computeBestExposureResponse const> computeBestExposureResponseConstPtr;


struct computeBestExposure
{

typedef computeBestExposureRequest Request;
typedef computeBestExposureResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct computeBestExposure
} // namespace vrm3dvision

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrm3dvision::computeBestExposureRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrm3dvision::computeBestExposureRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrm3dvision::computeBestExposureRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "9fef676d3c93dbdaefd7102c84ec769e";
  }

  static const char* value(const  ::vrm3dvision::computeBestExposureRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x9fef676d3c93dbdaULL;
  static const uint64_t static_value2 = 0xefd7102c84ec769eULL;
};

template<class ContainerAllocator>
struct DataType< ::vrm3dvision::computeBestExposureRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrm3dvision/computeBestExposureRequest";
  }

  static const char* value(const  ::vrm3dvision::computeBestExposureRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrm3dvision::computeBestExposureRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string model_name\n\
string exposures\n\
\n\
";
  }

  static const char* value(const  ::vrm3dvision::computeBestExposureRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrm3dvision::computeBestExposureResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrm3dvision::computeBestExposureResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrm3dvision::computeBestExposureResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const  ::vrm3dvision::computeBestExposureResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrm3dvision::computeBestExposureResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrm3dvision/computeBestExposureResponse";
  }

  static const char* value(const  ::vrm3dvision::computeBestExposureResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrm3dvision::computeBestExposureResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool success\n\
\n\
\n\
";
  }

  static const char* value(const  ::vrm3dvision::computeBestExposureResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrm3dvision::computeBestExposureResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrm3dvision::computeBestExposureRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.model_name);
    stream.next(m.exposures);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct computeBestExposureRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrm3dvision::computeBestExposureResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.success);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct computeBestExposureResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<vrm3dvision::computeBestExposure> {
  static const char* value() 
  {
    return "2dda0f20eb5007c51638f441a7489240";
  }

  static const char* value(const vrm3dvision::computeBestExposure&) { return value(); } 
};

template<>
struct DataType<vrm3dvision::computeBestExposure> {
  static const char* value() 
  {
    return "vrm3dvision/computeBestExposure";
  }

  static const char* value(const vrm3dvision::computeBestExposure&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrm3dvision::computeBestExposureRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2dda0f20eb5007c51638f441a7489240";
  }

  static const char* value(const vrm3dvision::computeBestExposureRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrm3dvision::computeBestExposureRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrm3dvision/computeBestExposure";
  }

  static const char* value(const vrm3dvision::computeBestExposureRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrm3dvision::computeBestExposureResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2dda0f20eb5007c51638f441a7489240";
  }

  static const char* value(const vrm3dvision::computeBestExposureResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrm3dvision::computeBestExposureResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrm3dvision/computeBestExposure";
  }

  static const char* value(const vrm3dvision::computeBestExposureResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // VRM3DVISION_SERVICE_COMPUTEBESTEXPOSURE_H

