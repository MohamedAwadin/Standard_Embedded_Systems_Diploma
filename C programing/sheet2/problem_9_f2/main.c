/*
Sheet2_problem10_Figure2:
*
**
***
****
*****
******
*/

#include <stdio.h>

int main()
{
    int num;

    while(1)
    {
        printf("Enter the Number :\n");
        scanf("%d",&num);
        for(int i = 0 ; i<num ; i++)
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

