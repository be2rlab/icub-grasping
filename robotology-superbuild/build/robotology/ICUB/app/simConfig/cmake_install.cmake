# Install script for directory: /icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/contexts/simConfig" TYPE FILE FILES "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/simulator.ini")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/contexts/simConfig" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/conf/Sim_camera.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/conf/Sim_head.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/conf/Sim_joints.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/conf/Sim_left_arm.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/conf/Sim_left_leg.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/conf/Sim_right_arm.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/conf/Sim_right_leg.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/conf/Sim_torso.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/conf/Video.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/conf/iCub_parts_activation.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/conf/ode_params.ini"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/contexts/simConfig/data" TYPE FILE FILES "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/data/robotcub.bmp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/contexts/simConfig/data/model" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/data/model/bottomEyeLid.ms3d"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/data/model/iCub_Head.ms3d"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/data/model/topEyeLid.ms3d"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/contexts/simConfig/data/texture" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/data/texture/brushed-metal.raw"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/data/texture/crate.raw"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/data/texture/face.raw"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/data/texture/metal2.raw"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/contexts/simConfig/data/texture/skybox" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/data/texture/skybox/bk.raw"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/data/texture/skybox/ft.raw"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/data/texture/skybox/lt.raw"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/data/texture/skybox/rt.raw"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/data/texture/skybox/up.raw"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/contexts/simConfig/models" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/models/IMAGE.bmp"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/models/a.bmp"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/models/blueTexture.bmp"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/models/hip.x"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/models/icosphere.x"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/models/leftFoot.x"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/models/leftPalm.x"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/models/leftUpperArm.x"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/models/leftUpperLeg.x"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/models/lowerArm.x"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/models/lowerLeg.x"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/models/rightFoot.x"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/models/rightPalm.x"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/models/rightUpperArm.x"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/models/rightUpperLeg.x"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/models/torso.x"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/templates/applications" TYPE FILE FILES "/icub-grasping/robotology-superbuild/robotology/ICUB/app/simConfig/scripts/icubsim.xml.template")
endif()

