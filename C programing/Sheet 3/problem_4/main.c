/*
Sheet3_problem4:Write a C function that take two numbers and return array contain all
numbers between the two given numbers. (numbers 2,6->return array contain [3,4,5]).
*/

#include <stdio.h>

int array_between(int* arr,int size,int num1,int num2)
{
    int c=0;
    if(num1>num2)
    {
        num1 = num1 ^ num2;
        num2 = num2 ^ num1;
        num1 = num1 ^ num2;
    }
    //n1=2 , n2=6
    for(int i=1; i<size; i++)
    {
        if ((num1+i) != num2)
        {
            arr[i-1]=num1+i;
            c++;
        }
        else{
            return c;
        }
    }
    return c;
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
    int n1,n2,size;

    printf("Enter two num:\n");
    scanf("%d%d",&n1,&n2);
    size = array_between(arr,100,n1,n2);
    array_print(arr,size);
    return 0;
}
