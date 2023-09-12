/*
Sheet3_problem13:Write c function to take an array and return the biggest difference between 2 numbers in the array
                  (the smaller number must come first in the array)
                    {10,1,5,3,6,8,7,2}->return 7 difference between 1,8.
*/

#include <stdio.h>

int array_diff_MaxMin(int* arr,int size)
{
    int max,min = arr[0],index=0,diff=0;
    for(int i=1; i<size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
    }
    max = arr[index];
    for(int i=index+1; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    diff = max - min ;
    return diff;
}

//==================================================
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
//===================================================
int main()
{
    int arr[100],diff;
    while(1)
    {
        int size = array_scan(arr,100);
        array_print(arr,size);
        diff = array_diff_MaxMin(arr,size);
        printf("diff = %d\n",diff);

    }

    return 0;
}
