#!/usr/bin/env bash

alias irun='/home/kika/icub_ws/icub-grasping/docker/simulator/icub_custom/run_icub.bash'
alias iexec='/home/kika/icub_ws/icub-grasping/docker/simulator/icub_custom/exec_icub.bash'
alias icd='cd /home/kika/icub_ws/icub-grasping/'

gnome-terminal --tab -- sh -c "irun; source /icub-grasping/env.bash; yarpserver"
gnome-terminal --tab -- sh -c "iexec; gazebo /icub-grasping/project/scenes/demo_day.world"

echo "Waiting for 5 seconds..."
sleep 5

gnome-terminal --tab -- sh -c "iexec; yarprobotinterface --context simCartesianControl"
gnome-terminal --tab -- sh -c "iexec; iKinCartesianSolver --context simCartesianControl --part left_arm"

echo "Waiting for 1 second..."
sleep 1

gnome-terminal --tab -- sh -c "yarpview --name /l"
gnome-terminal --tab -- sh -c "yarpview --name /r"

echo "Waiting for 1 second..."
sleep 1

gnome-terminal --tab -- sh -c "yarp connect /icubSim/cam/left /l"
gnome-terminal --tab -- sh -c "yarp connect /icubSim/cam/right /r"


gnome-terminal --tab -- sh -c "iexec; cd /icub-grasping/project/build/bin/; ./tutorial_cartesian-interface"

