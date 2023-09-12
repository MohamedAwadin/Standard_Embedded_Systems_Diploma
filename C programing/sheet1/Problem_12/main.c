/*
Sheet1_Problem12:write a program to take even numbers from user and print the sum of them after each entry if the user enters 2 odd number the program print "bye" and stopped.
*/

#include <stdio.h>


int main()
{
    int n,flag=0,sum=0,c=0;
    while(flag == 0)
    {
        printf("Enter the num: \n");
        scanf("%d",&n);
        if(n%2 == 0)
        {
            sum = sum + n;
        }
        else
        {
            c++;
            if(c > 1)
            {
                flag =1;

            }
        }
        printf("sum = %d\n",sum);

    }
    printf("BYE");

    return 0;
}
