/*
Sheet2_problem4: Write a program to count the number of 1’s in an unsigned 32-bit binary integer.
*/

#include <stdio.h>

int count_ones_bit(int num)
{
    int c = 0;

    for(int i=0 ; i<32 ; i++)
    {
        if((1<<i)&num)
        {
            c++;
        }
    }
    return c;
}

int main()
{
    int num,c=0;
    while(1)
    {
        c=0;
        printf("Enter the Number :\n");
        scanf("%d",&num);

        printf("number of 1s bits = %d\n",count_ones_bit(num));

    }
    return 0;
}
