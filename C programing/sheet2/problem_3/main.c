/*
Sheet3_problem3: Write a program to reverse a number in decimal representation (1205->5021).
*/
#include <stdio.h>

int reverse_dec(int num)
{
    int a,b,c=0,num2=0,res=1;
    a=num;
    while(a!=0)
    {
        b = a%10;
        a = a/10;
        c++;
    }

    a=num;
    for(int i = c-1 ; (i>=0) ; i--)
    {
        b = a%10; //2

        for(int j= 0 ; j<i; j++)
        {
            res = res * 10;
        }

        num2 = num2 + (b*res);
        res=1;
        a = a/10;

    }
    return num2;

}

int main()
{


    int num,num2;
    while(1)
    {

        printf("Enter the number  :\n");
        fflush(stdin);
        scanf("%d",&num);
        num2 = reverse_dec(num);
        printf("%d\n",num2);



    }
    return 0;
}
