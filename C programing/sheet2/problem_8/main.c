/*
Sheet2_problem8: Write a full C program to take 4 choose from user:
1-Set bit.
2-Clear bit
3-Toggle bit.
4-Read bit.
then take number, and bit number.
print the number after set, clear, or toggle if 1,2 or 3 is
selected. print the bit value if 4 is selected.
*/

#include <stdio.h>
//op=1(to Set),op=2(to Clear),op=3(to Toggle), op=4(to Read)
int binary_operation(int n, int bit, int op)
{
    int n1,b;
    n1=n;
    if(op == 1)
    {
        n1 = n1 | (1<<bit);
        return n1;
    }
    else if(op == 2)
    {
        n1 = n1 & (~(1<<bit));
        //printf("Number %d after clear bit %d == %d\n",n,bit,n1);
        return n1;

    }
    else if(op == 3)
    {
        n1 = n1 ^ (1<<bit);
        //printf("Number %d after Toggle bit %d == %d\n",n,bit,n1);
        return n1;

    }
    else if(op == 4)
    {
        b = (n1>>bit)&1;
        //printf("Bit %d in number %d == %d\n",bit,n,b);
        return b;

    }
    else
    {

    }

}

int main()
{
    int n,op,bit;
    while(1)
    {
        printf("Enter the number:");
        scanf("%d",&n);
        printf("Enter the bit:");
        scanf("%d",&bit);
        printf("Enter 1(to Set),2(to Clear),3(to Toggle), 4(to Read) to select operation:");
        scanf("%d",&op);
        int res  =
        printf("Result of Operation %d == %d\n",op,binary_operation(n,bit,op));





    }

    return 0;
}
