/*
sheet4_problem5: Write a C function to convert float number to string
                      Float f1=3.45 to string str=”3.45”.
*/
#include <stdio.h>
void string_print(char* str)
{
    int i;
    for(i=0; str[i]; i++)
    {
        printf("%c ",str[i]);
    }
    printf("\n");
}
int string_len(char* str)
{
    int i;
    for(i=0; str[i]; i++);
    return i;
}
void string_reverse(char* str)
{
    int i =0,j;
    char ch;
    int len = string_len(str);
    for(i=0,j=len-1; i<=j; i++,j--)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
    }

}
void string_FloatToString(float num,char* str)
{
    int num1 = num,m,i=0,c=0;
    int num2 = (num - num1) * 100;
    printf("num1 = %d, num2 = %d\n",num1,num2);
    if(num < 0)
    {
        num1 = num1 * (-1);
        num2 = num2 * (-1);
        str[i] = '-';
        i++;
    }
    if(num1 == 0)
    {
        str[i] = '0';
    }
    c=i;
    while(num1)
    {
        m= num1%10;
        str[i] = m + '0';
        num1= num1/10;
        i++;
    }
    string_subreverse(str,c,i-1);
    str[i] = '.';
    i++;
    c=i;
    if(num2 == 0)
    {
        str[i] = '0';
    }
    while(num2)
    {
        m= num2%10;
        str[i] = m + '0';
        num2= num2/10;
        i++;
    }
    string_subreverse(str,c,i-1);

    str[i] = 0;
}
void string_subreverse(char* str,int frist, int last)
{
    int i =0,j;
    char ch;
    for(i=frist,j=last; i<=j; i++,j--)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
    }
}
int main()
{
    float num = 0.49;
    char* str[100];
    while(1)
    {
        printf("Enter :\n");
        scanf("%f",&num);

        string_FloatToString(num,str);
        string_print(str);

    }

    return 0;
}
