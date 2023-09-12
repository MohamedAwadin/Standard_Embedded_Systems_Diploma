/*
sheet4_problem2: Write c function to check if string is mirror or not "SalaS","SalelaS".
*/

int string_len(char* str)
{
    int i;
    for(i=0; str[i]; i++);
    return i;
}

int string_MirorCheck(char* str)
{
    int i =0,j;
    char ch;
    int len = string_len(str);
    char* str1[len];
    for(i=0,j=len-1; i<len; i++,j--)
    {
        str1[i] = str[j];
    }
    for(i=0; str[i]; i++,j--)
    {
        if(str[i] != str1[i])
        {
            return 0;
        }
    }
    return 1;
}


void string_print(char* str)
{
    int i;
    for(i=0; str[i]; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}
#include <stdio.h>
void string_scan(char* str,int MaxSize)
{
    int i=0;
    scanf(" %c",&str[0]);
    for(; str[i]!='\n'&&i < MaxSize-1;)
    {
        i++;
        scanf("%c",&str[i]);
    }
    str[i]=0;
}

int main()
{
    //char str[] = "mood";
    char str[100];
    while(1)
    {
        printf("Enter String : \n");
        string_scan(str,100);
        string_print(str);
        if (string_MirorCheck(str))
        {
            printf("True\n");
        }
        else
        {
            printf("False\n");
        }

        string_print(str);

    }


    return 0;
}
