FROM osrf/ros:melodic-desktop-full-bionic
LABEL maintainer="kaartemov@gmail.com"

RUN apt-get update && apt-get upgrade -y && apt-get install -y \
    apt-utils \
    net-tools \
    mesa-utils \
    gnupg2 \
    wget \
    curl \
    git \
    mc \
    nano \
    cmake \
    build-essential \
    && rm -rf /var/lib/apt/lists/*

ENV UBUNTU_CODENAME bionic

ENV TZ=Europe/Moscow
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

RUN sh -c 'echo "deb http://packages.ros.org/ros/ubuntu `lsb_release -sc` main" > /etc/apt/sources.list.d/ros-latest.list'
RUN wget http://packages.ros.org/ros.key -O - | apt-key add -

RUN apt-get update && apt-get upgrade -y && apt-get install -y python-catkin-tools
RUN apt-get install -y ros-melodic-usb-cam

RUN echo "source "/opt/ros/melodic/setup.bash" >> /root/.bashrc

COPY ./ros_entrypoint.sh /ros_entrypoint.sh
RUN chmod +x /ros_entrypoint.sh