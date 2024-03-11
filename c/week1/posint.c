#include<stdio.h>
#include "csc.h"
int get_size(void);
void print_grid(int n);

int main(void)
{
    int num = get_size();
    print_grid(num);
}

int get_size(void)
{
    int n;
    do{
       n = getInt("Size: "); 
    }
    while(n<1);
    return n;
}
    
void print_grid(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        printf("#");
        }
        printf("\n");
    }
}
