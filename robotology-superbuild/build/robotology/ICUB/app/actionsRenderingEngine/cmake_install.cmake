# Install script for directory: /icub-grasping/robotology-superbuild/robotology/ICUB/app/actionsRenderingEngine

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/contexts/actionsRenderingEngine" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/actionsRenderingEngine/conf/config.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/actionsRenderingEngine/conf/exploration_poses.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/actionsRenderingEngine/conf/grasp_model_left.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/actionsRenderingEngine/conf/grasp_model_right.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/actionsRenderingEngine/conf/hand_sequences.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/actionsRenderingEngine/conf/kinematic_offsets.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/actionsRenderingEngine/conf/network.ini"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/contexts/actionsRenderingEngine/sim" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/actionsRenderingEngine/conf/sim/config.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/actionsRenderingEngine/conf/sim/grasp_model_left.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/actionsRenderingEngine/conf/sim/grasp_model_right.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/actionsRenderingEngine/conf/sim/hand_sequences.ini"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/contexts/actionsRenderingEngine/actions/left" TYPE FILE FILES "/icub-grasping/robotology-superbuild/robotology/ICUB/app/actionsRenderingEngine/actions/left/README.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/contexts/actionsRenderingEngine/actions/right" TYPE FILE FILES "/icub-grasping/robotology-superbuild/robotology/ICUB/app/actionsRenderingEngine/actions/right/README.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/templates/applications" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/actionsRenderingEngine/scripts/actionsRenderingEngine.xml.template"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/actionsRenderingEngine/scripts/actionsRenderingEngineSim.xml.template"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/actionsRenderingEngine/scripts/actionsRenderingEngineWithOPC.xml.template"
    )
endif()

