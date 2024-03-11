#include <stdio.h>
#include"csc.h"
int main(void)
{
    char c = getChar("Do you agree ? ");

    if(c=='Y'||c=='y')
    {
        printf("Agreed\n");
    }
    else if(c=='N'|| c=='n')
    {
        printf("Not agreed\n");
    }
}
