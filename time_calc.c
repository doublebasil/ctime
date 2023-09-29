#include "time_calc.h"
#include <stdint.h>

#define UNIX_YEAR_2022      ( 1640995200 )
// 1972 was a leap year, so has an extra day

DateTime unixToDateTime( uint64_t unixTime )
{
    DateTime output;
    output.year = 2002;
    return output;
}
