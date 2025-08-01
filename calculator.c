#include <stdio.h>
#include "cs50.h"

/*
gcc -o file file.c cs50.c
.\file
*/

int main (void) 
{
    long x = get_long("x: ");
    long y = get_long("y: ");

    double z = (double) x / (double) y;

    printf("%.20f\n", z);
    // %li doesn't work because on windows a long is 4 bytes
}