// Generated by gencpp from file path_server/SetPointNameResponse.msg
// DO NOT EDIT!


#ifndef PATH_SERVER_MESSAGE_SETPOINTNAMERESPONSE_H
#define PATH_SERVER_MESSAGE_SETPOINTNAMERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace path_server
{
template <class ContainerAllocator>
struct SetPointNameResponse_
{
  typedef SetPointNameResponse_<ContainerAllocator> Type;

  SetPointNameResponse_()
    {
    }
  SetPointNameResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::path_server::SetPointNameResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::path_server::SetPointNameResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetPointNameResponse_

typedef ::path_server::SetPointNameResponse_<std::allocator<void> > SetPointNameResponse;

typedef boost::shared_ptr< ::path_server::SetPointNameResponse > SetPointNameResponsePtr;
typedef boost::shared_ptr< ::path_server::SetPointNameResponse const> SetPointNameResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::path_server::SetPointNameResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::path_server::SetPointNameResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace path_server

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::path_server::SetPointNameResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::path_server::SetPointNameResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::path_server::SetPointNameResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::path_server::SetPointNameResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::path_server::SetPointNameResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::path_server::SetPointNameResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::path_server::SetPointNameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::path_server::SetPointNameResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::path_server::SetPointNameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "path_server/SetPointNameResponse";
  }

  static const char* value(const ::path_server::SetPointNameResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::path_server::SetPointNameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::path_server::SetPointNameResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::path_server::SetPointNameResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetPointNameResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::path_server::SetPointNameResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::path_server::SetPointNameResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PATH_SERVER_MESSAGE_SETPOINTNAMERESPONSE_H
