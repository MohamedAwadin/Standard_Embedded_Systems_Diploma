/****Sheet1_Problem4:Write a program that take two numbers and multiply them without using * operation.*************/

#include <stdio.h>

int num_mult(int x,int y)
{
    int mult = 0;
    for(int i =0 ; i< x; i++)
    {
        mult = mult + y;
    }
    return mult;
}

int main()
{
    int x,y;
    while(1)
    {
        printf("Enter the two num :");
        scanf("%d %d",&x,&y);

        printf("%d * %d = %d\n",x,y,num_mult(x,y));

    }

    return 0;
}
