/****Sheet1_Problem2: Write a program to take numbers from user and find the max and min from them (let users choose the No of numbers.*************/


#include <stdio.h>


int main()
{
    int total, num,max=0,min=0 ;
    while(1)
    {
        printf("Enter the total number you will enter:\n");
        scanf("%d",&total);
        printf("Enter The numbers :\n");
        scanf("%d",&num);
        max = num ;
        min = num ;
        for(int i =1 ; i<total; i++)
        {
            scanf("%d",&num);
            if(num > max)
            {
                max = num;
            }

            if(num < min)
            {
                min = num;
            }

        }
        printf("max=%d   min=%d\n",max,min);
    }
    return 0;
}
