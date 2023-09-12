/*
##Valeo_exam_Sheet1_Problem13:You are designing a poster which prints out numbers with a unique style applied to each of them.
The styling is based on the number of closed paths or holes present in a giver number.
The number of holes that each of the digits from 0 to 9 have are equal to the number of closed paths in the digit.
Their values are: 1, 2, 3, 5 and 7 = 0 holes.
                  0, 4, 6, and 9 = 1 hole.
                  8 = 2 holes.
Example if number 3824->3 has 0 holes,8 has 2 holes,4 has 1 hole, sum=0+2+1=3.
*/

#include <stdio.h>

int num_holes(int n)
{
    int a,b,sum=0;
    if(n == 0)
    {
        return 1;
        //printf("0->0 has 1 holes\n");
    }
    else
    {
        a= n;
        sum=0;
        //printf("%d -> ",a);
        while( a != 0)
        {
            b= a%10;
            a= a/10;
            if((b == 0)||(b == 4)||(b == 6)||(b == 0))
            {
                //printf("%d has 1 holes,",b);
                sum = sum +1;
            }
            else if((b == 8))
            {
                //printf("%d has 2 holes,",b);
                sum = sum +2;
            }
            else
            {
                //printf("%d has 0 holes,",b);
            }
        }

        //printf("Sum = %d\n",sum);
        return sum;

    }

}

int main()
{
    int n;

    while(1)
    {
        printf("Enter the number :\n");
        scanf("%d",&n);
        printf("number of holes at %d = %d\n",n,num_holes(n));




    }
    return 0;
}
