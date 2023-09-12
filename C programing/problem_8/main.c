/*
sheet5_problem8:Write C function to take an array and if it finds a number "given" makes the
                    previous elements in a new array and returns it (try to optimize).

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

int *return_until(int * arr , int size, int num, int* n_size){
    int i = 0,c=0;
    int* copy = (int*)calloc(size,sizeof(int));
    for(i = 0 ; i<size ; i++){
        if(arr[i] != num){
            copy[c] = arr[i];
            printf("COPY[%d] = %d = arr[%d]\n",c,copy[c],arr[i]);
            c++;
        }
        else{
            realloc(copy , c*sizeof(int));
            *n_size = c;
            return copy;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1,2,2,6,8,6,2,5,1,9,8,7,6,1,2,5,99,5,23,5,31,5,32,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("s = %d\n",size);
    array_print(arr,size);
    int num = 32,size_n;
    int * nums = return_until(arr , size,num,&size_n);
    array_print(nums,size_n);


    return 0;
}
