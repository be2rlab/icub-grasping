# Install script for directory: /icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/contexts/skinGui" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinManAll.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinManAllPlusFoot.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinManAllPlusLegs.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinManArms.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinManForearms.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinManGui.glade"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinManGui.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinManLeft.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinManLowerBody.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinManRight.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinManSim.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinManTorso.ini"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/contexts/skinGui/positions" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/positions/left_arm_mesh.txt"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/positions/left_forearm_V2.txt"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/positions/left_forearm_mesh.txt"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/positions/left_forearm_nomesh.txt"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/positions/left_hand_V2_1.txt"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/positions/right_arm_mesh.txt"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/positions/right_forearm_V2.txt"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/positions/right_forearm_mesh.txt"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/positions/right_forearm_nomesh.txt"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/positions/right_hand_V2_1.txt"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/positions/torso.txt"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/contexts/skinGui/skinGui" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/left_arm.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/left_arm_V2.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/left_arm_external.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/left_arm_internal.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/left_arm_lower.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/left_arm_upper.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/left_foot.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/left_forearm.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/left_forearm_V2.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/left_forearm_lower.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/left_forearm_upper.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/left_hand.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/left_hand_R1.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/left_hand_V1_3.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/left_hand_V2.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/left_hand_V2_1.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/left_leg_lower.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/left_leg_upper.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/palm.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/posfet_quad.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/right_arm.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/right_arm_V2.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/right_arm_external.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/right_arm_internal.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/right_arm_lower.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/right_arm_upper.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/right_foot.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/right_forearm.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/right_forearm_V2.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/right_forearm_lower.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/right_forearm_upper.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/right_hand.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/right_hand_R1.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/right_hand_V1_3.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/right_hand_V2.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/right_hand_V2_1.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/right_leg_lower.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/right_leg_upper.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/torso.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/torso_left_bottom.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/torso_left_top.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/torso_right_bottom.ini"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/conf/skinGui/torso_right_top.ini"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/iCub/templates/applications" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/scripts/skinGuiAll.xml.template"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/scripts/skinGuiArms.xml.template"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/scripts/skinGuiForearms.xml.template"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/scripts/skinGuiLeftArm.xml.template"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/scripts/skinGuiLeftArmNoComp.xml.template"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/scripts/skinGuiLowerBody.template"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/scripts/skinGuiPosfetPalm.xml.template"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/scripts/skinGuiRightArm.xml.template"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/scripts/skinGuiRightArmNoComp.xml.template"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/scripts/skinGuiSim.xml.template"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/scripts/skinGuiTorso.xml.template"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/scripts/skinGuiV1_3.xml.template"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/scripts/skinGuiV2_0.xml.template"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/app/skinGui/scripts/skinGuiV2_0_foot.xml.template"
    )
endif()

