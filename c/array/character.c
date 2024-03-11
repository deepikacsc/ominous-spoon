#include<stdio.h>
#include "csc.h"

int main(void)
{
    string words[2];
    words[0]="HI!";
    words[1]="Bye";

    printf("%c%c%c\n",words[0][0],words[0][1],words[0][2]);
    printf("%c%c%c\n",words[1][0],words[1][1],words[1][2]);
    return 0;
}

