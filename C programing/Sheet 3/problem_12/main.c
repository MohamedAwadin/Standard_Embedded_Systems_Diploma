/*
Sheet3_problem11: Write c function to take an array (with unknown size) contain *2 zeros*
=>swap the 3 element after the first zero with the 3 element after the second zero
( x,x,x,0,1,2,3,xxxx,0,5,6,7,xxxx ->swap 1,2,3with 5,6,7).
*/

#include <stdio.h>


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


void array_Swap_AfterZEROS(int* arr)
{
    int i=0,j=0,c=0,flag=0,temp=0;
    for(i=0;; i++)
    {
        if(arr[i] == 0)
        {
            for(j=i+4 ;; j++)
            {
                if(arr[j]==0)
                {
                    c++;
                    j++;
                }
                if(c>0)
                {
                    temp   = arr[++i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    c++;
                    if(c==4)
                    {
                        flag =1;
                        break;
                    }
                }
            }
        }
        if(flag == 1){
            break;
        }
    }
}

void array_Swap_AfterZEROS_2(int* arr)
{
    int i=0,first_zero,second_zero,flag=0;
    for(i=0;flag<2; i++)
    {
        if((arr[i] == 0)&&(flag == 0))
        {
            first_zero = i;
            flag = 1;
        }
        else if((arr[i] == 0)&&(flag == 1)){
            second_zero = i;
            flag = 2;
        }
    }
    swap(&arr[first_zero+1],&arr[second_zero+1]);
    swap(&arr[first_zero+2],&arr[second_zero+2]);
    swap(&arr[first_zero+3],&arr[second_zero+3]);

}
void swap(int* p1 , int* p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int arr[]= {1,2,3,4,0,5,6,7,8,9,10,0,11,12,13,14,15,0,16};
    int arr2[]= {1,2,3,4,0,5,6,7,8,9,10,0,11,12,13,14,15,0,16};
    int size = sizeof(arr)/sizeof(arr[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    //size2 = array_scan(arr,10);
    printf("arr1= ");
    array_print(arr,size);
    printf("arr2= ");
    array_print(arr2,size2);
    printf("==================================\n");
    //printf("%d\n",size);
    array_Swap_AfterZEROS(arr2);
    array_Swap_AfterZEROS_2(arr);
    //printf("%d\n",arr);
    //findSize(arr);
    printf("arr1= ");
    array_print(arr,size);
    printf("arr2= ");
    array_print(arr2,size2);


    return 0;
}
