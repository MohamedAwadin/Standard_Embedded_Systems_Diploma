
/*
Sheet3_problem9: Write c function to take 2 arrays and return an array by merging
                    them like this
                    ( arr1={1,2,3,4,5},arr2={11,12,13,14,15} return
                            arr3={1,11,2,12,3,13,4,14,5,15} ).
*/
#include <stdio.h>
#include <stdlib.h>

int array_merg(int* arr1,int* arr2,int size1,int size2,int *arr_merg,int size_merg)
{
    int size,i=0,j=0;
    size = size1 + size2;
    if(size > size_merg)
    {
        size = size_merg ;
    }
    int s2 = size1>size2 ? size2 : size1;  //check for small array
    int *arr_m=size1>size2?arr1:arr2;
    s2 = s2 *2;
    for(i=0; i<s2; i++)
    {
        if(i%2 == 0)
        {
            arr_merg[i] = arr1[j];
        }
        else
        {
            arr_merg[i] = arr2[j];
            j++;
        }
    }
    for(; i<size; i++)
    {
        arr_merg[i] = arr_m[j];
        j++;
    }
    return size;
}

int array_scan(int* arr,int MaxSize)
{
    int i,n;
    printf(":array_scan:Enter total numbers (not more than %d):",MaxSize);
    scanf("%d",&n);
    for(i = 0 ; (i<n)&&(i<MaxSize); i++)
    {
        scanf("%d",&arr[i]);
        //scanf("%d",arr+i);
        //scanf("%d",&*(arr+i));
    }
    return i;
}


int * array_merg_dynamic(int* arr1,int* arr2,int size1,int size2,int* size_merg)
{
    int i=0,j=0;
    int s1 = size1 + size2 ;
    int* array_merg = (int*)malloc(s1 * sizeof(int));
    int s2 = size1 > size2 ? size2 : size1;
    s2 = s2 * 2;
    int* arr_rem = size1 > size2 ? arr1 : arr2;
    for(i=0; i<s2; i++)
    {
        if(i % 2 == 0)
        {
            array_merg[i]=arr1[j];
        }
        else {
            array_merg[i]=arr2[j];
            j++;
        }
    }
    for(;i<s1;i++){
        array_merg[i]=arr_rem[j];
        j++;
    }
    *size_merg = s1;
    return array_merg;
}


void array_print(int* arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%3d  ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr1[10],size1;
    int arr2[5],size2;
    int arr_merg[100],size_merg;
    int* merge;
    while(1)
    {
        size1 = array_scan(arr1,10);
        size2 = array_scan(arr2,5);
        array_print(arr1,size1);
        array_print(arr2,size2);
        //size_merg=array_merg(arr1, arr2, size1, size2,arr_merg,100);
        merge=array_merg_dynamic(arr1, arr2, size1, size2,&size_merg);
        printf("Array Merg:\n");
        //array_print(arr_merg,size_merg);
        array_print(merge,size_merg);
        free(merge);
    }

    return 0;
}
