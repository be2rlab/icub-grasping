#include <project.h>

RightArmThread::RightArmThread() {}
RightArmThread::~RightArmThread() {}

bool RightArmThread::threadInit()
{
  yInfo() << "[RightArmThread] Put Cartesian Controller options";

  option.put("device", "cartesiancontrollerclient");
  option.put("remote", "/icubSim/cartesianController/right_arm");
  option.put("local", "/cartesian_client/right_arm");

  waitConnection();

  client.view(arm); // get an interface to cartesian control driver

  arm->storeContext(&startup_context_id); // cart. control context id [int]
  arm->setTrajTime(1.0);                  // the init duration of the trajectory

  arm->getDOF(curDof);

  // block torso movings
  newDof = curDof;
  newDof[0] = 0;
  newDof[1] = 0;
  newDof[2] = 0;

  arm->setDOF(newDof, curDof); // set new dof configuration

  limits(); // set limits

  // goal vars prefer
  xd.resize(3);
  od.resize(4);

  yInfo() << "Thread started successfully";
  t = t0 = t1 = yarp::os::Time::now();

  return true;
}

void RightArmThread::run()
{
  t = yarp::os::Time::now();

  generateTargetCreepy();
  arm->goToPose(xd, od);

  printStatus(); // TODO make status in separate structure
}

void RightArmThread::threadRelease()
{
  // stop and clear
  arm->stopControl();
  arm->restoreContext(startup_context_id);
  client.close();
}

void RightArmThread::generateTargetCreepy()
{
  // just from sample
  xd[0] = -0.3;
  xd[1] = +0.1 + 0.1 * cos(2.0 * M_PI * 0.1 * (t - t0));
  xd[2] = -0.1 + 0.1 * sin(2.0 * M_PI * 0.1 * (t - t0) + M_PI / 2);

  od[0] = 0.0;
  od[1] = 0.0;
  od[2] = 1.0;
  od[3] = M_PI;
}

void RightArmThread::limits()
{
  int axis = 0; // pitch joint
  double min, max;

  // we keep the lower limit
  arm->getLimits(axis, &min, &max);
  arm->setLimits(axis, min, MAX_TORSO_PITCH);
}

void RightArmThread::printStatus()
{
  if (t - t1 >= PRINT_STATUS_PER)
  {
    yarp::sig::Vector x, o, xdhat, odhat, qdhat;

    // we get the current arm pose in the
    // operational space
    if (!arm->getPose(x, o))
      return;

    // we get the final destination of the arm
    // as found by the solver: it differs a bit
    // from the desired pose according to the tolerances
    if (!arm->getDesired(xdhat, odhat, qdhat))
      return;

    double e_x = yarp::math::norm(xdhat - x);
    double e_o = yarp::math::norm(odhat - o);

    yInfo() << "+++++++++";
    yInfo() << "norm(e_x)   [m] = " << e_x;
    yInfo() << "norm(e_o) [rad] = " << e_o;
    yInfo() << "---------";

    t1 = t;
  }
}

bool RightArmThread::waitConnection(double timeout)
{

  yInfo() << "[RightArmThread] Waiting for connection...";

  bool ok = false;
  double t0 = yarp::os::Time::now();

  while (yarp::os::Time::now() - t0 < timeout)
  {
    if (client.open(option))
    {
      ok = true;
      break;
    }
    yarp::os::Time::delay(1.0);
  }

  if (!ok)
  {
    yError() << "Unable to open the Cartesian Controller";
    return false;
  }

  yInfo() << "[RightArmThread] Connected";

  return true;
}
