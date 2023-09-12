/*
Sheet2_problem5: write a program to print the binary representation of a number,
                  try not to print zeros on the left (5->print 101).
*/

#include <stdio.h>

int print_binary_simple(int num)
{
    int flag=0;
    printf("0b");
    for(int i=31 ; i>=0 ; i--)
    {
        if((1<<i)&num)
        {
            printf("1");
            flag = 1;


        }
        else
        {
            if(flag == 1)
            {
                printf("0");
            }
        }
    }
    printf("\n");
}
int print_binary(int num)
{
    printf("0b");
    for(int i=31 ; i>=0 ; i--)
    {
        if((1<<i)&num)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
}
int main()
{
    int num;
    while(1)
    {

        printf("Enter the Number :\n");
        scanf("%d",&num);
        print_binary(num);
        print_binary_simple(num);



    }
    return 0;
}
