/* Auto-generated by genmsg_cpp for file /home/jeppe/workspace-d3/robovision3d/host/vrm3dvision/srv/acquireSequenceOnRobot.srv */
#ifndef VRM3DVISION_SERVICE_ACQUIRESEQUENCEONROBOT_H
#define VRM3DVISION_SERVICE_ACQUIRESEQUENCEONROBOT_H
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
struct acquireSequenceOnRobotRequest_ {
  typedef acquireSequenceOnRobotRequest_<ContainerAllocator> Type;

  acquireSequenceOnRobotRequest_()
  : model()
  , method()
  , exposure()
  , save_path()
  {
  }

  acquireSequenceOnRobotRequest_(const ContainerAllocator& _alloc)
  : model(_alloc)
  , method(_alloc)
  , exposure(_alloc)
  , save_path(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _model_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  model;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _method_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  method;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _exposure_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  exposure;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _save_path_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  save_path;


  typedef boost::shared_ptr< ::vrm3dvision::acquireSequenceOnRobotRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrm3dvision::acquireSequenceOnRobotRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct acquireSequenceOnRobotRequest
typedef  ::vrm3dvision::acquireSequenceOnRobotRequest_<std::allocator<void> > acquireSequenceOnRobotRequest;

typedef boost::shared_ptr< ::vrm3dvision::acquireSequenceOnRobotRequest> acquireSequenceOnRobotRequestPtr;
typedef boost::shared_ptr< ::vrm3dvision::acquireSequenceOnRobotRequest const> acquireSequenceOnRobotRequestConstPtr;



template <class ContainerAllocator>
struct acquireSequenceOnRobotResponse_ {
  typedef acquireSequenceOnRobotResponse_<ContainerAllocator> Type;

  acquireSequenceOnRobotResponse_()
  : success(false)
  {
  }

  acquireSequenceOnRobotResponse_(const ContainerAllocator& _alloc)
  : success(false)
  {
  }

  typedef uint8_t _success_type;
  uint8_t success;


  typedef boost::shared_ptr< ::vrm3dvision::acquireSequenceOnRobotResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrm3dvision::acquireSequenceOnRobotResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct acquireSequenceOnRobotResponse
typedef  ::vrm3dvision::acquireSequenceOnRobotResponse_<std::allocator<void> > acquireSequenceOnRobotResponse;

typedef boost::shared_ptr< ::vrm3dvision::acquireSequenceOnRobotResponse> acquireSequenceOnRobotResponsePtr;
typedef boost::shared_ptr< ::vrm3dvision::acquireSequenceOnRobotResponse const> acquireSequenceOnRobotResponseConstPtr;


struct acquireSequenceOnRobot
{

typedef acquireSequenceOnRobotRequest Request;
typedef acquireSequenceOnRobotResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct acquireSequenceOnRobot
} // namespace vrm3dvision

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrm3dvision::acquireSequenceOnRobotRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrm3dvision::acquireSequenceOnRobotRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrm3dvision::acquireSequenceOnRobotRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "7466b726346f288c73dbb39d433d6860";
  }

  static const char* value(const  ::vrm3dvision::acquireSequenceOnRobotRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x7466b726346f288cULL;
  static const uint64_t static_value2 = 0x73dbb39d433d6860ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrm3dvision::acquireSequenceOnRobotRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrm3dvision/acquireSequenceOnRobotRequest";
  }

  static const char* value(const  ::vrm3dvision::acquireSequenceOnRobotRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrm3dvision::acquireSequenceOnRobotRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string model\n\
string method\n\
string exposure\n\
string save_path\n\
\n\
";
  }

  static const char* value(const  ::vrm3dvision::acquireSequenceOnRobotRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrm3dvision::acquireSequenceOnRobotResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrm3dvision::acquireSequenceOnRobotResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrm3dvision::acquireSequenceOnRobotResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const  ::vrm3dvision::acquireSequenceOnRobotResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrm3dvision::acquireSequenceOnRobotResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrm3dvision/acquireSequenceOnRobotResponse";
  }

  static const char* value(const  ::vrm3dvision::acquireSequenceOnRobotResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrm3dvision::acquireSequenceOnRobotResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool success\n\
\n\
\n\
";
  }

  static const char* value(const  ::vrm3dvision::acquireSequenceOnRobotResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrm3dvision::acquireSequenceOnRobotResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrm3dvision::acquireSequenceOnRobotRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.model);
    stream.next(m.method);
    stream.next(m.exposure);
    stream.next(m.save_path);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct acquireSequenceOnRobotRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrm3dvision::acquireSequenceOnRobotResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.success);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct acquireSequenceOnRobotResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<vrm3dvision::acquireSequenceOnRobot> {
  static const char* value() 
  {
    return "b9667e0169bca17c2158a3394d7309f4";
  }

  static const char* value(const vrm3dvision::acquireSequenceOnRobot&) { return value(); } 
};

template<>
struct DataType<vrm3dvision::acquireSequenceOnRobot> {
  static const char* value() 
  {
    return "vrm3dvision/acquireSequenceOnRobot";
  }

  static const char* value(const vrm3dvision::acquireSequenceOnRobot&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrm3dvision::acquireSequenceOnRobotRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b9667e0169bca17c2158a3394d7309f4";
  }

  static const char* value(const vrm3dvision::acquireSequenceOnRobotRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrm3dvision::acquireSequenceOnRobotRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrm3dvision/acquireSequenceOnRobot";
  }

  static const char* value(const vrm3dvision::acquireSequenceOnRobotRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrm3dvision::acquireSequenceOnRobotResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b9667e0169bca17c2158a3394d7309f4";
  }

  static const char* value(const vrm3dvision::acquireSequenceOnRobotResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrm3dvision::acquireSequenceOnRobotResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrm3dvision/acquireSequenceOnRobot";
  }

  static const char* value(const vrm3dvision::acquireSequenceOnRobotResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // VRM3DVISION_SERVICE_ACQUIRESEQUENCEONROBOT_H

