/****Sheet1_Problem9:Write a program that reads a positive integer and checks if it is a perfect square.*************/

#include <stdio.h>

int perfect_square(int num)
{
    int flag=0;
    if(num > 0)
    {

        for (int i = 1; i * i <= num; i++)
        {
            //printf("%d  %d  %i\n",i,num % i, num / i);
            if (i*i == num)
            {
                flag=1;
                return flag;
                //break;
            }
        }
    }
    return flag;

}

int main()
{

    unsigned int num;
    while(1)
    {

        printf("Enter the number :\n");
        scanf("%d",&num);



        if(perfect_square(num)==1)
        {
            printf("%d is perfect-squre num\n",num);
        }
        else
        {
            printf("%d is not-perfect-squre num\n",num);
        }


    }






    return 0;
}
