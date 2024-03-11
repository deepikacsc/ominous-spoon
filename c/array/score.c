#include<stdio.h>
#include "csc.h"
int main(void)
{
    int score[3];
    score[0]=getInt("Enter score: ");
    score[1]=getInt("Enter score: ");
    score[2]=getInt("Enter score: ");
    printf("Average: %f\n",(score[0]+score[1]+score[2])/3.0);
    return 0;
}