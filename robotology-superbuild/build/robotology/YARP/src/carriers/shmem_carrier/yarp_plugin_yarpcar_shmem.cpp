/*
 * Copyright (C) 2006-2020 Istituto Italiano di Tecnologia (IIT)
 * Copyright (C) 2006-2010 RobotCub Consortium
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */

#include <yarp/conf/api.h>
#include <yarp/os/Carriers.h>
#include <yarp/os/SharedLibraryClass.h>
#include <ShmemCarrier.h>

#ifdef YARP_STATIC_PLUGIN
#  define YARP_PLUGIN_IMPORT
#  define YARP_PLUGIN_EXPORT
#else
#  define YARP_PLUGIN_IMPORT YARP_HELPER_DLL_IMPORT
#  define YARP_PLUGIN_EXPORT YARP_HELPER_DLL_EXPORT
#endif


#ifdef YARP_STATIC_PLUGIN
YARP_PLUGIN_EXPORT void add_owned_shmem(const char *owner) {
    yarp::os::Carriers::addCarrierPrototype(new ShmemCarrier);
}
#endif

YARP_DEFINE_SHARED_SUBCLASS(shmem, ShmemCarrier, yarp::os::Carrier)
