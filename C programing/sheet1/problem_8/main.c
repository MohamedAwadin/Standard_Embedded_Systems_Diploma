/****Sheet1_Problem8:Write a program that reads a positive integer and checks if it is a prime.*************/
#include <stdio.h>

int check_prime(int num)
{
    unsigned char flag=1;
    if(num < 2)
    {
        flag=0;
        return flag;
    }
    else
    {
        for(int i = 2 ; i<num ; i++)
        {
            if(num % i == 0)
            {
                //flag = 1;
                flag = 0;
                return flag;
                //break;
            }
        }
    }
    return flag;

}

int main()
{
    int num;


    while(1)
    {

        printf("Enter the number :\n");
        scanf("%d",&num);

        if(check_prime(num) == 1)
        {
            printf("%d is prime num\n",num);
        }
        else
        {
            printf("%d is not-prime num\n",num);
        }






    }


    return 0;
}
