/* Note: compile using:
gcc .\main.c .\time_calc.c
*/

#include <stdio.h>
#include <stdint.h>

#include "time_calc.h"

int main( void )
{
    uint64_t unixTime = 1696003297;

    DateTime var;
    var = unixToDateTime(unixTime);

    printf("%d\n", var.year);

    return 0;
}