/*
Sheet3_problem7:Write a C function to take 2 arrays and swap them (try with 2 different sizes).
*/

#include <stdio.h>
void array_swap(int* arr1,int* arr2,int *size1,int *size2)
{
    int max,temp,i;
    if(*size2 > *size1)
    {
        max = *size1;
        *size2 = *size1;
    }
    else
    {
        max = *size2;
        *size1 = *size2;
    }
    for(i=0; i<max ; i++)
    {

        temp = arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
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
    int arr1[]= {1,2,3,2,5,9,5,5,1,3};
    int arr2[]= {10,20,30,20,50};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    printf("arr1= ");
    array_print(arr1,size1);
    printf("arr2= ");
    array_print(arr2,size2);

    array_swap( arr1, arr2, &size1, &size2);
    printf("=====================================\n");
    printf("arr1= ");
    array_print(arr1,size1);
    printf("arr2= ");
    array_print(arr2,size2);
    return 0;
}
