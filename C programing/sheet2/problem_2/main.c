/*
Sheet2_problem2: Write a C program to take a number and a character from user
if the number is even print the same character,
if the number is odd print the other case of the character (a->A, B->b).
*/
#include <stdio.h>
int even_num(int num)
{
    if(num % 2 == 0)
    {
        return 1;
    }
    else
        return 0;

}
char char_change_state(char ch)
{
    char n_ch=ch;
    if((n_ch >= 'a')&&(n_ch <= 'z'))
    {
        n_ch = n_ch - 'a' + 'A';
    }
    else if((n_ch >= 'A')&&(n_ch <= 'Z'))
    {
        n_ch = n_ch - 'A' + 'a';

    }
    return n_ch;
}

int main()
{
    int num;
    char ch,ch1;
    while(1)
    {
        printf("Enter the number and character :\n");
        fflush(stdin);
        scanf("%d%c",&num,&ch);
        if(even_num(num))
        {
            printf("%c\n",ch);
        }
        else
        {
            ch1 = char_change_state(ch);
            printf("%c\n",ch1);

        }

    }
    return 0;
}
