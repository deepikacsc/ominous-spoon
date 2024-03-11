#include <stdio.h>
#include "csc.h"
#include <string.h>

int main(void)
{
    long n = getLong("Card Number: ");
    int sum = 0;
    int r = 0;
    long firstnumber;
    long second;
    firstnumber = n;
    second = n;
    long a=n;
    int count=0;
    
    for (int i = 1; n >= 1; i++)
    {
        r = n % 10;
        n /= 10;

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
        printf("VALID\n");
        {
            while(firstnumber >= 10)
            {
                firstnumber = firstnumber / 10;
            }
            //printf("firstnumber: %ld\n",firstnumber);
            while(second >= 100)
            {
                second = second / 100;
            }
           printf("firstTwo: %ld\n",second);
           while(a>0)
           {
                a=a/10;
                count++;
                printf("%i\n",count);
           }
           if(firstnumber==4 && (count==16 || count==13))
           {
                printf("VISA\n");
           }
           
           else if((second >=51 && second <=55) && count == 16)
           {
            printf("MASTERCARD\n");
           }
           else if(count==15 && (second == 34 || second == 37))
           {
            printf("AMERICAN EXPRESS\n");
           }
           else
           {
            printf("VALID\n");
           }
        }
        
    }
    else
    {
        printf("INVALID\n");
    }
} 


