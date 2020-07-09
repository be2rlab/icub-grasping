// ## How to run?
//
// ```
// $ yarpserver 
// $ gazebo /icub-grasping/project/scenes/demo_day.world
// $ yarpview --name /lview01
// $ yarpview --name /rview01
// $ yarprobotinterface --context simCartesianControl
// $ iKinCartesianSolver --context simCartesianControl --part left_arm
// $ iKinCartesianSolver --context simCartesianControl --part right_arm
// $ /icub-grasping/project/build/bin/demo_day_july
// $ python3 /icub-grasping/project/scripts/yarp_vision_connector.py
// ```
//

#include "project.h"

class CtrlModule : public yarp::os::RFModule
{
protected:
  yarp::os::BufferedPort<yarp::os::Bottle> left_arm_port;
  // yarp::os::BufferedPort<yarp::os::Bottle> right_arm_port;
  // yarp::os::BufferedPort<yarp::os::Bottle> head_port;

  LeftArmThread left_arm_thr;
  RightArmThread right_arm_thr; // here it used just for move right arm away from a camera

  double period;

public:
  CtrlModule()
  {
    yInfo() << "[CtrlModule] Started";
  }

  ~CtrlModule()
  {
    yInfo() << "[CtrlModule] Finished";
  }

  virtual bool configure(yarp::os::ResourceFinder &rf)
  {
    //left_arm_rpc_port.open(LEFT_ARM_PORT_NAME);
    left_arm_port.open("/left_arm_goal_read");

    // retrieve command line options
    period = rf.check("period", yarp::os::Value(CTRL_THREAD_PER)).asDouble();

    // set the thread period in [s]
    left_arm_thr.setPeriod(period);
    right_arm_thr.setPeriod(period);

    return left_arm_thr.start() && right_arm_thr.start();
  }

  virtual bool close()
  {
    left_arm_thr.stop();
    right_arm_thr.stop();
    return true;
  }

  virtual double getPeriod()
  {
    return period;
  }

  virtual bool updateModule()
  {
    yarp::sig::Vector xd;
    yarp::sig::Vector od;
    xd.resize(3);
    od.resize(4);

    // [x y z  i j k theta]
    yarp::os::Bottle* pose = left_arm_port.read(false);

    if (pose != NULL) {
      cout << "I got pose and it is " << pose->toString() << endl;

      // parse bottle msg
      for (int i = 0; i < 7; ++i)
      {
        yarp::os::Value value = pose->get(i);
        if (value.isDouble())
        {
          if (i < 3)
          {
            xd[i] = value.asDouble();
            // cout << xd[i] << endl;
          }
          else
          {
            //od[i - 3] = value.asDouble();   // don't use orientation now
          }
        }
      }
      // set command as a goal for Cartesian Controller
      left_arm_thr.setGoal(xd, od);
    } 
 
    return true;
  }
};

int main(int argc, char *argv[])
{
  yarp::os::Network yarp;
  if (!yarp.checkNetwork())
  {
    yError() << "YARP doesn't seem to be available";
    return EXIT_FAILURE;
  }
  yInfo() << "[main] YARP network is working";

  yarp::os::ResourceFinder rf;

  // TODO set configs using file
  
  // rf.setDefaultContext("demo_day_1");
  // rf.setDefaultConfigFile("config.ini");
  // rf.configure(argc, argv);

  // std::string planner_name = rf.find("planner_name").asString();
  // double k = rf.find("k").asDouble();

  CtrlModule mod;
  int status = mod.runModule(rf);

  return status;
}
