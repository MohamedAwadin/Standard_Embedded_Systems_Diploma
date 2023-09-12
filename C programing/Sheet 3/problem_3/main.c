/*
Sheet3_problem3:Write a C function that return 0 if a given number is a power of 3,
                   otherwise return 1.
*/

#include <stdio.h>

int power_of_3(int num)
{
    int flag =0;
    if(num>0)
    {
        while(num%3 ==0)
        {
            num = num /3 ;
        }
        if(num == 1)
        {
            flag = 1;
        }
    }
    return flag;
}

int main()
{
    int num;

    while(1)
    {
        printf("Enter the number:\n");
        scanf("%d",&num);
        if(power_of_3(num))
        {
            printf("True\n");
        }
        else
        {
            printf("false\n");
        }


    }


    return 0;
}
