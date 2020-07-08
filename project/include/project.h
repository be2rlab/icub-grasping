#ifndef H_PROJECT_
#define H_PROJECT_
// TODO override all common methods from parent
// TODO Add head control like a setting-look-vector

#include <cstdlib>
#include <cmath>

#include <yarp/os/Network.h>
#include <yarp/os/RFModule.h>
#include <yarp/os/PeriodicThread.h>
#include <yarp/os/Time.h>
#include <yarp/os/LogStream.h>
#include <yarp/sig/Vector.h>
#include <yarp/math/Math.h>

#include <yarp/dev/Drivers.h>
#include <yarp/dev/CartesianControl.h>
#include <yarp/dev/PolyDriver.h>

#define CTRL_THREAD_PER 0.02 // [s]
#define PRINT_STATUS_PER 1.0 // [s]
#define MAX_TORSO_PITCH 30.0 // [deg]

#define LEFT_ARM_PORT_NAME "/icubSim/left_arm_goal/rpc:i"
#define RIGHT_ARM_PORT_NAME "/icubSim/right_arm_goal/rpc:i"

using namespace std;

class ArmThread : public yarp::os::PeriodicThread
{

protected:
  yarp::dev::PolyDriver client;
  yarp::dev::ICartesianControl *arm;
  yarp::os::Property option;

  yarp::os::BufferedPort<yarp::os::Bottle> cartesian_goal_port;

  yarp::sig::Vector xd;
  yarp::sig::Vector od;

  int startup_context_id;

  double t;
  double t0;
  double t1;

public:
  ArmThread() : yarp::os::PeriodicThread(1.0) {}
  ~ArmThread() {}
  
  void generateTarget();
  void setGoal();
  void limits();
  void printStatus();
};


class LeftArmThread : public ArmThread
{
private:
  yarp::sig::Vector newDof, curDof;

public:
  LeftArmThread();
  ~LeftArmThread();

  bool threadInit();
  void run();
  void threadRelease();

  void generateTargetCreepy();
  void generateTarget();
  void setGoal(const yarp::sig::Vector &x, const yarp::sig::Vector &o);

  void limits();
  void printStatus();
  bool waitConnection(double timeout = 10.0);
};

class RightArmThread : public ArmThread
{
private:
  yarp::sig::Vector newDof, curDof;

public:
  RightArmThread();
  ~RightArmThread();

  bool threadInit();
  void run();
  void threadRelease();

  void generateTargetCreepy();
  void generateTarget();
  void setGoal();

  void limits();
  void printStatus();
  bool waitConnection(double timeout = 10.0);
};

#endif //H_PROJECT_