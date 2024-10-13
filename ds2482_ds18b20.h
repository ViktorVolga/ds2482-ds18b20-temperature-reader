#ifndef DS2482_DS18b20
#define DS2482_DS18b20
#include <linux/module.h>
#include <linux/init.h>
#include <linux/slab.h>
#include <linux/i2c.h>
#include <linux/delay.h>

#include <linux/w1.h>

/*
    DS18B0 commands 
*/
#define DS18b20_WRITE_DATA_IN_ROM       0x4EH
#define DS18b20_READ_DATA_FROM_ROM      0xbEH
#define DS18b20_COPY_DATA_ROM_TO_E2     0x48H
#define DS18b20_COMMAND_READ_SERIAL     0x33H /*used if only one sensor on line*/
#define DS18b20_COMMAND_MATCH_SERIAL    0x55H
#define DS18b20_COMMAND_SEARCH_SERIAL   0xF0H
#define DS18b20_COMMAND_SEARCH_ALLARM   0xECH

/*configuration_data*/
#define DS2482_i2c_BUS                  2
#define DS2482_i2c_ADDRESS              0x18
#define MY_DEVICE_NAM                   "DS18B0_DS18b20_TEMPERATURE_READER"








#endif DS2482_DS18b20