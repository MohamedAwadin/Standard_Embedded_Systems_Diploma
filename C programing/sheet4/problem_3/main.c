 /*
sheet4_problem3: Write c function to reverse words in sentence (without using external arrays)
    " I work as an embedded software engineer for 3 years"
 -> " years 3 for engineer software embedded an as work I".
*/

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

void string_reversefull(char* str)
{
    string_reverse(str);
    int i =0,c=0;
    for(i= 0; str[i]; i++)
    {
        if(str[i]!=' ')
        {
            c++;
        }
        else
        {
            string_subreverse(str,i-c,i-1);
            c=0;
        }
    }
    string_subreverse(str,i-c,i-1);
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


int main()
{
    char str[] = "I work as an embedded software engineer for 3 years";
    string_print(str);
    string_reversefull(str);
    string_print(str);

    return 0;
}
