/*
sheet5_problem3 : You have an array of integers all numbers in the array repeated 2 times
                    except one number repeated one time only find this number (try o(n)).
                            array like {1,2,4,66,2,1,500,66,7,7,500}->4.


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

void array_find_max_min(int * arr , int size , int* max , int* min){
    int i =0 ;
    *max = arr[0],*min = arr[0];
    for(i = 0 ; i<size ; i++){
        if(arr[i]> *max){
            *max = arr[i];
        }
        if(arr[i]< *min){
            *min = arr[i];
        }
    }
}

int array_not_repeated_num(int *arr , int size){
    static int max =0 , min =0 ;
    array_find_max_min(arr,size, &max , &min);
    //printf("max =%d , min = %d \n",max,min );
    int count_size = max - min +1;
    int* count = (int *)calloc(count_size,sizeof(int));
    int i = 0;
    for(i =0 ; i<size ; i++){
        count[arr[i]-min]++;
    }
    /*for(i =0 ; i<size ; i++){
        printf("count[%d] == count[%d] == %d\n",i,i+min,count[i] );
    }*/
    for(i=0; i<count_size ; i++){
        if(count[i] == 1){
            return i+min;
        }
    }

    return -1;
}

int main()
{
    int arr1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,26, 27, 28, 29, 30, 31,32,32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99,100};
    int arr[] = {1,2,4,66,2,1,500,66,7,7,500};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",size);

    array_print(arr,size);
    int num = array_not_repeated_num(arr,size);
    printf("num = %d\n",num);

    return 0;
}
