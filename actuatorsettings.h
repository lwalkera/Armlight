/**
 ******************************************************************************
 * @addtogroup UAVObjects LibrePilot UAVObjects
 * @{
 * @addtogroup ActuatorSettings ActuatorSettings
 * @brief Settings for the @ref ActuatorModule that controls the channel assignments for the mixer based on AircraftType
 *
 * Autogenerated files and functions for ActuatorSettings Object
 *
 * @{
 *
 * @file       actuatorsettings.h
 *
 * @author     The LibrePilot Project, https://www.librepilot.org, (C) 2017.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 *
 * @brief      Arduino Header of the ActuatorSettings object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: actuatorsettings.xml.
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

#ifndef ACTUATORSETTINGS_H
#define ACTUATORSETTINGS_H
#include <stdbool.h>
/* Object constants */
#define ACTUATORSETTINGS_OBJID 0x70500090
#define ACTUATORSETTINGS_ISSINGLEINST 1
#define ACTUATORSETTINGS_ISSETTINGS 1
#define ACTUATORSETTINGS_ISPRIORITY 0
#define ACTUATORSETTINGS_NUMBYTES sizeof(ActuatorSettingsData)

/* Field BankUpdateFreq information */

// Number of elements for field BankUpdateFreq
#define ACTUATORSETTINGS_BANKUPDATEFREQ_NUMELEM 6

/* Field DShotMode information */

/* Field ChannelMax information */

// Number of elements for field ChannelMax
#define ACTUATORSETTINGS_CHANNELMAX_NUMELEM 12

/* Field ChannelNeutral information */

// Number of elements for field ChannelNeutral
#define ACTUATORSETTINGS_CHANNELNEUTRAL_NUMELEM 12

/* Field ChannelMin information */

// Number of elements for field ChannelMin
#define ACTUATORSETTINGS_CHANNELMIN_NUMELEM 12

/* Field BankMode information */

// Enumeration options for field BankMode
typedef enum __attribute__ ((__packed__)) {
    ACTUATORSETTINGS_BANKMODE_PWM=0,
    ACTUATORSETTINGS_BANKMODE_PWMSYNC=1,
    ACTUATORSETTINGS_BANKMODE_ONESHOT125=2,
    ACTUATORSETTINGS_BANKMODE_ONESHOT42=3,
    ACTUATORSETTINGS_BANKMODE_MULTISHOT=4,
    ACTUATORSETTINGS_BANKMODE_DSHOT=5
} ActuatorSettingsBankModeOptions;

// Number of elements for field BankMode
#define ACTUATORSETTINGS_BANKMODE_NUMELEM 6

/* Field ChannelType information */

// Enumeration options for field ChannelType
typedef enum __attribute__ ((__packed__)) {
    ACTUATORSETTINGS_CHANNELTYPE_PWM=0,
    ACTUATORSETTINGS_CHANNELTYPE_MK=1,
    ACTUATORSETTINGS_CHANNELTYPE_ASTEC4=2,
    ACTUATORSETTINGS_CHANNELTYPE_PWMALARMBUZZER=3,
    ACTUATORSETTINGS_CHANNELTYPE_ARMINGLED=4,
    ACTUATORSETTINGS_CHANNELTYPE_INFOLED=5
} ActuatorSettingsChannelTypeOptions;

// Number of elements for field ChannelType
#define ACTUATORSETTINGS_CHANNELTYPE_NUMELEM 12

/* Field ChannelAddr information */

// Number of elements for field ChannelAddr
#define ACTUATORSETTINGS_CHANNELADDR_NUMELEM 12

/* Field MotorsSpinWhileArmed information */

// Enumeration options for field MotorsSpinWhileArmed
typedef enum __attribute__ ((__packed__)) {
    ACTUATORSETTINGS_MOTORSSPINWHILEARMED_FALSE=0,
    ACTUATORSETTINGS_MOTORSSPINWHILEARMED_TRUE=1
} ActuatorSettingsMotorsSpinWhileArmedOptions;

/* Field LowThrottleZeroAxis information */

// Enumeration options for field LowThrottleZeroAxis
typedef enum __attribute__ ((__packed__)) {
    ACTUATORSETTINGS_LOWTHROTTLEZEROAXIS_FALSE=0,
    ACTUATORSETTINGS_LOWTHROTTLEZEROAXIS_TRUE=1
} ActuatorSettingsLowThrottleZeroAxisOptions;

// Array element names for field LowThrottleZeroAxis
typedef enum {
    ACTUATORSETTINGS_LOWTHROTTLEZEROAXIS_ROLL=0,
    ACTUATORSETTINGS_LOWTHROTTLEZEROAXIS_PITCH=1,
    ACTUATORSETTINGS_LOWTHROTTLEZEROAXIS_YAW=2
} ActuatorSettingsLowThrottleZeroAxisElem;

// Number of elements for field LowThrottleZeroAxis
#define ACTUATORSETTINGS_LOWTHROTTLEZEROAXIS_NUMELEM 3



typedef struct __attribute__ ((__packed__)) {
    ActuatorSettingsLowThrottleZeroAxisOptions Roll;
    ActuatorSettingsLowThrottleZeroAxisOptions Pitch;
    ActuatorSettingsLowThrottleZeroAxisOptions Yaw;
}  ActuatorSettingsLowThrottleZeroAxisData ;
typedef struct __attribute__ ((__packed__)) {
    ActuatorSettingsLowThrottleZeroAxisOptions array[3];
}  ActuatorSettingsLowThrottleZeroAxisDataArray ;
#define ActuatorSettingsLowThrottleZeroAxisToArray( var ) UAVObjectFieldToArray( ActuatorSettingsLowThrottleZeroAxisData, var )


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    uint16_t BankUpdateFreq[6];
    uint16_t DShotMode;
    int16_t ChannelMax[12];
    int16_t ChannelNeutral[12];
    int16_t ChannelMin[12];
    ActuatorSettingsBankModeOptions BankMode[6];
    ActuatorSettingsChannelTypeOptions ChannelType[12];
    uint8_t ChannelAddr[12];
    ActuatorSettingsMotorsSpinWhileArmedOptions MotorsSpinWhileArmed;
    ActuatorSettingsLowThrottleZeroAxisData LowThrottleZeroAxis;

} __attribute__((packed)) ActuatorSettingsDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes
 */
typedef ActuatorSettingsDataPacked __attribute__((aligned(4))) ActuatorSettingsData;

/*
 * Union to apply the data array to and to use as structured object data
 */
union {
    ActuatorSettingsDataPacked data;
    byte arr[ACTUATORSETTINGS_NUMBYTES];
 } ActuatorSettingsDataUnion;

#endif // ACTUATORSETTINGS_H

/**
 * @}
 * @}
 */
