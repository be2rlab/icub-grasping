#include <project.h>

LeftArmThread::LeftArmThread() {}
LeftArmThread::~LeftArmThread() {}

bool LeftArmThread::threadInit()
{
  yInfo() << "[LeftArmThread] Put Cartesian Controller options";

  option.put("device", "cartesiancontrollerclient");
  option.put("remote", "/icubSim/cartesianController/left_arm");
  option.put("local", "/cartesian_client/left_arm");

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

  // initial
  xd[0] = -0.3;
  xd[1] = -0.2;
  xd[2] = -0.2;

  od[0] = 0.0;
  od[1] = 0.0;
  od[2] = 1.0;
  od[3] = M_PI;


  yInfo() << "Thread started successfully";
  t = t0 = t1 = yarp::os::Time::now();

  return true;
}

void LeftArmThread::run()
{
  t = yarp::os::Time::now();

  //generateTargetCreepy();

  arm->goToPose(xd, od);

  // printStatus(); // TODO make status in separate structure
}

void LeftArmThread::threadRelease()
{
  // stop and clear
  arm->stopControl();
  arm->restoreContext(startup_context_id);
  client.close();
}

void LeftArmThread::generateTargetCreepy()
{
  // just from sample
  xd[0] = -0.3;
  xd[1] = -0.1 + 0.1 * cos(2.0 * M_PI * 0.1 * (t - t0));
  xd[2] = +0.1 + 0.1 * sin(2.0 * M_PI * 0.1 * (t - t0));

  od[0] = 0.0;
  od[1] = 0.0;
  od[2] = 1.0;
  od[3] = M_PI;
}

void LeftArmThread::setGoal(const yarp::sig::Vector &x, const yarp::sig::Vector &o)
{
  for (int i = 0; i < 4; ++i)
  {
    od[i] = o[i];
    if (i < 3)
    {
      xd[i] = x[i];
    }
  }
}

void LeftArmThread::limits()
{
  int axis = 0; // pitch joint
  double min, max;

  // we keep the lower limit
  arm->getLimits(axis, &min, &max);
  arm->setLimits(axis, min, MAX_TORSO_PITCH);
}

void LeftArmThread::printStatus()
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

bool LeftArmThread::waitConnection(double timeout)
{

  yInfo() << "[LeftArmThread] Waiting for connection...";

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

  yInfo() << "[LeftArmThread] Connected";

  return true;
}
