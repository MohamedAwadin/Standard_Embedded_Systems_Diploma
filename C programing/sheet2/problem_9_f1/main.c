/*
Sheet2_problem10_Figure1:
******
*****
****
***
**
*
*/

#include <stdio.h>

int main()
{
    int num;
    while(1)
    {
        printf("Enter the Number :\n");
        scanf("%d",&num);
        for(int i = num-1 ; i>=0 ; i--)
        {
            for(int j =0; j<i; j++)
            {
                printf("*");

            }
            printf("*\n");

        }

    }


    return 0;
}

