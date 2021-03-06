/**
 ******************************************************************************
 * @addtogroup UAVObjects LibrePilot UAVObjects
 * @{
 * @addtogroup FirmwareIAPObj FirmwareIAPObj
 * @brief Queries board for SN, model, revision, and sends reset command
 *
 * Autogenerated files and functions for FirmwareIAPObj Object
 *
 * @{
 *
 * @file       firmwareiapobj.h
 *
 * @author     The LibrePilot Project, https://www.librepilot.org, (C) 2017.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 *
 * @brief      Arduino Header of the FirmwareIAPObj object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: firmwareiapobj.xml.
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

#ifndef FIRMWAREIAPOBJ_H
#define FIRMWAREIAPOBJ_H
#include <stdbool.h>
/* Object constants */
#define FIRMWAREIAPOBJ_OBJID 0x8328F252
#define FIRMWAREIAPOBJ_ISSINGLEINST 1
#define FIRMWAREIAPOBJ_ISSETTINGS 0
#define FIRMWAREIAPOBJ_ISPRIORITY 1
#define FIRMWAREIAPOBJ_NUMBYTES sizeof(FirmwareIAPObjData)

/* Field crc information */

/* Field Command information */

/* Field BoardRevision information */

/* Field Description information */

// Number of elements for field Description
#define FIRMWAREIAPOBJ_DESCRIPTION_NUMELEM 100

/* Field CPUSerial information */

// Number of elements for field CPUSerial
#define FIRMWAREIAPOBJ_CPUSERIAL_NUMELEM 12

/* Field BoardType information */

/* Field BootloaderRevision information */

/* Field ArmReset information */




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    uint32_t crc;
    uint16_t Command;
    uint16_t BoardRevision;
    uint8_t Description[100];
    uint8_t CPUSerial[12];
    uint8_t BoardType;
    uint8_t BootloaderRevision;
    uint8_t ArmReset;

} __attribute__((packed)) FirmwareIAPObjDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes
 */
typedef FirmwareIAPObjDataPacked __attribute__((aligned(4))) FirmwareIAPObjData;

/*
 * Union to apply the data array to and to use as structured object data
 */
union {
    FirmwareIAPObjDataPacked data;
    byte arr[FIRMWAREIAPOBJ_NUMBYTES];
 } FirmwareIAPObjDataUnion;

#endif // FIRMWAREIAPOBJ_H

/**
 * @}
 * @}
 */
