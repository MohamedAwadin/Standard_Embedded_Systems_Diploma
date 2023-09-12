/*
sheet5_problem6:Write c function to find the first repeated char in string (try in O(n)).
                    "ahmed selem" ->e.

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

char most_repeted_char(char* str)
{
    int flag=0,i=0;
    char ch=0;
    int count[26] = {0};
    for(i=0; str[i]; i++)
    {
        ch = str[i];
        if(ch != ' ')
        {
            if(count[ch - 'a'] != 0)
            {

                return ch;
            }
            else
            {
                count[ch - 'a']++;
            }

            //printf("count[%c] = %d\n",ch,count[ch-'a']);
        }

    }
    return '-1';


}


int main()
{
    char name[] = "ahmed selem";

    string_print(name);
    char ch = most_repeted_char(name);
    printf("ch = %c\n",ch);

    return 0;
}
