#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "csc.h"
struct car
{
    int year;
    char mode1[10];
    char plate[15];
    int odometer;
    float engine_size;
};
int main(void)
{
    struct car *mycar = malloc(sizeof(struct car)) ;
    if(mycar==NULL)
    {
        return 1;
    }
    mycar->year=2011;
    strcpy(mycar->mode1,"csc");
    strcpy(mycar->plate,"TN 36 N 9090");
    mycar->odometer=23000;
    mycar->engine_size=20.3456;
    printf("\tCAR DETAILS\n");
    printf("__________________________________________\n");
    printf("Car Mode1 :%d\n",mycar->year);
    printf("Car house :%s\n",mycar->mode1);
    printf("Car Number :%s\n",mycar->plate);
    printf("Car Capacity :%3.f\n",mycar->engine_size);
    printf("___________________________________________\n");
    free(mycar);
}
