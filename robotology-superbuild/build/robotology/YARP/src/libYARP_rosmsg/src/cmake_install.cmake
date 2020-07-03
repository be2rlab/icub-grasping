# Install script for directory: /icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_rosmsg/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/icub-grasping/robotology-superbuild/build/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_native-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/rosmsg" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/TickTime.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/TickDuration.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_std_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/rosmsg/std_msgs" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/Bool.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/Byte.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/ByteMultiArray.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/Char.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/ColorRGBA.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/Duration.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/Empty.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/Float32.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/Float32MultiArray.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/Float64.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/Float64MultiArray.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/Header.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/Int16.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/Int16MultiArray.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/Int32.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/Int32MultiArray.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/Int64.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/Int64MultiArray.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/Int8.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/Int8MultiArray.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/MultiArrayDimension.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/MultiArrayLayout.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/String.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/Time.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/UInt16.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/UInt16MultiArray.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/UInt32.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/UInt32MultiArray.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/UInt64.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/UInt64MultiArray.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/UInt8.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/std_msgs/UInt8MultiArray.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_actionlib_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/rosmsg/actionlib_msgs" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/actionlib_msgs/GoalID.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/actionlib_msgs/GoalStatus.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/actionlib_msgs/GoalStatusArray.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_diagnostic_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/rosmsg/diagnostic_msgs" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/diagnostic_msgs/DiagnosticArray.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/diagnostic_msgs/DiagnosticStatus.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/diagnostic_msgs/KeyValue.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/diagnostic_msgs/AddDiagnostics.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/diagnostic_msgs/AddDiagnosticsReply.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/diagnostic_msgs/SelfTest.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/diagnostic_msgs/SelfTestReply.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_geometry_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/rosmsg/geometry_msgs" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/Accel.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/AccelStamped.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/AccelWithCovariance.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/AccelWithCovarianceStamped.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/Inertia.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/InertiaStamped.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/Point.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/Point32.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/PointStamped.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/Polygon.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/PolygonStamped.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/Pose.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/Pose2D.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/PoseArray.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/PoseStamped.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/PoseWithCovariance.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/PoseWithCovarianceStamped.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/Quaternion.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/QuaternionStamped.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/Transform.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/TransformStamped.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/Twist.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/TwistStamped.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/TwistWithCovariance.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/TwistWithCovarianceStamped.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/Vector3.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/Vector3Stamped.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/Wrench.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/geometry_msgs/WrenchStamped.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_nav_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/rosmsg/nav_msgs" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/nav_msgs/GridCells.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/nav_msgs/MapMetaData.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/nav_msgs/OccupancyGrid.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/nav_msgs/Odometry.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/nav_msgs/Path.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/nav_msgs/GetMap.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/nav_msgs/GetMapReply.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/nav_msgs/GetPlan.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/nav_msgs/GetPlanReply.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/nav_msgs/SetMap.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/nav_msgs/SetMapReply.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_sensor_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/rosmsg/sensor_msgs" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/BatteryState.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/CameraInfo.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/ChannelFloat32.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/CompressedImage.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/FluidPressure.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/Illuminance.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/Image.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/Imu.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/JointState.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/Joy.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/JoyFeedback.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/JoyFeedbackArray.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/LaserEcho.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/LaserScan.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/MagneticField.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/MultiDOFJointState.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/MultiEchoLaserScan.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/NavSatFix.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/NavSatStatus.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/PointCloud.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/PointCloud2.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/PointField.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/Range.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/RegionOfInterest.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/RelativeHumidity.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/Temperature.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/TimeReference.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/SetCameraInfo.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/sensor_msgs/SetCameraInfoReply.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_shape_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/rosmsg/shape_msgs" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/shape_msgs/Mesh.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/shape_msgs/MeshTriangle.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/shape_msgs/Plane.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/shape_msgs/SolidPrimitive.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_stereo_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/rosmsg/stereo_msgs" TYPE FILE FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/stereo_msgs/DisparityImage.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_trajectory_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/rosmsg/trajectory_msgs" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/trajectory_msgs/JointTrajectory.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/trajectory_msgs/JointTrajectoryPoint.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/trajectory_msgs/MultiDOFJointTrajectory.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/trajectory_msgs/MultiDOFJointTrajectoryPoint.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_visualization_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/rosmsg/visualization_msgs" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/visualization_msgs/ImageMarker.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/visualization_msgs/InteractiveMarker.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/visualization_msgs/InteractiveMarkerControl.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/visualization_msgs/InteractiveMarkerFeedback.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/visualization_msgs/InteractiveMarkerInit.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/visualization_msgs/InteractiveMarkerPose.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/visualization_msgs/InteractiveMarkerUpdate.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/visualization_msgs/Marker.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/visualization_msgs/MarkerArray.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/visualization_msgs/MenuEntry.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_tf-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/rosmsg/tf" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/tf/tfMessage.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/tf/FrameGraph.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/tf/FrameGraphReply.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg_tf2_msgs-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/rosmsg/tf2_msgs" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/tf2_msgs/TF2Error.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/tf2_msgs/TFMessage.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/tf2_msgs/FrameGraph.h"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/tf2_msgs/FrameGraphReply.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_rosmsg-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/rosmsg/impl" TYPE FILE FILES "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_rosmsg/src/yarp/rosmsg/impl/yarpRosHelper.h")
endif()

