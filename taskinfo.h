/**
 ******************************************************************************
 * @addtogroup UAVObjects LibrePilot UAVObjects
 * @{
 * @addtogroup TaskInfo TaskInfo
 * @brief Task information
 *
 * Autogenerated files and functions for TaskInfo Object
 *
 * @{
 *
 * @file       taskinfo.h
 *
 * @author     The LibrePilot Project, https://www.librepilot.org, (C) 2017.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 *
 * @brief      Arduino Header of the TaskInfo object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: taskinfo.xml.
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

#ifndef TASKINFO_H
#define TASKINFO_H
#include <stdbool.h>
/* Object constants */
#define TASKINFO_OBJID 0x19CAADA6
#define TASKINFO_ISSINGLEINST 1
#define TASKINFO_ISSETTINGS 0
#define TASKINFO_ISPRIORITY 0
#define TASKINFO_NUMBYTES sizeof(TaskInfoData)

/* Field StackRemaining information */

// Array element names for field StackRemaining
typedef enum {
    TASKINFO_STACKREMAINING_SYSTEM=0,
    TASKINFO_STACKREMAINING_CALLBACKSCHEDULER0=1,
    TASKINFO_STACKREMAINING_CALLBACKSCHEDULER1=2,
    TASKINFO_STACKREMAINING_CALLBACKSCHEDULER2=3,
    TASKINFO_STACKREMAINING_CALLBACKSCHEDULER3=4,
    TASKINFO_STACKREMAINING_RECEIVER=5,
    TASKINFO_STACKREMAINING_STABILIZATION=6,
    TASKINFO_STACKREMAINING_ACTUATOR=7,
    TASKINFO_STACKREMAINING_SENSORS=8,
    TASKINFO_STACKREMAINING_ATTITUDE=9,
    TASKINFO_STACKREMAINING_ALTITUDE=10,
    TASKINFO_STACKREMAINING_AIRSPEED=11,
    TASKINFO_STACKREMAINING_MAGBARO=12,
    TASKINFO_STACKREMAINING_FLIGHTPLAN=13,
    TASKINFO_STACKREMAINING_TELEMETRYTX=14,
    TASKINFO_STACKREMAINING_TELEMETRYRX=15,
    TASKINFO_STACKREMAINING_RADIOTX=16,
    TASKINFO_STACKREMAINING_RADIORX=17,
    TASKINFO_STACKREMAINING_COM2USBBRIDGE=18,
    TASKINFO_STACKREMAINING_USB2COMBRIDGE=19,
    TASKINFO_STACKREMAINING_GPS=20,
    TASKINFO_STACKREMAINING_OSDGEN=21,
    TASKINFO_STACKREMAINING_UAVOHOTTBRIDGE=22,
    TASKINFO_STACKREMAINING_UAVOMSPBRIDGE=23,
    TASKINFO_STACKREMAINING_UAVOFRSKYSENSORHUBBRIDGE=24,
    TASKINFO_STACKREMAINING_UAVOMAVLINKBRIDGE=25,
    TASKINFO_STACKREMAINING_AUTOTUNE=26
} TaskInfoStackRemainingElem;

// Number of elements for field StackRemaining
#define TASKINFO_STACKREMAINING_NUMELEM 27

/* Field Running information */

// Enumeration options for field Running
typedef enum __attribute__ ((__packed__)) {
    TASKINFO_RUNNING_FALSE=0,
    TASKINFO_RUNNING_TRUE=1
} TaskInfoRunningOptions;

// Array element names for field Running
typedef enum {
    TASKINFO_RUNNING_SYSTEM=0,
    TASKINFO_RUNNING_CALLBACKSCHEDULER0=1,
    TASKINFO_RUNNING_CALLBACKSCHEDULER1=2,
    TASKINFO_RUNNING_CALLBACKSCHEDULER2=3,
    TASKINFO_RUNNING_CALLBACKSCHEDULER3=4,
    TASKINFO_RUNNING_RECEIVER=5,
    TASKINFO_RUNNING_STABILIZATION=6,
    TASKINFO_RUNNING_ACTUATOR=7,
    TASKINFO_RUNNING_SENSORS=8,
    TASKINFO_RUNNING_ATTITUDE=9,
    TASKINFO_RUNNING_ALTITUDE=10,
    TASKINFO_RUNNING_AIRSPEED=11,
    TASKINFO_RUNNING_MAGBARO=12,
    TASKINFO_RUNNING_FLIGHTPLAN=13,
    TASKINFO_RUNNING_TELEMETRYTX=14,
    TASKINFO_RUNNING_TELEMETRYRX=15,
    TASKINFO_RUNNING_RADIOTX=16,
    TASKINFO_RUNNING_RADIORX=17,
    TASKINFO_RUNNING_COM2USBBRIDGE=18,
    TASKINFO_RUNNING_USB2COMBRIDGE=19,
    TASKINFO_RUNNING_GPS=20,
    TASKINFO_RUNNING_OSDGEN=21,
    TASKINFO_RUNNING_UAVOHOTTBRIDGE=22,
    TASKINFO_RUNNING_UAVOMSPBRIDGE=23,
    TASKINFO_RUNNING_UAVOFRSKYSENSORHUBBRIDGE=24,
    TASKINFO_RUNNING_UAVOMAVLINKBRIDGE=25,
    TASKINFO_RUNNING_AUTOTUNE=26
} TaskInfoRunningElem;

// Number of elements for field Running
#define TASKINFO_RUNNING_NUMELEM 27

/* Field RunningTime information */

// Array element names for field RunningTime
typedef enum {
    TASKINFO_RUNNINGTIME_SYSTEM=0,
    TASKINFO_RUNNINGTIME_CALLBACKSCHEDULER0=1,
    TASKINFO_RUNNINGTIME_CALLBACKSCHEDULER1=2,
    TASKINFO_RUNNINGTIME_CALLBACKSCHEDULER2=3,
    TASKINFO_RUNNINGTIME_CALLBACKSCHEDULER3=4,
    TASKINFO_RUNNINGTIME_RECEIVER=5,
    TASKINFO_RUNNINGTIME_STABILIZATION=6,
    TASKINFO_RUNNINGTIME_ACTUATOR=7,
    TASKINFO_RUNNINGTIME_SENSORS=8,
    TASKINFO_RUNNINGTIME_ATTITUDE=9,
    TASKINFO_RUNNINGTIME_ALTITUDE=10,
    TASKINFO_RUNNINGTIME_AIRSPEED=11,
    TASKINFO_RUNNINGTIME_MAGBARO=12,
    TASKINFO_RUNNINGTIME_FLIGHTPLAN=13,
    TASKINFO_RUNNINGTIME_TELEMETRYTX=14,
    TASKINFO_RUNNINGTIME_TELEMETRYRX=15,
    TASKINFO_RUNNINGTIME_RADIOTX=16,
    TASKINFO_RUNNINGTIME_RADIORX=17,
    TASKINFO_RUNNINGTIME_COM2USBBRIDGE=18,
    TASKINFO_RUNNINGTIME_USB2COMBRIDGE=19,
    TASKINFO_RUNNINGTIME_GPS=20,
    TASKINFO_RUNNINGTIME_OSDGEN=21,
    TASKINFO_RUNNINGTIME_UAVOHOTTBRIDGE=22,
    TASKINFO_RUNNINGTIME_UAVOMSPBRIDGE=23,
    TASKINFO_RUNNINGTIME_UAVOFRSKYSENSORHUBBRIDGE=24,
    TASKINFO_RUNNINGTIME_UAVOMAVLINKBRIDGE=25,
    TASKINFO_RUNNINGTIME_AUTOTUNE=26
} TaskInfoRunningTimeElem;

// Number of elements for field RunningTime
#define TASKINFO_RUNNINGTIME_NUMELEM 27



typedef struct __attribute__ ((__packed__)) {
    uint16_t System;
    uint16_t CallbackScheduler0;
    uint16_t CallbackScheduler1;
    uint16_t CallbackScheduler2;
    uint16_t CallbackScheduler3;
    uint16_t Receiver;
    uint16_t Stabilization;
    uint16_t Actuator;
    uint16_t Sensors;
    uint16_t Attitude;
    uint16_t Altitude;
    uint16_t Airspeed;
    uint16_t MagBaro;
    uint16_t FlightPlan;
    uint16_t TelemetryTx;
    uint16_t TelemetryRx;
    uint16_t RadioTx;
    uint16_t RadioRx;
    uint16_t Com2UsbBridge;
    uint16_t Usb2ComBridge;
    uint16_t GPS;
    uint16_t OSDGen;
    uint16_t UAVOHoTTBridge;
    uint16_t UAVOMSPBridge;
    uint16_t UAVOFrskySensorHubBridge;
    uint16_t UAVOMAVLinkBridge;
    uint16_t AutoTune;
}  TaskInfoStackRemainingData ;
typedef struct __attribute__ ((__packed__)) {
    uint16_t array[27];
}  TaskInfoStackRemainingDataArray ;
#define TaskInfoStackRemainingToArray( var ) UAVObjectFieldToArray( TaskInfoStackRemainingData, var )

typedef struct __attribute__ ((__packed__)) {
    TaskInfoRunningOptions System;
    TaskInfoRunningOptions CallbackScheduler0;
    TaskInfoRunningOptions CallbackScheduler1;
    TaskInfoRunningOptions CallbackScheduler2;
    TaskInfoRunningOptions CallbackScheduler3;
    TaskInfoRunningOptions Receiver;
    TaskInfoRunningOptions Stabilization;
    TaskInfoRunningOptions Actuator;
    TaskInfoRunningOptions Sensors;
    TaskInfoRunningOptions Attitude;
    TaskInfoRunningOptions Altitude;
    TaskInfoRunningOptions Airspeed;
    TaskInfoRunningOptions MagBaro;
    TaskInfoRunningOptions FlightPlan;
    TaskInfoRunningOptions TelemetryTx;
    TaskInfoRunningOptions TelemetryRx;
    TaskInfoRunningOptions RadioTx;
    TaskInfoRunningOptions RadioRx;
    TaskInfoRunningOptions Com2UsbBridge;
    TaskInfoRunningOptions Usb2ComBridge;
    TaskInfoRunningOptions GPS;
    TaskInfoRunningOptions OSDGen;
    TaskInfoRunningOptions UAVOHoTTBridge;
    TaskInfoRunningOptions UAVOMSPBridge;
    TaskInfoRunningOptions UAVOFrskySensorHubBridge;
    TaskInfoRunningOptions UAVOMAVLinkBridge;
    TaskInfoRunningOptions AutoTune;
}  TaskInfoRunningData ;
typedef struct __attribute__ ((__packed__)) {
    TaskInfoRunningOptions array[27];
}  TaskInfoRunningDataArray ;
#define TaskInfoRunningToArray( var ) UAVObjectFieldToArray( TaskInfoRunningData, var )

typedef struct __attribute__ ((__packed__)) {
    uint8_t System;
    uint8_t CallbackScheduler0;
    uint8_t CallbackScheduler1;
    uint8_t CallbackScheduler2;
    uint8_t CallbackScheduler3;
    uint8_t Receiver;
    uint8_t Stabilization;
    uint8_t Actuator;
    uint8_t Sensors;
    uint8_t Attitude;
    uint8_t Altitude;
    uint8_t Airspeed;
    uint8_t MagBaro;
    uint8_t FlightPlan;
    uint8_t TelemetryTx;
    uint8_t TelemetryRx;
    uint8_t RadioTx;
    uint8_t RadioRx;
    uint8_t Com2UsbBridge;
    uint8_t Usb2ComBridge;
    uint8_t GPS;
    uint8_t OSDGen;
    uint8_t UAVOHoTTBridge;
    uint8_t UAVOMSPBridge;
    uint8_t UAVOFrskySensorHubBridge;
    uint8_t UAVOMAVLinkBridge;
    uint8_t AutoTune;
}  TaskInfoRunningTimeData ;
typedef struct __attribute__ ((__packed__)) {
    uint8_t array[27];
}  TaskInfoRunningTimeDataArray ;
#define TaskInfoRunningTimeToArray( var ) UAVObjectFieldToArray( TaskInfoRunningTimeData, var )


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    TaskInfoStackRemainingData StackRemaining;
    TaskInfoRunningData Running;
    TaskInfoRunningTimeData RunningTime;

} __attribute__((packed)) TaskInfoDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes
 */
typedef TaskInfoDataPacked __attribute__((aligned(4))) TaskInfoData;

/*
 * Union to apply the data array to and to use as structured object data
 */
union {
    TaskInfoDataPacked data;
    byte arr[TASKINFO_NUMBYTES];
 } TaskInfoDataUnion;

#endif // TASKINFO_H

/**
 * @}
 * @}
 */
