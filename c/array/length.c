#include<stdio.h>
#include "csc.h"
#include<string.h>

int main(void)
{
    string name= getString("Input: ");
    printf("Output: ");
    for(int i=0,n = strlen(name);i<n;i++)
    {
        printf("%c",name[i]);
    }
   printf("\n");
    
}
