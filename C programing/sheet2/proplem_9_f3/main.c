/*
Sheet2_problem10_Figure3:
     12345
1    *   *

2     * *

3      *

4     * *

5    *   *
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

            for(int j =1; j<=num; j++)
            {
                if((i==j)||(i+j == num+1))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }


            }
            printf("\n");


        }

    }




    return 0;
}

