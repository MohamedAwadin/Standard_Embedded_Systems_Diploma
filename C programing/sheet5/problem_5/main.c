/*sheet5_problem5:  You have an array of integers contain Mono numbers only (from 0 to 9)
                    , write c function to find the most repeated number (try in O(n)).
 */

#include <stdio.h>
#include <stdlib.h>

int most_repeted_mono(int * arr , int size){
    int i=0,max=0,num=-1;
    int* count = (int*)calloc(10,sizeof(int));
    for(i=0 ; i<size ; i++){
        count[arr[i]]++;
    }
    for(i=0;i<10;i++){
        //printf("count[%d] = %d  \n",i,count[i]);
        if(count[i]>max){
            max = count[i];
            num = i;
        }
    }
    free(count);
    return num;
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
    int arr[] = {0,2,5,9,1,2,9,6,6,4,2,9,6,4,2,5,3,8,9,4,6,2,3,4,5,6,7,5,6,2,5,3,1,1,2,2,3,3,4,8,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",size);
    array_print(arr,size);
    int num = most_repeted_mono(arr,size);
    printf("num = %d\n",num);

    return 0;
}
