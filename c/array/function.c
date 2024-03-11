#include<stdio.h>
#include "csc.h"
float average(int length, int array[]);

int main(void)
{
    const int n=3;
    int score[n];
    
    for(int i=0;i<n;i++)
    {
        score[i]=getInt("Enter score:");
    }
    printf("Average: %f\n",average(n,score));
    return 0;
}
float average(int length,int array[])
{
    int sum=0;
    for(int i=0;i<length;i++)
    {
        sum += array[i];
    }
    return sum/(float)length;
}
