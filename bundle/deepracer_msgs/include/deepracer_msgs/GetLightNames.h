// Generated by gencpp from file deepracer_msgs/GetLightNames.msg
// DO NOT EDIT!


#ifndef DEEPRACER_MSGS_MESSAGE_GETLIGHTNAMES_H
#define DEEPRACER_MSGS_MESSAGE_GETLIGHTNAMES_H

#include <ros/service_traits.h>


#include <deepracer_msgs/GetLightNamesRequest.h>
#include <deepracer_msgs/GetLightNamesResponse.h>


namespace deepracer_msgs
{

struct GetLightNames
{

typedef GetLightNamesRequest Request;
typedef GetLightNamesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetLightNames
} // namespace deepracer_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::deepracer_msgs::GetLightNames > {
  static const char* value()
  {
    return "6dff1e71fe0fb6f3d275724e4c746d5e";
  }

  static const char* value(const ::deepracer_msgs::GetLightNames&) { return value(); }
};

template<>
struct DataType< ::deepracer_msgs::GetLightNames > {
  static const char* value()
  {
    return "deepracer_msgs/GetLightNames";
  }

  static const char* value(const ::deepracer_msgs::GetLightNames&) { return value(); }
};


// service_traits::MD5Sum< ::deepracer_msgs::GetLightNamesRequest> should match 
// service_traits::MD5Sum< ::deepracer_msgs::GetLightNames > 
template<>
struct MD5Sum< ::deepracer_msgs::GetLightNamesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::deepracer_msgs::GetLightNames >::value();
  }
  static const char* value(const ::deepracer_msgs::GetLightNamesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::deepracer_msgs::GetLightNamesRequest> should match 
// service_traits::DataType< ::deepracer_msgs::GetLightNames > 
template<>
struct DataType< ::deepracer_msgs::GetLightNamesRequest>
{
  static const char* value()
  {
    return DataType< ::deepracer_msgs::GetLightNames >::value();
  }
  static const char* value(const ::deepracer_msgs::GetLightNamesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::deepracer_msgs::GetLightNamesResponse> should match 
// service_traits::MD5Sum< ::deepracer_msgs::GetLightNames > 
template<>
struct MD5Sum< ::deepracer_msgs::GetLightNamesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::deepracer_msgs::GetLightNames >::value();
  }
  static const char* value(const ::deepracer_msgs::GetLightNamesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::deepracer_msgs::GetLightNamesResponse> should match 
// service_traits::DataType< ::deepracer_msgs::GetLightNames > 
template<>
struct DataType< ::deepracer_msgs::GetLightNamesResponse>
{
  static const char* value()
  {
    return DataType< ::deepracer_msgs::GetLightNames >::value();
  }
  static const char* value(const ::deepracer_msgs::GetLightNamesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DEEPRACER_MSGS_MESSAGE_GETLIGHTNAMES_H