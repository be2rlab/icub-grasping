# Install script for directory: /icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/icub-grasping/robotology-superbuild/build/robotology/ICUB/lib/liblearningMachine.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/iCub/learningMachine" TYPE FILE FILES
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/DatasetRecorder.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/DummyLearner.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/FactoryT.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/FixedRangeScaler.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/IFixedSizeLearner.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/IFixedSizeTransformer.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/IMachineLearner.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/IScaler.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/ITransformer.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/LinearGPRLearner.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/LinearScaler.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/LSSVMLearner.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/MachineCatalogue.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/MachinePortable.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/Math.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/Normalizer.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/PortableT.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/Prediction.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/RandomFeature.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/RLSLearner.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/ScaleTransformer.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/Serialization.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/SparseSpectrumFeature.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/Standardizer.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/TransformerCatalogue.h"
    "/icub-grasping/robotology-superbuild/robotology/ICUB/src/libraries/learningMachine/include/iCub/learningMachine/TransformerPortable.h"
    )
endif()

