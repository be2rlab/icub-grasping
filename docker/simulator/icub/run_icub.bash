#!/usr/bin/env bash

xhost +local:

# setup this IP manualy to use ROS
# add it to /root/.config/yarp/yarp.conf too
HOST_IP=192.168.1.182

docker run -it --rm --privileged --net=host --ipc=host \
    --volume=/tmp/.X11-unix:/tmp/.X11-unix \
    --device=/dev/dri:/dev/dri \
    --env="DISPLAY=$DISPLAY" \
    --volume /home/$USER:/root/$USER \
    -e ROS_IP=${HOST_IP} \
    -e ROS_MASTER_URI=http://${HOST_IP}:11311/ \
    --name myicub_tdd \
    myicub_tdd \
    bash
