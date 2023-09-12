/****Sheet1_Problem10:Write a program that reads a positive integer and check  if this number is a base of 2 like 1,2,4,8,16,32, 64....*************/

#include <stdio.h>

int check_base_two(int num)
{
    int flag =0;
    if(num>0)
    {
        while(num%2 ==0)
        {
            num = num /2 ;
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

    unsigned int num;
    while(1)
    {

        printf("\nEnter the number :\n");
        scanf("%d",&num);


        if(check_base_two(num)==1)
        {
            printf("%d is a power of 2",num);
        }
        else
        {
            printf("%d is not a power of 2",num);
        }




    }
    return 0;
}
