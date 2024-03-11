#include <stdio.h>
#include <stdbool.h>
#include "csc.h"

bool checksum(long n);

int main(void)
{
    long n = getLong("Card Number: ");
    int sum = 0;
    int r = 0;
    int i = 1;

    if (checksum(n))
    {
        for (i = 1; n >= 99; i++)
        {
            r = n % 10;
            n = n / 10;
        }
        if (n >= 40 && n <= 49)
        {
            printf("VISA\n");
        }
        else if (n >=51 && n<= 55)
        {
            printf("MASTERCARD\n");
        }
        else if (n==34 || n==37)
        {
            printf("AMERICAN EXPRESS\n");
        }
        else
        {
            printf("VALID\n");
        }
        
    }
    else
    {
        printf("Invalid\n");
    }
}

bool checksum(long n)
{
    int sum = 0;
    for (int i = 1; n >= 1; i++)
    {
        int r = n % 10;
        n = n / 10;

        if (i % 2 == 0)
        {
            r *= 2;
            if (r > 9)
            {
                int x = r % 10;
                int y = r / 10;
                r = x + y;
            }
            sum += r;
        }
        else
        {
            sum += r;
        }
    }
    if (sum % 10 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
