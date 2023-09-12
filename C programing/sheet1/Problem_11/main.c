/*
Sheet1_Problem11:Write a program to sum the digits in a decimal number 145 -> 1+4+5=10.
*/
#include <stdio.h>
#include <stdlib.h>
int sum_digit(int a)
{
    int b,sum=0,c=0;
    while( a != 0)
    {
        b= a%10;
        a= a/10;
        sum = sum + b;
        c++;
    }
    return sum ;
}

int main()
{
    int x;

    while(1)
    {

        printf("Enter the num :\n");
        scanf("%d",&x);
        printf("The sum of digit in %d  = %d\n",x,sum_digit(x));


    }



    return 0;
}
