/*
Sheet3_problem2:Write a C function to return the maximum and minimum number in an
                  array and their indexes.
*/

#include <stdio.h>

void array_max_min_element(int* arr,int size,int* max,int* min )
{
    *max = arr[0],*min = arr[0];
    for(int i=1; i<size; i++)
    {
        if(arr[i] > *max)
        {
            *max = arr[i];
        }
        if(arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}

int main()
{
    int arr[]={8,2,3,8,5,6,7,8,9,10,-4,5,8,10,33,0,44,4,6};
    int size  = sizeof(arr)/sizeof(int);
    int max,min;
    array_max_min_element(arr,size,&max,&min);
    printf("max=%d  min=%d",max,min);
    return 0;
}
