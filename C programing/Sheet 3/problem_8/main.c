/*
Sheet3_problem8:) Write a C function that return the count of the longest consecutive
occurrence of a given number in an array.
Array= {1,1,2,2,3,3,3,3,4,4,4,4,3,3,3} and searching for 3 -> result = 4
*/

#include <stdio.h>
int array_search_repeated_consecutive_num(int* arr,int size,int num)
{
    int i,c=0,max=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==num)
        {
            c++;
        }
        else
        {
            if(c>max)
            {
                max=c;
            }
            c=0;
        }
    }

    return max;
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

int main()
{
    int arr[100];
    int size;
    int c,num,number;
    while(1)
    {
        size = array_scan(arr,100);
        printf("Enter number: \n");
        scanf("%d",&num);
        scanf("%d",&number);
        c= array_search_repeated_consecutive_num(arr,size,num);
        printf("%d most repeated_consecutive = %d\n",num,c);
        c= array_search_repeated_consecutive_num(arr,size,number);
        printf("%d most repeated_consecutive = %d\n",number,c);

    }

    return 0;
}
