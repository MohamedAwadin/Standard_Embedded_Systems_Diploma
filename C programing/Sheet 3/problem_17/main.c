/*
Sheet3_problem17: Write a C function to take n mono numbers (from 0to 9) from user
                    and return the most repeated one,
                        if user enter number bigger than 9 return -1
                                    (don’t use arrays).
*/

#include <stdio.h>

int array_most_repeated_mono(int* arr, int arr_size, int* pnum)
{
    int i=0,count[10]= {0},max=0;
    for(i=0; i<arr_size; i++)
    {
        count[arr[i]]++;
    }
    for(i=0; i<10; i++)
    {

        if(max<count[i])
        {
            max = count[i];
            *pnum = i;
        }
    }
    return max;
}

int array_most_repeated(int* arr, int arr_size, int* pnum)
{
    int i = 0 , max_num =0 ;
    for(i = 0 ; i<arr_size ; i++){

    }
}


int array_big_mono(int* num , int total)
{
    int i=0,max=0;
    for(i=0 ; i<total ; i++)
    {
        if((num[i]>=0)&&(num[i]<=9)){
            if(num[i] > max){
                max = num[i];
            }
        }
        else{
            return -1;
        }
    }
    return max;
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

int main()
{
    int total ;
    printf("Enter the total memory size:\n");
    scanf("%d",&total);
    int* arr = (int*)malloc(total* sizeof(int));
    int size= array_scan(arr , total);
    array_print(arr,size);

    int num , c = array_most_repeated_mono(arr,size,&num);
    printf("num=%d  c=%d\n",num,c);

    int big = array_big_mono(arr,size);
    printf("BIG=%d\n",big);


    return 0;
}
