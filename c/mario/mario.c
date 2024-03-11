#include<stdio.h>
#include "csc.h"
int main(void)
{
    int n;
    do
    {
        n = getInt("Height: ");
    }
    while(n<1 || n>8);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<n;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("#");
        }
        printf("\n");
    }
}