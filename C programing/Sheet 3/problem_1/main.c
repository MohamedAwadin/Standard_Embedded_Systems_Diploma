/*
Sheet3_problem1:Write a C function to return the index of LAST occurrence of a number in a
                given array. Array index start from 0. If the item is not in the list return -1.
*/



#include <stdio.h>
int array_search_last(int* arr,int size,int num)
{
    int index=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            index=i;
        }
    }
    return index;
}

int main()
{
    int arr[]={8,2,3,8,5,6,7,8,9,10,4,5,8,10,33,0,44,4,6};
    int size  = sizeof(arr)/sizeof(int);
    int index =array_search_last(arr,size,6);
    if(index != -1){
        printf("%d\n",index);
    }
    else{
        printf("not found",index);
    }


    return 0;
}
