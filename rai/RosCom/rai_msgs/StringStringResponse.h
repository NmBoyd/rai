// Generated by gencpp from file rai_msgs/StringStringResponse.msg
// DO NOT EDIT!


#ifndef RAI_MSGS_MESSAGE_STRINGSTRINGRESPONSE_H
#define RAI_MSGS_MESSAGE_STRINGSTRINGRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rai_msgs
{
template <class ContainerAllocator>
struct StringStringResponse_
{
  typedef StringStringResponse_<ContainerAllocator> Type;

  StringStringResponse_()
    : str()  {
    }
  StringStringResponse_(const ContainerAllocator& _alloc)
    : str(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _str_type;
  _str_type str;





  typedef boost::shared_ptr< ::rai_msgs::StringStringResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rai_msgs::StringStringResponse_<ContainerAllocator> const> ConstPtr;

}; // struct StringStringResponse_

typedef ::rai_msgs::StringStringResponse_<std::allocator<void> > StringStringResponse;

typedef boost::shared_ptr< ::rai_msgs::StringStringResponse > StringStringResponsePtr;
typedef boost::shared_ptr< ::rai_msgs::StringStringResponse const> StringStringResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rai_msgs::StringStringResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rai_msgs::StringStringResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rai_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/msg'], 'rai_msgs': ['/home/mtoussai/git/LGP-execution/rai/rai/RosCom/rai_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rai_msgs::StringStringResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rai_msgs::StringStringResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rai_msgs::StringStringResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rai_msgs::StringStringResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rai_msgs::StringStringResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rai_msgs::StringStringResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rai_msgs::StringStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "994972b6e03928b2476860ce6c4c8e17";
  }

  static const char* value(const ::rai_msgs::StringStringResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x994972b6e03928b2ULL;
  static const uint64_t static_value2 = 0x476860ce6c4c8e17ULL;
};

template<class ContainerAllocator>
struct DataType< ::rai_msgs::StringStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rai_msgs/StringStringResponse";
  }

  static const char* value(const ::rai_msgs::StringStringResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rai_msgs::StringStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string str\n\
\n\
";
  }

  static const char* value(const ::rai_msgs::StringStringResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rai_msgs::StringStringResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.str);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StringStringResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rai_msgs::StringStringResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rai_msgs::StringStringResponse_<ContainerAllocator>& v)
  {
    s << indent << "str: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.str);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RAI_MSGS_MESSAGE_STRINGSTRINGRESPONSE_H
