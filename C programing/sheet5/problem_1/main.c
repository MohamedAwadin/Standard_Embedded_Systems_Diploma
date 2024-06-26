/*
sheet5_problem1 : You have an array of 100 element contain all number from 0 to 100 except
                    one number, write c function to find the missed number (try in O(n)).

*/


#include <stdio.h>
#include <stdlib.h>

void array_print(const int* arr,int size) //(int* p,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%3d  ",arr[i]);
    }
    printf("\n");
}

int array_sorted_missed_num(int * arr, int size ){
    int i = 0 , j= 0 ;
    for(i = 0 ; i<size ; i++){
        if(arr[i] != j){
            return j;
        }
        j++;
    }
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,26, 27, 28, 29, 30, 31, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99,100};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",size);

    array_print(arr,size);
    int num = array_sorted_missed_num(arr,size);
    printf("num = %d\n",num);
    return 0;
}
