#!/usr/bin/env bash

export Matlab_ROOT_DIR=/matlab
export PATH=${PATH}:/matlab/bin

export GAZEBO_MODEL_PATH=${GAZEBO_MODEL_PATH}:/icub-grasping/project/scenes/models

# init default world with icub

#Furthermore, if you are working with Simulink controllers, it is necessary to sincronize Gazebo with Simulink by running Gazebo with the option -slibgazebo_yarp_clock.so.
#Final command to run in the terminal is something like this: gazebo -slibgazebo_yarp_clock.so nameOfYourWorld. For seesaw demo, it is also required to start Gazebo in "pause" mode, and therefore final command will be: gazebo -slibgazebo_yarp_clock.so icub_seesaw_world -u.

#source /usr/share/gazebo/setup.sh
#export GAZEBO_RESOURCE_PATH=$GAZEBO_RESOURCE_PATH:/icub-grasping/robotology-superbuild/robotology/icub-gazebo-wholebody/worlds
#export GAZEBO_RESOURCE_PATH=$GAZEBO_RESOURCE_PATH:/icub-grasping/robotology-superbuild/robotology/icub-gazebo/worlds

#export YARP_DATA_DIRS=${YARP_DATA_DIRS}:/icub-grasping/robotology-superbuild/build/install/share/yarp

