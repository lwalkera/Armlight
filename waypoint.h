/**
 ******************************************************************************
 * @addtogroup UAVObjects LibrePilot UAVObjects
 * @{
 * @addtogroup Waypoint Waypoint
 * @brief A waypoint the aircraft can try and hit.  Used by the @ref PathPlanner module
 *
 * Autogenerated files and functions for Waypoint Object
 *
 * @{
 *
 * @file       waypoint.h
 *
 * @author     The LibrePilot Project, https://www.librepilot.org, (C) 2017.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 *
 * @brief      Arduino Header of the Waypoint object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: waypoint.xml.
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

#ifndef WAYPOINT_H
#define WAYPOINT_H
#include <stdbool.h>
/* Object constants */
#define WAYPOINT_OBJID 0xD23852DC
#define WAYPOINT_ISSINGLEINST 0
#define WAYPOINT_ISSETTINGS 0
#define WAYPOINT_ISPRIORITY 0
#define WAYPOINT_NUMBYTES sizeof(WaypointData)

/* Field Position information */

// Array element names for field Position
typedef enum {
    WAYPOINT_POSITION_NORTH=0,
    WAYPOINT_POSITION_EAST=1,
    WAYPOINT_POSITION_DOWN=2
} WaypointPositionElem;

// Number of elements for field Position
#define WAYPOINT_POSITION_NUMELEM 3

/* Field Velocity information */

/* Field Action information */



typedef struct __attribute__ ((__packed__)) {
    float North;
    float East;
    float Down;
}  WaypointPositionData ;
typedef struct __attribute__ ((__packed__)) {
    float array[3];
}  WaypointPositionDataArray ;
#define WaypointPositionToArray( var ) UAVObjectFieldToArray( WaypointPositionData, var )


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    WaypointPositionData Position;
    float Velocity;
    uint8_t Action;

} __attribute__((packed)) WaypointDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes
 */
typedef WaypointDataPacked __attribute__((aligned(4))) WaypointData;

/*
 * Union to apply the data array to and to use as structured object data
 */
union {
    WaypointDataPacked data;
    byte arr[WAYPOINT_NUMBYTES];
 } WaypointDataUnion;

#endif // WAYPOINT_H

/**
 * @}
 * @}
 */
