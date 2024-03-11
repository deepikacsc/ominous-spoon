#include <stdio.h>
#include "csc.h"
int main(void)
{
    long x = getLong("x: ");
    long y = getLong("y: ");

    double z = (double) x /(double) y;
    printf("%.20f\n",z);
}
