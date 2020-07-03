/*
 * Copyright (C) 2006-2020 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */

#ifndef YARP_CONFIG_NUMERIC_H
#define YARP_CONFIG_NUMERIC_H

#define YARP_HAS_SYS_TYPES_H

#if defined(YARP_HAS_SYS_TYPES_H)
# include <sys/types.h>
#endif

#include <cstddef>
#include <cstdint>
#include <cfloat>
#include <cinttypes>
#if defined (_MSC_VER)
# include <BaseTsd.h>
#endif

/* #undef YARP_BIG_ENDIAN */
#define YARP_LITTLE_ENDIAN

#define YARP_HAS_FLOAT128_T
#define YARP_FLOAT32_IS_IEC559 1
#define YARP_FLOAT64_IS_IEC559 1
#define YARP_FLOAT128_IS_IEC559 1

// Ensure that float32_t, float64_t, and float128_t are not defined by some
// other header, included before this one.
#if defined(float32_t)
# undef float32_t
#endif
#if defined(float64_t)
# undef float64_t
#endif
#if defined(float128_t)
# undef float128_t
#endif


namespace yarp {
namespace conf {

typedef float float32_t;
typedef double float64_t;
typedef std::int32_t vocab32_t;
#if defined(YARP_HAS_FLOAT128_T)
typedef long double float128_t;
#endif

#if defined (_MSC_VER)
typedef ::SSIZE_T ssize_t;
#else
typedef ::ssize_t ssize_t;
#endif

} // namespace conf
} // namespace yarp


#define YARP_FLT_EXP_DIG 3
#define YARP_DBL_EXP_DIG 4
#define YARP_LDBL_EXP_DIG 5


#ifndef YARP_NO_DEPRECATED // since YARP 3.0.0
#include <yarp/conf/api.h> // For YARP_DEPRECATED_TYPEDEF_MSG
YARP_DEPRECATED_TYPEDEF_MSG("Use std::int8_t instead") std::int8_t YARP_INT8;
YARP_DEPRECATED_TYPEDEF_MSG("Use std::int16_t instead") std::int16_t YARP_INT16;
YARP_DEPRECATED_TYPEDEF_MSG("Use std::int32_t instead") std::int32_t YARP_INT32;
YARP_DEPRECATED_TYPEDEF_MSG("Use std::int64_t instead") std::int64_t YARP_INT64;
YARP_DEPRECATED_TYPEDEF_MSG("Use yarp::conf::float32_t instead") yarp::conf::float32_t YARP_FLOAT32;
YARP_DEPRECATED_TYPEDEF_MSG("Use yarp::conf::float64_t instead") yarp::conf::float64_t YARP_FLOAT64;
YARP_DEPRECATED_TYPEDEF_MSG("Use yarp::conf::ssize_t instead") yarp::conf::ssize_t YARP_SSIZE_T;
#define YARP_INT32_FMT PRId32
#define YARP_INT64_FMT PRId64
#endif // YARP_NO_DEPRECATED


#endif
