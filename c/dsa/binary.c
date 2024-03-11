#include<stdio.h>
#include<stdbool.h>
bool binarySearch(int array[], int n, int target)
{
    int start=0;
    int end = n-1;
    while(start<=end)
    {
        int middle=(start+end)/2;
        if(target==array[middle])
        {
            return true;
        }
        else if(target<array[middle])
        {
            end=middle-1;
        }
    }
}
