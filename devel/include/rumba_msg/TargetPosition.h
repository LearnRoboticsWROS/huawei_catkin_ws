// Generated by gencpp from file rumba_msg/TargetPosition.msg
// DO NOT EDIT!


#ifndef RUMBA_MSG_MESSAGE_TARGETPOSITION_H
#define RUMBA_MSG_MESSAGE_TARGETPOSITION_H

#include <ros/service_traits.h>


#include <rumba_msg/TargetPositionRequest.h>
#include <rumba_msg/TargetPositionResponse.h>


namespace rumba_msg
{

struct TargetPosition
{

typedef TargetPositionRequest Request;
typedef TargetPositionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct TargetPosition
} // namespace rumba_msg


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rumba_msg::TargetPosition > {
  static const char* value()
  {
    return "dd76aff00a72b33e8d77950fa07ebddf";
  }

  static const char* value(const ::rumba_msg::TargetPosition&) { return value(); }
};

template<>
struct DataType< ::rumba_msg::TargetPosition > {
  static const char* value()
  {
    return "rumba_msg/TargetPosition";
  }

  static const char* value(const ::rumba_msg::TargetPosition&) { return value(); }
};


// service_traits::MD5Sum< ::rumba_msg::TargetPositionRequest> should match
// service_traits::MD5Sum< ::rumba_msg::TargetPosition >
template<>
struct MD5Sum< ::rumba_msg::TargetPositionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rumba_msg::TargetPosition >::value();
  }
  static const char* value(const ::rumba_msg::TargetPositionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rumba_msg::TargetPositionRequest> should match
// service_traits::DataType< ::rumba_msg::TargetPosition >
template<>
struct DataType< ::rumba_msg::TargetPositionRequest>
{
  static const char* value()
  {
    return DataType< ::rumba_msg::TargetPosition >::value();
  }
  static const char* value(const ::rumba_msg::TargetPositionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rumba_msg::TargetPositionResponse> should match
// service_traits::MD5Sum< ::rumba_msg::TargetPosition >
template<>
struct MD5Sum< ::rumba_msg::TargetPositionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rumba_msg::TargetPosition >::value();
  }
  static const char* value(const ::rumba_msg::TargetPositionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rumba_msg::TargetPositionResponse> should match
// service_traits::DataType< ::rumba_msg::TargetPosition >
template<>
struct DataType< ::rumba_msg::TargetPositionResponse>
{
  static const char* value()
  {
    return DataType< ::rumba_msg::TargetPosition >::value();
  }
  static const char* value(const ::rumba_msg::TargetPositionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // RUMBA_MSG_MESSAGE_TARGETPOSITION_H
