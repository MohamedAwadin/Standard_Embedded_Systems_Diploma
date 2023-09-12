/****Sheet1_Problem3:Write a program to take numbers from user and calculate the sum of them (let users choose the No of numbers.*************/


#include <stdio.h>


int main()
{
    int total, num,sum=0 ;
    while(1)
    {
        sum = 0;
        printf("Enter the total number you will enter:\n");
        scanf("%d",&total);
        printf("Enter The numbers to find sum:\n");
        for(int i =0 ; i<total; i++)
        {
            scanf("%d",&num);
            sum = sum + num;

        }
        printf("SUM=%d \n",sum);

    }



    return 0;
}
