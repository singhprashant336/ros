/* Auto-generated by genmsg_cpp for file /home/james/ros/art/utexas-art-ros-pkg-read-only/stacks/art_vehicle/art_msgs/msg/LaneMarking.msg */
#ifndef ART_MSGS_MESSAGE_LANEMARKING_H
#define ART_MSGS_MESSAGE_LANEMARKING_H
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


namespace art_msgs
{
template <class ContainerAllocator>
struct LaneMarking_ {
  typedef LaneMarking_<ContainerAllocator> Type;

  LaneMarking_()
  : lane_marking(0)
  {
  }

  LaneMarking_(const ContainerAllocator& _alloc)
  : lane_marking(0)
  {
  }

  typedef int16_t _lane_marking_type;
  int16_t lane_marking;

  enum { DOUBLE_YELLOW = 0 };
  enum { SOLID_YELLOW = 1 };
  enum { SOLID_WHITE = 2 };
  enum { BROKEN_WHITE = 3 };
  enum { UNDEFINED = 4 };

private:
  static const char* __s_getDataType_() { return "art_msgs/LaneMarking"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "39a90d328b8d3f3a2f63e9f13330afca"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# Route Network Definition File lane marking\n\
# $Id$\n\
\n\
int16 DOUBLE_YELLOW = 0\n\
int16 SOLID_YELLOW = 1\n\
int16 SOLID_WHITE = 2\n\
int16 BROKEN_WHITE = 3\n\
int16 UNDEFINED = 4\n\
\n\
int16 lane_marking\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, lane_marking);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, lane_marking);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(lane_marking);
    return size;
  }

  typedef boost::shared_ptr< ::art_msgs::LaneMarking_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::art_msgs::LaneMarking_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct LaneMarking
typedef  ::art_msgs::LaneMarking_<std::allocator<void> > LaneMarking;

typedef boost::shared_ptr< ::art_msgs::LaneMarking> LaneMarkingPtr;
typedef boost::shared_ptr< ::art_msgs::LaneMarking const> LaneMarkingConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::art_msgs::LaneMarking_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::art_msgs::LaneMarking_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace art_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::art_msgs::LaneMarking_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::art_msgs::LaneMarking_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::art_msgs::LaneMarking_<ContainerAllocator> > {
  static const char* value() 
  {
    return "39a90d328b8d3f3a2f63e9f13330afca";
  }

  static const char* value(const  ::art_msgs::LaneMarking_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x39a90d328b8d3f3aULL;
  static const uint64_t static_value2 = 0x2f63e9f13330afcaULL;
};

template<class ContainerAllocator>
struct DataType< ::art_msgs::LaneMarking_<ContainerAllocator> > {
  static const char* value() 
  {
    return "art_msgs/LaneMarking";
  }

  static const char* value(const  ::art_msgs::LaneMarking_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::art_msgs::LaneMarking_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# Route Network Definition File lane marking\n\
# $Id$\n\
\n\
int16 DOUBLE_YELLOW = 0\n\
int16 SOLID_YELLOW = 1\n\
int16 SOLID_WHITE = 2\n\
int16 BROKEN_WHITE = 3\n\
int16 UNDEFINED = 4\n\
\n\
int16 lane_marking\n\
\n\
";
  }

  static const char* value(const  ::art_msgs::LaneMarking_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::art_msgs::LaneMarking_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::art_msgs::LaneMarking_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.lane_marking);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LaneMarking_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::art_msgs::LaneMarking_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::art_msgs::LaneMarking_<ContainerAllocator> & v) 
  {
    s << indent << "lane_marking: ";
    Printer<int16_t>::stream(s, indent + "  ", v.lane_marking);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ART_MSGS_MESSAGE_LANEMARKING_H

