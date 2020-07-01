#include "ros/ros.h"
#include "geometry_msgs/Pose.h"

void cordinates(const geometry_msgs::Pose& cord){
	ROS_INFO("Got cordinates:\n"
		"new_cord: x=%f,y=%f,z=%f\n", cord.position.x, cord.position.y, cord.position.z);
	return;
}

int main(int argc, char **argv) {
	ros::init(argc, argv, "solver_main");
	ros::NodeHandle n;
	ros::Subscriber sub=n.subscribe("/planner1/traj1",1000,cordinates);
	ros::spin();
	return 0;
}

