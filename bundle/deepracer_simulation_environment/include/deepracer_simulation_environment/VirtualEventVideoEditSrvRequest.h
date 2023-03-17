// Generated by gencpp from file deepracer_simulation_environment/VirtualEventVideoEditSrvRequest.msg
// DO NOT EDIT!


#ifndef DEEPRACER_SIMULATION_ENVIRONMENT_MESSAGE_VIRTUALEVENTVIDEOEDITSRVREQUEST_H
#define DEEPRACER_SIMULATION_ENVIRONMENT_MESSAGE_VIRTUALEVENTVIDEOEDITSRVREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace deepracer_simulation_environment
{
template <class ContainerAllocator>
struct VirtualEventVideoEditSrvRequest_
{
  typedef VirtualEventVideoEditSrvRequest_<ContainerAllocator> Type;

  VirtualEventVideoEditSrvRequest_()
    : display_name()
    , racecar_color()  {
    }
  VirtualEventVideoEditSrvRequest_(const ContainerAllocator& _alloc)
    : display_name(_alloc)
    , racecar_color(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _display_name_type;
  _display_name_type display_name;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _racecar_color_type;
  _racecar_color_type racecar_color;





  typedef boost::shared_ptr< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct VirtualEventVideoEditSrvRequest_

typedef ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<std::allocator<void> > VirtualEventVideoEditSrvRequest;

typedef boost::shared_ptr< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest > VirtualEventVideoEditSrvRequestPtr;
typedef boost::shared_ptr< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest const> VirtualEventVideoEditSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator1> & lhs, const ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator2> & rhs)
{
  return lhs.display_name == rhs.display_name &&
    lhs.racecar_color == rhs.racecar_color;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator1> & lhs, const ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace deepracer_simulation_environment

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a20c4716b8ea42a4d682ce4ccd9435e2";
  }

  static const char* value(const ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa20c4716b8ea42a4ULL;
  static const uint64_t static_value2 = 0xd682ce4ccd9435e2ULL;
};

template<class ContainerAllocator>
struct DataType< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "deepracer_simulation_environment/VirtualEventVideoEditSrvRequest";
  }

  static const char* value(const ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string display_name\n"
"string racecar_color\n"
;
  }

  static const char* value(const ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.display_name);
      stream.next(m.racecar_color);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VirtualEventVideoEditSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::deepracer_simulation_environment::VirtualEventVideoEditSrvRequest_<ContainerAllocator>& v)
  {
    s << indent << "display_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.display_name);
    s << indent << "racecar_color: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.racecar_color);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DEEPRACER_SIMULATION_ENVIRONMENT_MESSAGE_VIRTUALEVENTVIDEOEDITSRVREQUEST_H