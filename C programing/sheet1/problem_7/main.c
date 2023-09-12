/****Sheet1_Problem7:Write a program that reads a positive integer and computes the factorial.*************/

#include <stdio.h>

unsigned int fact_num(int num)
{
    unsigned int res=1;
    for(int i= num ; i>0; i--)
    {
        res = res * i;
    }
    return res;

}

int main()
{

    int num ;

    while(1)
    {
        printf("Enter the number :\n");
        scanf("%d",&num);
        if(num < 0 )
        {
            printf("WRONG: Negative INPUT\n");
        }
        else
        {
            printf("factorial %d = %d\n",num,fact_num(num));

        }


    }


    return 0;
}
