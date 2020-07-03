# Copyright (C) 2020  iCub Facility, Istituto Italiano di Tecnologia
# Authors: Nicolò Genesio<nicolo.genesio@iit.it>
# CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT

include(YCMEPHelper)
include(FindOrBuildPackage)

find_or_build_package(YARP QUIET)
find_or_build_package(blockTest QUIET)

ycm_ep_helper(blocktest-yarp-plugins TYPE GIT
              STYLE GITHUB
              REPOSITORY robotology/blocktest-yarp-plugins.git
              TAG master
              COMPONENT core
              FOLDER robotology
              DEPENDS YARP
                      blockTest)
