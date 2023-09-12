/*
Sheet3_problem9: Write a C function that return the count of the longest consecutive
occurrence of any number ,and return the number
Array={1,2,2,3,3,3,3,4,4,4,4,4,3,3,3} result -> 5 ,number -> 4.
*/

#include <stdio.h>
int array_search_repeated_most_consecutive(int* arr,int size,int* number)
{
    int i,c=0,num,max=0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(arr[j+i]==arr[i])
            {
                c++;  //1  2
            }
            else
            {
                break;
            }
        }

        if(c>max)
        {
            max=c;
            num = arr[i];
        }
        c=0;
    }
    if(max > 1)
    {
        *number = num;
        return max;
    }
    else{
        return -1;
    }

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
        c= array_search_repeated_most_consecutive(arr,size,&number);
        printf("%d most repeated_consecutive = %d\n",number,c);

    }

    return 0;
}
