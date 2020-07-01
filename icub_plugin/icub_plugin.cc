#ifndef _ICUB_PLUGIN_HH_
#define _ICUB_PLUGIN_HH_

#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
#include <dart/dart.hpp>

const double default_push_force = 8.0;  // N
const int default_force_duration = 200; // # iterations
const int default_push_duration = 1000;  // # iterations

const double default_endeffector_offset = 0.05;

using namespace dart::common;
using namespace dart::dynamics;
//using namespace dart::simulation;
using namespace dart::math;
namespace gazebo
{
  /// \brief A plugin to control a icub.
  class iCubPlugin : public ModelPlugin
  {
    /// \brief Constructor
    public: iCubPlugin() {}

    /// \brief The load function is called by Gazebo when the plugin is
    /// inserted into simulation
    /// \param[in] _model A pointer to the model that this plugin is
    /// attached to.
    /// \param[in] _sdf A pointer to the plugin's SDF element.

	class Controller
{
public:

  Controller(physics::ModelPtr _model, sdf::ElementPtr _sdf)
    : mManipulator(manipulator)
  {
    // Grab the current joint angles to use them as desired angles
    mQDesired = mManipulator->getPositions();

    // Grab the last body in the manipulator, and use it as an end effector
    mEndEffector = mManipulator->getBodyNode(mManipulator->getNumBodyNodes() - 1);

    // Compute the body frame offset for the end effector
    mOffset = default_endeffector_offset * Eigen::Vector3d::UnitX();

    // Create a target reference frame
    mTarget = std::make_shared<SimpleFrame>(Frame::World(), "target");

    // Place the mTarget SimpleFrame
	mTarget->setTransform(10, 10, 10);

    // Set PD control gains
    mKpPD = 200.0;
    mKdPD = 20.0;

    // Set operational space control gains
    mKpOS = 5.0;
    mKdOS = 0.01;
  }

void setPDForces()
  {
    if(nullptr == mManipulator)
      return;

    // Compute the joint position error
    Eigen::VectorXd q = mManipulator->getPositions();
    Eigen::VectorXd dq = mManipulator->getVelocities();
    q += dq * mManipulator->getTimeStep();

    Eigen::VectorXd q_err = mQDesired - q;

    // Compute the joint velocity error
    Eigen::VectorXd dq_err = -dq;

    // Compute the joint forces needed to compensate for Coriolis forces and
    // gravity
    const Eigen::VectorXd& Cg = mManipulator->getCoriolisAndGravityForces();

    // Compute the desired joint forces
    const Eigen::MatrixXd& M = mManipulator->getMassMatrix();
    mForces = M * (mKpPD * q_err + mKdPD * dq_err) + Cg;

    mManipulator->setForces(mForces);
  }


void setOperationalSpaceForces()
  {
    if(nullptr == mManipulator)
      return;

    const Eigen::MatrixXd& M = mManipulator->getMassMatrix();

    // Compute the Jacobian
    Jacobian J = mEndEffector->getWorldJacobian(mOffset);
    // Compute the pseudo-inverse of the Jacobian
    Eigen::MatrixXd pinv_J = J.transpose() * (J * J.transpose()
                           + 0.0025 * Eigen::Matrix6d::Identity()).inverse();

    // Compute the Jacobian time derivative
    Jacobian dJ = mEndEffector->getJacobianClassicDeriv(mOffset);
    // Comptue the pseudo-inverse of the Jacobian time derivative
    Eigen::MatrixXd pinv_dJ = dJ.transpose() * (dJ * dJ.transpose()
                            + 0.0025 * Eigen::Matrix6d::Identity()).inverse();

    // Compute the linear error
    Eigen::Vector6d e;
    e.tail<3>() = mTarget->getWorldTransform().translation()
                - mEndEffector->getWorldTransform() * mOffset;

    // Compute the angular error
    Eigen::AngleAxisd aa(mTarget->getTransform(mEndEffector).linear());
    e.head<3>() = aa.angle() * aa.axis();

    // Compute the time derivative of the error
    Eigen::Vector6d de = -mEndEffector->getSpatialVelocity(
          mOffset, mTarget.get(), Frame::World());

    // Compute the forces needed to compensate for Coriolis forces and gravity
    const Eigen::VectorXd& Cg = mManipulator->getCoriolisAndGravityForces();

    // Turn the control gains into matrix form
    Eigen::Matrix6d Kp = mKpOS * Eigen::Matrix6d::Identity();

    std::size_t dofs = mManipulator->getNumDofs();
    Eigen::MatrixXd Kd = mKdOS * Eigen::MatrixXd::Identity(dofs, dofs);

    // Compute the joint forces needed to exert the desired workspace force
    Eigen::Vector6d fDesired = Eigen::Vector6d::Zero();
    fDesired[3] = default_push_force;
    Eigen::VectorXd f = J.transpose() * fDesired;

    // Compute the control forces
    Eigen::VectorXd dq = mManipulator->getVelocities();
    mForces = M * (pinv_J * Kp * de + pinv_dJ * Kp * e)
              - Kd * dq + Kd * pinv_J * Kp * e + Cg + f;

    mManipulator->setForces(mForces);
  }
protected:

  /// The manipulator Skeleton that we will be controlling
  SkeletonPtr mManipulator;

  /// The target pose for the controller
  SimpleFramePtr mTarget;

  /// End effector for the manipulator
  BodyNodePtr mEndEffector;

  /// Desired joint positions when not applying the operational space controller
  Eigen::VectorXd mQDesired;

  /// The offset of the end effector from the body origin of the last BodyNode
  /// in the manipulator
  Eigen::Vector3d mOffset;

  /// Control gains for the proportional error terms in the PD controller
  double mKpPD;

  /// Control gains for the derivative error terms in the PD controller
  double mKdPD;

  /// Control gains for the proportional error terms in the operational
  /// space controller
  double mKpOS;

  /// Control gains for the derivative error terms in the operational space
  /// controller
  double mKdOS;

  /// Joint forces for the manipulator (output of the Controller)
  Eigen::VectorXd mForces;
};

    public: virtual void Load(physics::ModelPtr _model, sdf::ElementPtr _sdf)
    {
      // Just output a message for now
      std::cerr << "\nThe iCub plugin is attach to model[" <<
        _model->GetName() << "]\n";
    }
  };

  // Tell Gazebo about this plugin, so that Gazebo can call Load on this plugin.
  GZ_REGISTER_MODEL_PLUGIN(iCubPlugin)
}
#endif
