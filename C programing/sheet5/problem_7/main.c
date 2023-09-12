/*
sheet5_problem7:Write c function to copy string to string without copy repeated characters
                        try (O(n)). "ahmed selem kamel"->"ahmed slk".

*/

#include <stdio.h>
#include <stdlib.h>

void string_print(const char* str)
{
    int i;
    if(str == 0)
    {
        return ;
    }
    for(i=0; str[i]; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}

//"ahmed selem kamel"

char* remove_repeted_char(char* str)
{
    int c=0,i=0;
    char ch=0;
    int count[26] = {0};
    char*  copy =  (char*)calloc(100,sizeof(char));
    for(i=0; str[i]; i++)
    {
        ch = str[i];
        if(ch != ' ')
        {
            count[ch - 'a']++;
            if(count[ch - 'a'] == 1)
            {
                copy[c] = ch;
               // printf("COPY[%d] = %c\n",c,copy[i]);
                c++;
            }
        }
        else
        {
            copy[c] = ch;
            c++;
        }
    }
    copy[c] = 0;
    realloc(copy,c);
    return copy;
}


int main()
{
    char name[] = "ahmed selem kamel";
    string_print(name);
    char* ch = remove_repeted_char(name);
    string_print(ch);
    //printf("ch = %c\n",ch);

    return 0;
}
