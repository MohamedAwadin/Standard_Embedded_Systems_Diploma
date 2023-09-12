/*
Sheet2_problem7: Write c code to sum numbers from 1 to 100 (without loop).
*/

#include <stdio.h>

int sum_between(int n1,int n2)
{
    int sum;
    if(n1>n2)
    {
        n1 = n1+n2;
        n2 = n1-n2;
        n1 = n1-n2;
    }

    //sum = ((n1+n2)/2) * (n2 - n1 +1);
   // return sum;

    sum = (0.5*(n2*(n2+1)))-(0.5*(n1*(n1-1)));
    return sum;


}

int main()
{
    int n1,n2,sum;
    while(1)
    {
        printf("Enter two number :");
        scanf("%d %d",&n1,&n2);
        sum = sum_between(n1,n2);
        printf("Sum of numbers between %d , %d = %d\n",n1,n2,sum);

    }


    return 0;
}
