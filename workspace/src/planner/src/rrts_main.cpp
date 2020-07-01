#include "ros/ros.h"
#include "geometry_msgs/Pose.h"

int main(int argc, char **argv)
{
	ros::init(argc, argv, "rrts_main");
	ros::NodeHandle n;
	ros::Publisher pub = n.advertise<geometry_msgs::Pose>("/planner1/traj1",1000);

	ros::Rate loop_rate(1);
	double c_x=0.22,c_y=0.22,c_z=0.22;

	for (int t = 0; t<20; t++){
	geometry_msgs::Pose pos;
	pos.position.x=c_x+t/3;
	pos.position.y=c_y+t/3;
	pos.position.z=c_z+t/3;

	ROS_INFO("Move to position:\n"
		 "cordinates x=%f y=%f z=%f\n", 
		pos.position.x, pos.position.y, pos.position.z);

	pub.publish(pos);
	loop_rate.sleep();
	}
	ros::spinOnce();
	return 0;
}
