# Install script for directory: /icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_devx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_dev.so.3.3.2"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_dev.so.3"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "$ORIGIN/:$ORIGIN/../lib:$ORIGIN/../")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib/libYARP_dev.so.3.3.2"
    "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib/libYARP_dev.so.3"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_dev.so.3.3.2"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_dev.so.3"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib:"
           NEW_RPATH "$ORIGIN/:$ORIGIN/../lib:$ORIGIN/../")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_dev-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_dev.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_dev.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_dev.so"
         RPATH "$ORIGIN/:$ORIGIN/../lib:$ORIGIN/../")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib/libYARP_dev.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_dev.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_dev.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_dev.so"
         OLD_RPATH "/icub-grasping/robotology-superbuild/build/robotology/YARP/lib:"
         NEW_RPATH "$ORIGIN/:$ORIGIN/../lib:$ORIGIN/../")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libYARP_dev.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_dev-priv-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/dev/impl" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/impl/FixedSizeBuffersManager.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/impl/FixedSizeBuffersManager-inl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/idl_generated_code/yarp/dev/impl/jointData.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xYARP_dev-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yarp/dev" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/all.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/api.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/AudioBufferSize.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/AudioGrabberInterfaces.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/AudioGrabberVocabs.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/AudioVisualInterfaces.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/CalibratorInterfaces.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/CalibratorVocabs.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/CanBusInterface.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/CartesianControl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/CircularAudioBuffer.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ControlBoardHelper.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ControlBoardHelpers.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ControlBoardInterfaces.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ControlBoardInterfacesImpl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ControlBoardPid.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ControlBoardVocabs.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/DeviceDriver.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/DriverLinkCreator.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/Drivers.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/FrameGrabberControl2.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/FrameGrabberControlImpl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/FrameGrabberInterfaces.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/GPUInterface.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/GazeControl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/GenericVocabs.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IAmplifierControl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IAnalogSensor.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IAudioGrabberSound.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IAudioRender.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IAudioVisualGrabber.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IAudioVisualStream.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IAxisInfo.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IBattery.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ICalibrator.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IControlCalibration.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IControlDebug.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IControlLimits.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IControlLimits2.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IControlMode.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IControlMode2.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ICurrentControl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IEncoders.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IEncodersTimed.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IFrameWriterAudioVisual.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IGenericSensor.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IHapticDevice.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IImpedanceControl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IInteractionMode.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IJoypadController.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IMotor.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IMotorEncoders.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IMultipleWrapper.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IPWMControl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IPidControl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IPositionControl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IPositionControl2.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IPositionDirect.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IPreciselyTimed.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IRGBDSensor.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IRangefinder2D.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IRemoteCalibrator.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IRemoteVariables.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IRobotDescription.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ISerialDevice.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ITorqueControl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IVelocityControl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IVelocityControl2.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IVirtualAnalogSensor.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IVisualParams.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IVisualParamsImpl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IVisualServoing.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IWrapper.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementAmplifierControl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementAxisInfo.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementControlBoardInterfaces.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementControlCalibration.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementControlLimits.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementControlLimits2.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementControlMode.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementControlMode2.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementCurrentControl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementEncoders.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementEncodersTimed.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementImpedanceControl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementInteractionMode.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementMotor.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementMotorEncoders.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementPWMControl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementPidControl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementPositionControl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementPositionControl2.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementPositionDirect.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementRemoteVariables.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementTorqueControl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementVelocityControl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementVelocityControl2.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ImplementVirtualAnalogSensor.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/LaserMeasurementData.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/MultipleAnalogSensorsInterfaces.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/PidEnums.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/PolyDriver.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/PolyDriverDescriptor.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/PolyDriverList.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/RGBDSensorParamParser.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ServiceInterfaces.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IFrameTransform.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IFrameTransformClientControl.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/ILocalization2D.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/IMap2D.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/INavigation2D.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/Map2DLocation.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/Map2DArea.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/MapGrid2D.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/DataSource.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/GenericSensorInterfaces.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/PreciselyTimed.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/SerialInterfaces.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/yarp/dev/Wrapper.h"
    "/icub-grasping/robotology-superbuild/robotology/YARP/src/libYARP_dev/src/idl_generated_code/yarp/dev/audioBufferSizeData.h"
    )
endif()

