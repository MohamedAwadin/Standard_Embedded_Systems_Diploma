/*
Sheet3_problem6:Write a C function to take an array and reverse its elements.
*/

#include <stdio.h>
void array_reverse(int* arr,int size)
{
    int temp,i,j=size-1;
    for(i=0; i<=j ; i++)
    {
        temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
    }
}
void array_print(int* arr,int size) //(int* p,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        //printf("%d  %d",p[i],*(p+1));
        //printf("%d # %d\n",arr[i],*(arr+1));
        printf("%3d  ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[]={8,2,3,8,5,6,7,8,9,10,4,5,8,10,33,0,44,4,6};
    int size  = sizeof(arr)/sizeof(int);
    array_print(arr,size);
    printf("==========================\n");
    array_reverse(arr,size);
    array_print(arr,size);

    return 0;
}
