/*
Sheet2_problem10_Figure4:
   *
  ***
 *****
*******
*/

#include <stdio.h>

int main()
{
    int num;
    while(1)
    {
        printf("Enter the Number :\n");
        scanf("%d",&num);
        for(int i = 1 ; i<=num ; i++)
        {
            for(int j =num-1; j>=i; j--)
            {
                printf(" ");

            }
            for(int k =1; k<=i; k++)
            {
                printf("* ");
            }
            printf("\n");


        }

    }




    return 0;
}

