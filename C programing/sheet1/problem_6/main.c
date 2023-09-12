/****Sheet1_Problem6:Write a program to calculate the power of a number. The number and its power are input from user.*************/
#include <stdio.h>

int pow_num(int num,int pow )
{
    int res=1;
    for(int i= 0 ; i<pow; i++)
    {
        res = res * num;
    }
    return res;

}

int main()
{
    int num, pow,res=1;
    while(1)
    {
        printf("Enter the number :\n");
        scanf("%d",&num);
        printf("Enter the power  :\n");
        scanf("%d",&pow);

        printf("%d Power %d = %d\n",num,pow,pow_num(num,pow));

    }

    return 0;
}
