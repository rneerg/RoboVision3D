/* Auto-generated by genmsg_cpp for file /home/jeppe/workspace-d3/robovision3d/host/vrm3dvision/srv/setFrameRate.srv */
#ifndef VRM3DVISION_SERVICE_SETFRAMERATE_H
#define VRM3DVISION_SERVICE_SETFRAMERATE_H
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
struct setFrameRateRequest_ {
  typedef setFrameRateRequest_<ContainerAllocator> Type;

  setFrameRateRequest_()
  : frame_rate(0.0)
  {
  }

  setFrameRateRequest_(const ContainerAllocator& _alloc)
  : frame_rate(0.0)
  {
  }

  typedef float _frame_rate_type;
  float frame_rate;


  typedef boost::shared_ptr< ::vrm3dvision::setFrameRateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrm3dvision::setFrameRateRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct setFrameRateRequest
typedef  ::vrm3dvision::setFrameRateRequest_<std::allocator<void> > setFrameRateRequest;

typedef boost::shared_ptr< ::vrm3dvision::setFrameRateRequest> setFrameRateRequestPtr;
typedef boost::shared_ptr< ::vrm3dvision::setFrameRateRequest const> setFrameRateRequestConstPtr;



template <class ContainerAllocator>
struct setFrameRateResponse_ {
  typedef setFrameRateResponse_<ContainerAllocator> Type;

  setFrameRateResponse_()
  : success(false)
  {
  }

  setFrameRateResponse_(const ContainerAllocator& _alloc)
  : success(false)
  {
  }

  typedef uint8_t _success_type;
  uint8_t success;


  typedef boost::shared_ptr< ::vrm3dvision::setFrameRateResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrm3dvision::setFrameRateResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct setFrameRateResponse
typedef  ::vrm3dvision::setFrameRateResponse_<std::allocator<void> > setFrameRateResponse;

typedef boost::shared_ptr< ::vrm3dvision::setFrameRateResponse> setFrameRateResponsePtr;
typedef boost::shared_ptr< ::vrm3dvision::setFrameRateResponse const> setFrameRateResponseConstPtr;


struct setFrameRate
{

typedef setFrameRateRequest Request;
typedef setFrameRateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct setFrameRate
} // namespace vrm3dvision

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrm3dvision::setFrameRateRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrm3dvision::setFrameRateRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrm3dvision::setFrameRateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c89723eea4f6fe7e3c939bd03da426e3";
  }

  static const char* value(const  ::vrm3dvision::setFrameRateRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xc89723eea4f6fe7eULL;
  static const uint64_t static_value2 = 0x3c939bd03da426e3ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrm3dvision::setFrameRateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrm3dvision/setFrameRateRequest";
  }

  static const char* value(const  ::vrm3dvision::setFrameRateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrm3dvision::setFrameRateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32 frame_rate\n\
\n\
";
  }

  static const char* value(const  ::vrm3dvision::setFrameRateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrm3dvision::setFrameRateRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrm3dvision::setFrameRateResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrm3dvision::setFrameRateResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrm3dvision::setFrameRateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const  ::vrm3dvision::setFrameRateResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrm3dvision::setFrameRateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrm3dvision/setFrameRateResponse";
  }

  static const char* value(const  ::vrm3dvision::setFrameRateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrm3dvision::setFrameRateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool success\n\
\n\
\n\
";
  }

  static const char* value(const  ::vrm3dvision::setFrameRateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrm3dvision::setFrameRateResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrm3dvision::setFrameRateRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.frame_rate);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct setFrameRateRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrm3dvision::setFrameRateResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.success);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct setFrameRateResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<vrm3dvision::setFrameRate> {
  static const char* value() 
  {
    return "e095c38142cda2c7e70004dbdc099796";
  }

  static const char* value(const vrm3dvision::setFrameRate&) { return value(); } 
};

template<>
struct DataType<vrm3dvision::setFrameRate> {
  static const char* value() 
  {
    return "vrm3dvision/setFrameRate";
  }

  static const char* value(const vrm3dvision::setFrameRate&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrm3dvision::setFrameRateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e095c38142cda2c7e70004dbdc099796";
  }

  static const char* value(const vrm3dvision::setFrameRateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrm3dvision::setFrameRateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrm3dvision/setFrameRate";
  }

  static const char* value(const vrm3dvision::setFrameRateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrm3dvision::setFrameRateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e095c38142cda2c7e70004dbdc099796";
  }

  static const char* value(const vrm3dvision::setFrameRateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrm3dvision::setFrameRateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrm3dvision/setFrameRate";
  }

  static const char* value(const vrm3dvision::setFrameRateResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // VRM3DVISION_SERVICE_SETFRAMERATE_H

