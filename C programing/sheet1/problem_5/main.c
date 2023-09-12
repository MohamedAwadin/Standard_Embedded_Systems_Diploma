/*Sheet1_Problem5:Write a program that take two numbers and calculate the reminder without using % operation.*************
*****************Write a program that take two numbers and DIVIDED them without using / operation.
*/

#include <stdio.h>

int div_num(int x, int y, int * mod)
{
    int c = 0;
    while(x>=y)
    {
        x=x-y;

        c++;
    }
    return c;
}
int modulus_num(int x, int y)
{
    int c = 0;
    while(x>=y)
    {
        x=x-y;

        c++;
    }
    return x;
}

int div_mod_num(int x, int y, int * mod)
{
    int c = 0;
    while(x>=y)
    {
        x=x-y;

        c++;
    }
    *mod = x;
    return c;
}

int main()
{
    int a,b;
    while(1)
    {

        printf("Enter two num:\n");
        scanf("%d%d",&a,&b);

        //printf("The %d / %d = %d\n",a,b,div_num(a,b));
        printf("The %d / %d = %d\n",a,b,a/b);
        //printf("The %d %% %d = %d\n",a,b,modulus_num(a,b));
        printf("The %d %% %d = %d\n",a,b,a%b);
        int mod = 0,div = div_mod_num(a,b,&mod);
        printf("The %d / %d = %d , %d %% %d =  %d\n",a,b,div,a,b,mod);

    }

    return 0;
}
