/*
 * Copyright (C) 2006-2020 Istituto Italiano di Tecnologia (IIT)
 * Copyright (C) 2006-2010 RobotCub Consortium
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */

#include <yarp/conf/api.h>
#include <yarp/os/SharedLibraryClass.h>
#include <yarp/dev/Drivers.h>
#include <VirtualAnalogWrapper.h>

#ifdef YARP_STATIC_PLUGIN
#  define YARP_PLUGIN_IMPORT
#  define YARP_PLUGIN_EXPORT
#else
#  define YARP_PLUGIN_IMPORT YARP_HELPER_DLL_IMPORT
#  define YARP_PLUGIN_EXPORT YARP_HELPER_DLL_EXPORT
#endif

#ifdef YARP_STATIC_PLUGIN
YARP_PLUGIN_EXPORT void add_owned_virtualAnalogServer(const char *owner) {
    yarp::dev::DriverCreator *factory =
        new yarp::dev::DriverCreatorOf<VirtualAnalogWrapper>("virtualAnalogServer",
                "virtualAnalogServer",
                "VirtualAnalogWrapper");
    yarp::dev::Drivers::factory().add(factory); // hand factory over to YARP
}
#endif

YARP_DEFINE_SHARED_SUBCLASS(virtualAnalogServer, VirtualAnalogWrapper, yarp::dev::DeviceDriver)
