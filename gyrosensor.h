/**
 ******************************************************************************
 * @addtogroup UAVObjects LibrePilot UAVObjects
 * @{
 * @addtogroup GyroSensor GyroSensor
 * @brief Calibrated sensor data from 3 axis gyroscope in deg/s.
 *
 * Autogenerated files and functions for GyroSensor Object
 *
 * @{
 *
 * @file       gyrosensor.h
 *
 * @author     The LibrePilot Project, https://www.librepilot.org, (C) 2017.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 *
 * @brief      Arduino Header of the GyroSensor object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: gyrosensor.xml.
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

#ifndef GYROSENSOR_H
#define GYROSENSOR_H
#include <stdbool.h>
/* Object constants */
#define GYROSENSOR_OBJID 0xADC3A85C
#define GYROSENSOR_ISSINGLEINST 1
#define GYROSENSOR_ISSETTINGS 0
#define GYROSENSOR_ISPRIORITY 0
#define GYROSENSOR_NUMBYTES sizeof(GyroSensorData)

/* Field x information */

/* Field y information */

/* Field z information */

/* Field temperature information */

/* Field SensorReadTimestamp information */




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    float x;
    float y;
    float z;
    float temperature;
    uint32_t SensorReadTimestamp;

} __attribute__((packed)) GyroSensorDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes
 */
typedef GyroSensorDataPacked __attribute__((aligned(4))) GyroSensorData;

/*
 * Union to apply the data array to and to use as structured object data
 */
union {
    GyroSensorDataPacked data;
    byte arr[GYROSENSOR_NUMBYTES];
 } GyroSensorDataUnion;

#endif // GYROSENSOR_H

/**
 * @}
 * @}
 */
