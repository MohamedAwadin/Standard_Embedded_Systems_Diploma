/*
Sheet2_problem10: Write c function to count the max number of zeros between two ones in the binary representation of a number
(296384-> {1001000010111000000} return 4).
*/

#include <stdio.h>

int count_zeros_bits(int num)
{
    int flag=0,c=0,max=0;
    for(int i=0 ; (i<32); i++)
    {
        if((1<<i)&num)
        {
            if(c>0)
            {
                if(c>max)
                {
                    max=c;
                }
                c=0;
            }
            flag=1;
        }
        else
        {
            if(flag==1)
            {
                c++;
            }
        }
    }
    return max;

}

int main()
{
    unsigned int num;

    while(1)
    {
        printf("Enter the Number :\n");
        scanf("%d",&num);
        printf("Max number of zeros between two ones in Binary Rep=%d\n",count_zeros_bits(num));


    }
    return 0;
}

