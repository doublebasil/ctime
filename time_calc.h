#ifndef TIME_CALC_H
#define TIME_CALC_H

#include <stdint.h>

typedef struct
{
    uint32_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    uint8_t second;
} DateTime;

DateTime unixToDateTime( uint64_t unixTime );

#endif
