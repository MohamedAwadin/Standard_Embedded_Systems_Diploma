/*
Sheet3_problem16: Write a C function to get the nth term of Fibonacci series, and use it
                    to print the first 20 element.
*/

#include <stdio.h>

void fibonacci(int n)
{
    int i=0;
    unsigned long p1=1,p2=0,num=0;
    if(num >1)
    {
        printf("Invalid");
        return;
    }
    for(i=1; (i<=n)&&(i<=20) ; i++)
    {
        if(i > 2)
        {
            num = p1 + p2;
            p2 = p1;
            p1 =num ;
            printf("%lu\n",num);
        }
        if(i == 1)
        {
            printf("%d\n",p2);
        }
        if(i == 2)
        {
            printf("%d\n",p1);
        }
    }
}
int main()
{
    int num;
    printf("Enter the num:\n");
    scanf("%d",&num);
    fibonacci(num);
    return 0;
}
