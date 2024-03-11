
#include <stdio.h>

int main() 
{
    int r;
    scanf("%d",&r);
    int unit = 2;
    int n;
    scanf("%d",&n);
    int x,y,house=1;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    x = r * unit;
    y = arr[0];
    for(int i=1;i<n;i++)
    {
        if(x>y)
        {
            y = y + arr[i];
            house = house+1;
        }
    
    }
    printf("%d",house);
}