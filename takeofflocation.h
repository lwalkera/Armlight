/**
 ******************************************************************************
 * @addtogroup UAVObjects LibrePilot UAVObjects
 * @{
 * @addtogroup TakeOffLocation TakeOffLocation
 * @brief TakeOffLocation setting which contains the destination of a ReturnToBase operation
 *
 * Autogenerated files and functions for TakeOffLocation Object
 *
 * @{
 *
 * @file       takeofflocation.h
 *
 * @author     The LibrePilot Project, https://www.librepilot.org, (C) 2017.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 *
 * @brief      Arduino Header of the TakeOffLocation object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: takeofflocation.xml.
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

#ifndef TAKEOFFLOCATION_H
#define TAKEOFFLOCATION_H
#include <stdbool.h>
/* Object constants */
#define TAKEOFFLOCATION_OBJID 0xD292FDCC
#define TAKEOFFLOCATION_ISSINGLEINST 1
#define TAKEOFFLOCATION_ISSETTINGS 1
#define TAKEOFFLOCATION_ISPRIORITY 0
#define TAKEOFFLOCATION_NUMBYTES sizeof(TakeOffLocationData)

/* Field North information */

/* Field East information */

/* Field Down information */

/* Field Mode information */

// Enumeration options for field Mode
typedef enum __attribute__ ((__packed__)) {
    TAKEOFFLOCATION_MODE_ARMINGLOCATION=0,
    TAKEOFFLOCATION_MODE_FIRSTARMINGLOCATION=1,
    TAKEOFFLOCATION_MODE_PRESET=2
} TakeOffLocationModeOptions;

/* Field Status information */

// Enumeration options for field Status
typedef enum __attribute__ ((__packed__)) {
    TAKEOFFLOCATION_STATUS_VALID=0,
    TAKEOFFLOCATION_STATUS_INVALID=1
} TakeOffLocationStatusOptions;




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    float North;
    float East;
    float Down;
    TakeOffLocationModeOptions Mode;
    TakeOffLocationStatusOptions Status;

} __attribute__((packed)) TakeOffLocationDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes
 */
typedef TakeOffLocationDataPacked __attribute__((aligned(4))) TakeOffLocationData;

/*
 * Union to apply the data array to and to use as structured object data
 */
union {
    TakeOffLocationDataPacked data;
    byte arr[TAKEOFFLOCATION_NUMBYTES];
 } TakeOffLocationDataUnion;

#endif // TAKEOFFLOCATION_H

/**
 * @}
 * @}
 */
