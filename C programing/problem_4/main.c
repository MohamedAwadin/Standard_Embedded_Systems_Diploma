#include <stdio.h>
#include <stdlib.h>
/*sheet5_problem4:  repeat Q3 but array is sorted (try less than O(n)).
                        array {1,1,2,2,4,4,70,70,73,80,80,81,81} ->73.
 */



int array_not_repeated_num(int* arr,int size)
{
    int left =0 , right = size - 1;
    int mid = 0;
    int isEven = 1;
    while(left<right){
        //mid = (left + right)/2;
       // printf("mid = %d\n",mid);
        mid = left + (right - left)/2; //same as previous line, But to avoid overflow when Left==right
        if((right - mid)%2 == 0){
            isEven = 1;
        }
        else{
            isEven = 0;
        }
        if(arr[mid] == arr[mid-1]){

            if(isEven){
                right = mid -2;

            }
            else{
                left = mid +1;

            }

        }
        else if(arr[mid] == arr[mid+1]){

            if(isEven){
                left = mid +2;

            }
            else{
                right = mid -1;

            }
        }
        else{

            return arr[mid];
        }

    }
    return arr[left];
}
void array_print(const int* arr,int size) //(int* p,int size)
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
    int arr1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,26, 27, 28, 29, 30, 31,32,32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99,100};
    int arr[] = {1,2,2,4,4,70,70,73,73,80,80,81,81};
    //int arr[] = {1,1,2,2,3,3,4,8,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",size);
    array_print(arr,size);
    int i= array_not_repeated_num(arr,size);
    printf("i = %d\n",i);

    return 0;
}
