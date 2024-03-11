#include<stdio.h>
#include "csc.h"
int main(void)
{
    char student[2][20];
    printf("Name: ");
    scanf("%s", student[0]);
    printf("House: ");
    scanf("%s", student[1]);
    printf("%s is in %s\n",student[0],student[1]);
}
