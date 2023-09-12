/****Sheet1_Problem1: Write a program to take 2 numbers from user and calculate sum of all numbers between them.*************/

#include<stdio.h>

int sum_nums_between(int i,int x)
{
    int sum =0;
    if (i>x)
    {
        i = i + x;
        x = i - x;
        i = i - x;
    }
    for(int j = i+1; j<x ; j++)
    {
        sum = sum + j;
    }
    return sum;
}




int main()
{
    int x,i,sum=0;
    printf("Enter two num to find sum of numbers between them :\n");
    scanf("%d%d",&i,&x);
    printf("\nSum of numbers between %d : %d = %d",x,i,sum_nums_between(i,x));

    return 0;
}
