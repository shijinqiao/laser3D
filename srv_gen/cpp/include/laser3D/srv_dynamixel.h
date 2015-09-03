/* Auto-generated by genmsg_cpp for file /home/exbot/rosbuild_ws/sandbo/laser3D/srv/srv_dynamixel.srv */
#ifndef LASER3D_SERVICE_SRV_DYNAMIXEL_H
#define LASER3D_SERVICE_SRV_DYNAMIXEL_H
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




namespace laser3D
{
template <class ContainerAllocator>
struct srv_dynamixelRequest_ {
  typedef srv_dynamixelRequest_<ContainerAllocator> Type;

  srv_dynamixelRequest_()
  : position_i(0.0)
  , speed(0)
  {
  }

  srv_dynamixelRequest_(const ContainerAllocator& _alloc)
  : position_i(0.0)
  , speed(0)
  {
  }

  typedef float _position_i_type;
  float position_i;

  typedef uint16_t _speed_type;
  uint16_t speed;


  typedef boost::shared_ptr< ::laser3D::srv_dynamixelRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::laser3D::srv_dynamixelRequest_<ContainerAllocator>  const> ConstPtr;
}; // struct srv_dynamixelRequest
typedef  ::laser3D::srv_dynamixelRequest_<std::allocator<void> > srv_dynamixelRequest;

typedef boost::shared_ptr< ::laser3D::srv_dynamixelRequest> srv_dynamixelRequestPtr;
typedef boost::shared_ptr< ::laser3D::srv_dynamixelRequest const> srv_dynamixelRequestConstPtr;



template <class ContainerAllocator>
struct srv_dynamixelResponse_ {
  typedef srv_dynamixelResponse_<ContainerAllocator> Type;

  srv_dynamixelResponse_()
  : position_o(0.0)
  , work(0)
  , comm(0)
  {
  }

  srv_dynamixelResponse_(const ContainerAllocator& _alloc)
  : position_o(0.0)
  , work(0)
  , comm(0)
  {
  }

  typedef float _position_o_type;
  float position_o;

  typedef uint16_t _work_type;
  uint16_t work;

  typedef uint16_t _comm_type;
  uint16_t comm;


  typedef boost::shared_ptr< ::laser3D::srv_dynamixelResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::laser3D::srv_dynamixelResponse_<ContainerAllocator>  const> ConstPtr;
}; // struct srv_dynamixelResponse
typedef  ::laser3D::srv_dynamixelResponse_<std::allocator<void> > srv_dynamixelResponse;

typedef boost::shared_ptr< ::laser3D::srv_dynamixelResponse> srv_dynamixelResponsePtr;
typedef boost::shared_ptr< ::laser3D::srv_dynamixelResponse const> srv_dynamixelResponseConstPtr;


struct srv_dynamixel
{

typedef srv_dynamixelRequest Request;
typedef srv_dynamixelResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct srv_dynamixel
} // namespace laser3D

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::laser3D::srv_dynamixelRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::laser3D::srv_dynamixelRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::laser3D::srv_dynamixelRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "571068c8e4ed10374bfb78fabccaf952";
  }

  static const char* value(const  ::laser3D::srv_dynamixelRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x571068c8e4ed1037ULL;
  static const uint64_t static_value2 = 0x4bfb78fabccaf952ULL;
};

template<class ContainerAllocator>
struct DataType< ::laser3D::srv_dynamixelRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "laser3D/srv_dynamixelRequest";
  }

  static const char* value(const  ::laser3D::srv_dynamixelRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::laser3D::srv_dynamixelRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32 position_i\n\
uint16 speed\n\
\n\
";
  }

  static const char* value(const  ::laser3D::srv_dynamixelRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::laser3D::srv_dynamixelRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::laser3D::srv_dynamixelResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::laser3D::srv_dynamixelResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::laser3D::srv_dynamixelResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2d4afb0fea9fbc4c462fcc20f49f52ac";
  }

  static const char* value(const  ::laser3D::srv_dynamixelResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x2d4afb0fea9fbc4cULL;
  static const uint64_t static_value2 = 0x462fcc20f49f52acULL;
};

template<class ContainerAllocator>
struct DataType< ::laser3D::srv_dynamixelResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "laser3D/srv_dynamixelResponse";
  }

  static const char* value(const  ::laser3D::srv_dynamixelResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::laser3D::srv_dynamixelResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32 position_o\n\
uint16 work\n\
uint16 comm\n\
\n\
\n\
\n\
";
  }

  static const char* value(const  ::laser3D::srv_dynamixelResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::laser3D::srv_dynamixelResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::laser3D::srv_dynamixelRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.position_i);
    stream.next(m.speed);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct srv_dynamixelRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::laser3D::srv_dynamixelResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.position_o);
    stream.next(m.work);
    stream.next(m.comm);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct srv_dynamixelResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<laser3D::srv_dynamixel> {
  static const char* value() 
  {
    return "69076158aca1b0bc98d7a49fe2858405";
  }

  static const char* value(const laser3D::srv_dynamixel&) { return value(); } 
};

template<>
struct DataType<laser3D::srv_dynamixel> {
  static const char* value() 
  {
    return "laser3D/srv_dynamixel";
  }

  static const char* value(const laser3D::srv_dynamixel&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<laser3D::srv_dynamixelRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "69076158aca1b0bc98d7a49fe2858405";
  }

  static const char* value(const laser3D::srv_dynamixelRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<laser3D::srv_dynamixelRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "laser3D/srv_dynamixel";
  }

  static const char* value(const laser3D::srv_dynamixelRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<laser3D::srv_dynamixelResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "69076158aca1b0bc98d7a49fe2858405";
  }

  static const char* value(const laser3D::srv_dynamixelResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<laser3D::srv_dynamixelResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "laser3D/srv_dynamixel";
  }

  static const char* value(const laser3D::srv_dynamixelResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // LASER3D_SERVICE_SRV_DYNAMIXEL_H

