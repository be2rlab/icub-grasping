#!/usr/bin/env bash

xhost +local:

docker run -it --rm --privileged --net=host --ipc=host \
    --volume=/tmp/.X11-unix:/tmp/.X11-unix \
    --device=/dev/dri:/dev/dri \
    --env="DISPLAY=$DISPLAY" \
    --volume /home/$USER:/root/$USER \
    --name tdd \
    robotology/robotology-tdd \
    bash

