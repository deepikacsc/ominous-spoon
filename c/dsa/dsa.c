#include<stdio.h>
int main(void)
{
    //int numbers[]={20,500,10,5,100,1,50};
    int size;
    printf("Enter size:");
    scanf("%d",&size);
    int numbers[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&numbers[i]);
    }
    int n;
    printf("Number: ");
    scanf("%i", &n);
    for(int i=0;i<7;i++)
    {
        if(numbers[i]==n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
