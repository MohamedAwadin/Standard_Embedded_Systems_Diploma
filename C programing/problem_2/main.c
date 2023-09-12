/*
sheet5_problem2 : You have an array of 101 element contain all number from 1 tp 100, so one
                    number is repeated, write c function to find the repeated number (try in O(n)).

*/

void array_print(const int* arr,int size) //(int* p,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%3d  ",arr[i]);
    }
    printf("\n");
}

int array_sorted_repeated_num(int * arr, int size ){
    int i = 0;
    int* count  = (int*)calloc(size , sizeof(int));
    for(i =0 ; i<size ; i++){
        count[arr[i]]++;
    }
    for(i =0 ; i<size ; i++){
        if(count[i]>1){
            return i;
        }
    }
    //array_print(count, size );
    return -1;
}


int array_sorted_repeated_num_2(int * arr, int size ){
    int i = 0;
    for(i= 0 ;i<size-1 ; i++){
        if(arr[i]==arr[i+1]){
            return arr[i];
        }
    }
    //array_print(count, size );
    return -1;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,26, 27, 28, 29, 30, 31,32,32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99,100};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",size);

    array_print(arr,size);
    int num = array_sorted_repeated_num_2(arr,size);
    printf("num = %d\n",num);
    return 0;
}
