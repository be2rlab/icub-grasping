#!/usr/bin/env bash
xhost +local:

HOST_IP=192.168.1.182

docker run -it --rm  --net=host --ipc=host \
    --env="DISPLAY=$DISPLAY" \
    --env="QT_X11_NO_MITSHM=1" \
    --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" \
    --volume "/dev:/dev" \
    --volume="/home/$USER/icub_ws:/home/root" \
    -e ROS_IP=${HOST_IP} \
    -e ROS_MASTER_URI=http://${HOST_IP}:11311/ \
    --name myros \
    myros \
    bash
    
