/*****************Write a program that take two numbers and DIVIDED them without using / operation.*********/

#include <stdio.h>


int main()
{
    int x,y,a,b,c=0;
    while(1)
    {
        c=0;
        printf("Enter two num:\n");
        scanf("%d%d",&x,&y);
        a=x;
        b=y;

        while(x>y)
        {
            x=x-y;
            printf("%d\n",x);
            c++;
        }
        printf("The %d / %d = %d\n",a,b,c);
        printf("The %d %% %d = %d\n",a,b,x);

    }

    return 0;
}
