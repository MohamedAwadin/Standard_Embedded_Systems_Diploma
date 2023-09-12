/*
Sheet3_problem5:Write c function to find the most repeated number in an array of integers.
*/

#include <stdio.h>


int array_most_repeated(int* arr,int size)
{
    int index,c=0,max=0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(arr[j]== arr[i])
            {
                c++;
            }
        }
        if(c>max)
        {
            index=arr[i];
            max = c;
        }
        c=0;
    }
    return index;
}

int main()
{
    int max;
    int arr[]={8,2,3,8,5,6,7,8,9,10,4,5,8,10,33,0,44,4,6};
    int size  = sizeof(arr)/sizeof(int);
    max = array_most_repeated(arr,size);
    printf("%d\n",max);

    return 0;
}
