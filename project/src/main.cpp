// ## How to run?
//
// ```
// $ gazebo /icub-grasping/project/scenes/demo_day.world
// $ yarprobotinterface --context simCartesianControl
// $ iKinCartesianSolver --context simCartesianControl --part left_arm
// $ iKinCartesianSolver --context simCartesianControl --part right_arm
// ```
//

#include "project.h"

class CtrlModule : public yarp::os::RFModule
{
protected:
  // yarp::os::RpcServer left_arm_rpc_port;
  // yarp::os::RpcServer right_arm_rpc_port;
  yarp::os::Port left_arm_port;
  // yarp::os::Port right_arm_port;
  // yarp::os::Port head_port;

  LeftArmThread left_arm_thr;
  RightArmThread right_arm_thr;

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
    left_arm_port.open("/left_arm_goal");

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

    yarp::os::Bottle pose; // [x y z  i j k theta]
    pose.clear();
    left_arm_port.read(pose);

    // parse bottle msg
    // and log it
    for (int i = 0; i < 7; ++i)
    {
      yarp::os::Value value = pose.get(i);
      if (value.isDouble())
      {
        if (i < 3)
        {
          xd[i] = value.asDouble();
        }
        else
        {
          od[i - 3] = value.asDouble();
        }
      }
    }

    // set command as a goal for Cartesian Controller
    left_arm_thr.setGoal(xd, od);

    // RPC server
    // TODO Was changed in mind yet. Implement it for manual 
    // cartesian control

    // printf("Waiting for a message...\n");
    // yarp::os::Bottle cmd;
    // yarp::os::Bottle response;
    // left_arm_rpc_port.read(cmd);  // cmd is [x y z  i j k theta]

    // // TODO Add check for data types while parsing
    // // TODO Add check if init values or if commadn was resieved
    // // TODO don't need blocked read?
    // // parse command
    // yarp::sig::Vector xd;
    // yarp::sig::Vector od;

    // for (int i = 0; i < 4; ++i) {
    //   od[i] = cmd.get(i + 3).asDouble();
    //   if (i < 3) {
    //     xd[i] = cmd.get(i).asDouble();
    //   }
    // }

    // // set command as a goal for Cartesian Controller
    // left_arm_thr.setGoal(xd, od);

    // //response.addString("[ok]");
    // //response.append(cmd);
    // //left_arm_rpc_port.reply(response);

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
