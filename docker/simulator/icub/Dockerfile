FROM robotology/robotology-tdd
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
    cmake-curses-gui \
    build-essential \
    && rm -rf /var/lib/apt/lists/*

# Environment configuration
ENV UBUNTU_CODENAME bionic

# Timezone Configuration
ENV TZ=Europe/Moscow
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone


RUN sh -c 'echo "deb http://packages.ros.org/ros/ubuntu bionic main" > /etc/apt/sources.list.d/ros-latest.list'
RUN curl -sSL 'http://keyserver.ubuntu.com/pks/lookup?op=get&search=0xC1CF6E31E6BADE8868B172B4F42ED6FBAB17C654' | apt-key add -
RUN apt-get update && apt-get install -y ros-melodic-ros-base 

RUN apt-get update && apt-get install -y \\
          qtbase5-dev qtdeclarative5-dev qtmultimedia5-dev \
          qml-module-qtquick2 qml-module-qtquick-window2 \
          qml-module-qtmultimedia qml-module-qtquick-dialogs \
          qml-module-qtquick-controls qml-module-qt-labs-folderlistmodel \
          qml-module-qt-labs-settings \
          libqcustomplot-dev \
          libgraphviz-dev \
          libjpeg-dev \
          libgstreamer1.0-dev libgstreamer-plugins-base1.0-dev \
          gstreamer1.0-plugins-base \
          gstreamer1.0-plugins-good \
          gstreamer1.0-plugins-bad \
          gstreamer1.0-libav
          
#RUN cd /projects/robotology-superbuild/build && cmake .. && ccmake ../ && make -j4 && make install


