/**
 ******************************************************************************
 * @addtogroup UAVObjects LibrePilot UAVObjects
 * @{
 * @addtogroup SystemIdentState SystemIdentState
 * @brief Used for logging PID tuning.
 *
 * Autogenerated files and functions for SystemIdentState Object
 *
 * @{
 *
 * @file       systemidentstate.h
 *
 * @author     The LibrePilot Project, https://www.librepilot.org, (C) 2017.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 *
 * @brief      Arduino Header of the SystemIdentState object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: systemidentstate.xml.
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef SYSTEMIDENTSTATE_H
#define SYSTEMIDENTSTATE_H
#include <stdbool.h>
/* Object constants */
#define SYSTEMIDENTSTATE_OBJID 0x7D742224
#define SYSTEMIDENTSTATE_ISSINGLEINST 1
#define SYSTEMIDENTSTATE_ISSETTINGS 0
#define SYSTEMIDENTSTATE_ISPRIORITY 0
#define SYSTEMIDENTSTATE_NUMBYTES sizeof(SystemIdentStateData)

/* Field Tau information */

/* Field Beta information */

// Array element names for field Beta
typedef enum {
    SYSTEMIDENTSTATE_BETA_ROLL=0,
    SYSTEMIDENTSTATE_BETA_PITCH=1,
    SYSTEMIDENTSTATE_BETA_YAW=2
} SystemIdentStateBetaElem;

// Number of elements for field Beta
#define SYSTEMIDENTSTATE_BETA_NUMELEM 3

/* Field Bias information */

// Array element names for field Bias
typedef enum {
    SYSTEMIDENTSTATE_BIAS_ROLL=0,
    SYSTEMIDENTSTATE_BIAS_PITCH=1,
    SYSTEMIDENTSTATE_BIAS_YAW=2
} SystemIdentStateBiasElem;

// Number of elements for field Bias
#define SYSTEMIDENTSTATE_BIAS_NUMELEM 3

/* Field Noise information */

// Array element names for field Noise
typedef enum {
    SYSTEMIDENTSTATE_NOISE_ROLL=0,
    SYSTEMIDENTSTATE_NOISE_PITCH=1,
    SYSTEMIDENTSTATE_NOISE_YAW=2
} SystemIdentStateNoiseElem;

// Number of elements for field Noise
#define SYSTEMIDENTSTATE_NOISE_NUMELEM 3

/* Field Period information */

/* Field NumAfPredicts information */

/* Field NumSpilledPts information */

/* Field HoverThrottle information */

/* Field GyroReadTimeAverage information */

/* Field Complete information */

// Enumeration options for field Complete
typedef enum __attribute__ ((__packed__)) {
    SYSTEMIDENTSTATE_COMPLETE_FALSE=0,
    SYSTEMIDENTSTATE_COMPLETE_TRUE=1
} SystemIdentStateCompleteOptions;



typedef struct __attribute__ ((__packed__)) {
    float Roll;
    float Pitch;
    float Yaw;
}  SystemIdentStateBetaData ;
typedef struct __attribute__ ((__packed__)) {
    float array[3];
}  SystemIdentStateBetaDataArray ;
#define SystemIdentStateBetaToArray( var ) UAVObjectFieldToArray( SystemIdentStateBetaData, var )

typedef struct __attribute__ ((__packed__)) {
    float Roll;
    float Pitch;
    float Yaw;
}  SystemIdentStateBiasData ;
typedef struct __attribute__ ((__packed__)) {
    float array[3];
}  SystemIdentStateBiasDataArray ;
#define SystemIdentStateBiasToArray( var ) UAVObjectFieldToArray( SystemIdentStateBiasData, var )

typedef struct __attribute__ ((__packed__)) {
    float Roll;
    float Pitch;
    float Yaw;
}  SystemIdentStateNoiseData ;
typedef struct __attribute__ ((__packed__)) {
    float array[3];
}  SystemIdentStateNoiseDataArray ;
#define SystemIdentStateNoiseToArray( var ) UAVObjectFieldToArray( SystemIdentStateNoiseData, var )


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    float Tau;
    SystemIdentStateBetaData Beta;
    SystemIdentStateBiasData Bias;
    SystemIdentStateNoiseData Noise;
    float Period;
    uint32_t NumAfPredicts;
    uint32_t NumSpilledPts;
    float HoverThrottle;
    float GyroReadTimeAverage;
    SystemIdentStateCompleteOptions Complete;

} __attribute__((packed)) SystemIdentStateDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes
 */
typedef SystemIdentStateDataPacked __attribute__((aligned(4))) SystemIdentStateData;

/*
 * Union to apply the data array to and to use as structured object data
 */
union {
    SystemIdentStateDataPacked data;
    byte arr[SYSTEMIDENTSTATE_NUMBYTES];
 } SystemIdentStateDataUnion;

#endif // SYSTEMIDENTSTATE_H

/**
 * @}
 * @}
 */
