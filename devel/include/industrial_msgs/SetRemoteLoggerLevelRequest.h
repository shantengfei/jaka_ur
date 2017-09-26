// Generated by gencpp from file industrial_msgs/SetRemoteLoggerLevelRequest.msg
// DO NOT EDIT!


#ifndef INDUSTRIAL_MSGS_MESSAGE_SETREMOTELOGGERLEVELREQUEST_H
#define INDUSTRIAL_MSGS_MESSAGE_SETREMOTELOGGERLEVELREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <industrial_msgs/DebugLevel.h>

namespace industrial_msgs
{
template <class ContainerAllocator>
struct SetRemoteLoggerLevelRequest_
{
  typedef SetRemoteLoggerLevelRequest_<ContainerAllocator> Type;

  SetRemoteLoggerLevelRequest_()
    : level()  {
    }
  SetRemoteLoggerLevelRequest_(const ContainerAllocator& _alloc)
    : level(_alloc)  {
  (void)_alloc;
    }



   typedef  ::industrial_msgs::DebugLevel_<ContainerAllocator>  _level_type;
  _level_type level;




  typedef boost::shared_ptr< ::industrial_msgs::SetRemoteLoggerLevelRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::industrial_msgs::SetRemoteLoggerLevelRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetRemoteLoggerLevelRequest_

typedef ::industrial_msgs::SetRemoteLoggerLevelRequest_<std::allocator<void> > SetRemoteLoggerLevelRequest;

typedef boost::shared_ptr< ::industrial_msgs::SetRemoteLoggerLevelRequest > SetRemoteLoggerLevelRequestPtr;
typedef boost::shared_ptr< ::industrial_msgs::SetRemoteLoggerLevelRequest const> SetRemoteLoggerLevelRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::industrial_msgs::SetRemoteLoggerLevelRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::industrial_msgs::SetRemoteLoggerLevelRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace industrial_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'industrial_msgs': ['/home/shantengfei/catkin_ws/src/industrial_core/industrial_msgs/msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::industrial_msgs::SetRemoteLoggerLevelRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::industrial_msgs::SetRemoteLoggerLevelRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::industrial_msgs::SetRemoteLoggerLevelRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::industrial_msgs::SetRemoteLoggerLevelRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_msgs::SetRemoteLoggerLevelRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_msgs::SetRemoteLoggerLevelRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::industrial_msgs::SetRemoteLoggerLevelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3a0089a136293a269fa1a44788ce9777";
  }

  static const char* value(const ::industrial_msgs::SetRemoteLoggerLevelRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3a0089a136293a26ULL;
  static const uint64_t static_value2 = 0x9fa1a44788ce9777ULL;
};

template<class ContainerAllocator>
struct DataType< ::industrial_msgs::SetRemoteLoggerLevelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "industrial_msgs/SetRemoteLoggerLevelRequest";
  }

  static const char* value(const ::industrial_msgs::SetRemoteLoggerLevelRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::industrial_msgs::SetRemoteLoggerLevelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
\n\
industrial_msgs/DebugLevel level\n\
\n\
================================================================================\n\
MSG: industrial_msgs/DebugLevel\n\
# Debug level message enumeration.  This may replicate some functionality that\n\
# alreay exists in the ROS logger.\n\
# TODO: Get more information on the ROS Logger.\n\
uint8 val\n\
\n\
uint8 DEBUG = 5\n\
uint8 INFO = 4\n\
uint8 WARN = 3\n\
uint8 ERROR = 2\n\
uint8 FATAL = 1\n\
uint8 NONE = 0 \n\
";
  }

  static const char* value(const ::industrial_msgs::SetRemoteLoggerLevelRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::industrial_msgs::SetRemoteLoggerLevelRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.level);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetRemoteLoggerLevelRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::industrial_msgs::SetRemoteLoggerLevelRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::industrial_msgs::SetRemoteLoggerLevelRequest_<ContainerAllocator>& v)
  {
    s << indent << "level: ";
    s << std::endl;
    Printer< ::industrial_msgs::DebugLevel_<ContainerAllocator> >::stream(s, indent + "  ", v.level);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INDUSTRIAL_MSGS_MESSAGE_SETREMOTELOGGERLEVELREQUEST_H
