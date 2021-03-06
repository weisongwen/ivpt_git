#ifndef NODE_EXAMPLE_TALKER_H
#define NODE_EXAMPLE_TALKER_H

// ROS includes.
#include "ros/ros.h"
#include "ros/time.h"

// Custom message includes. Auto-generated from msg/ directory.
#include "/home/raul/ivpt/sensor/src/ivsensorgps/include/ivsensorgps/gpsparse.h"

namespace ivsensorgps
{

class gpsparse
{
public:
  //! Constructor.
  gpsparse(ros::NodeHandle nh);

  //! Timer callback for publishing message.
  void timerCallback(const ros::TimerEvent& event);

private:
  //! The timer variable used to go to callback function at specified rate.
  ros::Timer timer_;

  //! Message publisher.
  ros::Publisher pub_;


  //! The actual message.
  std::string message_;

  //! The first integer to use in addition.
  int a_;

  //! The second integer to use in addition.
  int b_;
};

}

#endif // NODE_EXAMPLE_TALKER_H
