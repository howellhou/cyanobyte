/*
* Copyright (C) 2019 Google Inc.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* Auto-generated file for ADS1015 v0.1.0.
* Generated from peripherals/ADS1015.yaml using Cyanobyte Codegen v0.1.0
* Class for ADS1015
* Texas Instruments Analog-Digital Converter

*/

#ifndef _ADS1015_H_
#define _ADS1015_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "i2c.h"


/*
 * Valid values for Set the channel to read

 */
enum Channel {
    CHANNEL_CHANNEL_1 = 0, // Channel 1
    CHANNEL_CHANNEL_2 = 1, // Channel 2
    CHANNEL_CHANNEL_3 = 2, // Channel 3
    CHANNEL_CHANNEL_4 = 3 // Channel 4
};
typedef enum Channel Channel_t;
/*
 * Valid values for Set the operating mode

 */
enum DeviceOperatingMode {
    DEVICEOPERATINGMODE_CONTINUOUS_CONVERSION = 0, // Continuous Conversion
    DEVICEOPERATINGMODE_SINGLE_SHOT = 1 // Single-shot or power-down state
};
typedef enum DeviceOperatingMode DeviceOperatingMode_t;
/*
 * Valid values for Setup programmable gain

 */
enum ProgrammableGain {
    PROGRAMMABLEGAIN_PGA0_256 = 5, // Plus/minus 0.256V
    PROGRAMMABLEGAIN_PGA0_512 = 4, // Plus/minus 0.512V
    PROGRAMMABLEGAIN_PGA1_024V = 3, // Plus/minus 1.024V
    PROGRAMMABLEGAIN_PGA2_048V = 2, // Plus/minus 2.048V
    PROGRAMMABLEGAIN_PGA4_096V = 1, // Plus/minus 4.096V
    PROGRAMMABLEGAIN_PGA6_144V = 0 // Plus/minus 6.144V
};
typedef enum ProgrammableGain ProgrammableGain_t;
/*
 * Valid values for Setup sample rate for reading analog voltage

 */
enum SampleRate {
    SAMPLERATE_HZ128 = 0, // 128 samples/second
    SAMPLERATE_HZ1600 = 4, // 1600 samples/second
    SAMPLERATE_HZ2400 = 5, // 2400 samples/second
    SAMPLERATE_HZ250 = 1, // 250 samples/second
    SAMPLERATE_HZ3300 = 6, // 3300 samples/second
    SAMPLERATE_HZ490 = 2, // 490 samples/second
    SAMPLERATE_HZ920 = 3 // 920 samples/second
};
typedef enum SampleRate SampleRate_t;

int ads1015_init(char* bus_name);
void ads1015_terminate();
/**
  * Describes the specifics of the sensing implementation

*/
int ads1015_readConfig(uint16_t* val);

/**
 * Describes the specifics of the sensing implementation

 */
int ads1015_writeConfig(uint16_t* data);/**
  * Conversion register contains the result of the last conversion

*/
int ads1015_readConversion(uint16_t* val);


/**
 * This bit controls the operating mode

 */
int ads1015_set_deviceoperatingmode(uint16_t* data);
/**
 * This sets the programmable gain for reading analog voltage

 */
int ads1015_set_programmablegain(uint16_t* data);
/**
 * This sets the samples-per-second value

 */
int ads1015_set_samplerate(uint16_t* data);

/**
 * Reads the analog voltage in Volts

*/
void ads1015_analog_read(short* val, char channel);


#endif