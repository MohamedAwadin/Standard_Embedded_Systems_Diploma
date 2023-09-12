/*
Sheet3_problem10: Write a c function that removes the repeated number of an input
                     sorted array and return a new array without the repeated numbers.
                     {2,2,2,2} => {2}
                     {1,2,2,3,4,4,4,5,5} => {1,2,3,4,5}
*/

#include <stdio.h>

int array_sorted_remove_repeated(int* arr, int arr_size, int* arr_store,int max_size)
{
    int i=1,j=0,flag=0;
    arr_store[0]=arr[0];

    for(i=1;(i<=arr_size)&&(j<max_size);i++){
        if(arr_store[j] != arr[i]){
            j++;
            arr_store[j]=arr[i];
        }
    }
    return j;

}

/*
int array_remove_repeated(int* arr, int arr_size, int* arr_store,int max_size)
{
    int i=0,j=0,max=0,min=0;
    min = arr[0];
    max = arr[arr_size-1];
    printf(":array.c:max=%d   min=%d\n",max,min);
    if (max_size >= arr_size)
    {
        for(i = min,j=0 ; (i<=max)&&(j<max_size) ; i++,j++){
            arr_store[j] = i;
        }
        return j;
    }
    else
    {
        return -1;
    }

}
*/

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
    int arr[10];
    int arr_store[10];
    int size,size_store;

    size = array_scan(arr,10);
    array_print(arr,size);
    printf("==================================\n");
    size_store = array_sorted_remove_repeated(arr, size, arr_store,10);
    array_print(arr_store,size_store);
    return 0;
}
