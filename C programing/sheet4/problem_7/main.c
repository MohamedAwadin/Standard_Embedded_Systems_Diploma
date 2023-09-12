/*
sheet4_problem7: Write a C code to take string “hi,5,hello,12”
                  and print the first word number of times as the first number
                      ,and second word as the second number.
*/
#include <stdio.h>
void string_words_with_num_1(char* str)
{
    char word1[20];
    char num1[20];
    int i=0,c=0,j1=0,j2=0,k=0;
    int num_1;
    //“hi,5,hello,12”
    for(i = 0 ; str[i]; i++)
    {
        if(str[i] != ',')
        {
            if(c==0)
            {
                word1[j1] = str[i];
                //printf("word1[%d] =%c  str[%d]=%c\n",j1,word1[j1],i,str[i]);
                j1++;
                word1[j1]=0;
            }
            else if(c==1)
            {
                num1[j2] = str[i];
                //printf("num1[%d] =%c  str[%d]=%c\n",j2,num1[j2],i,str[i]);
                j2++;
                num1[j2]=0;
            }
        }
        else if((str[i] == ','))
        {
            if(c==0)
            {
                c = 1;
                j1=0;
            }
            else if(c==1)
            {
                c=0;
                j2=0;
                num_1 = string_StringToInt(num1);
                for(k=0; k<num_1; k++)
                {
                    string_print(word1);
                }
            }
        }
    }
    num_1 = string_StringToInt(num1);
    for(k=0; k<num_1; k++)
    {
        string_print(word1);
    }
}


void string_words_with_num(char* str)
{
    char word1[20],word2[20];
    char num1[20],num2[20];
    int i=0,c=0,j=0;
    int num_1,num_2;
    for(i = 0 ; str[i]; i++)
    {
        if(str[i] != ',')
        {
            if(c==0)
            {
                word1[j] = str[i];
                j++;
                word1[j]=0;
            }
            else if(c==1)
            {
                num1[j] = str[i];
                j++;
                num1[j]=0;
            }
            else if(c==2)
            {
                word2[j] = str[i];
                j++;
                word2[j]=0;
            }
            else if(c==3)
            {
                num2[j] = str[i];
                j++;
                num2[j]=0;
            }
        }
        else
        {
            c++;
            j=0;
        }
    }
    num_1 = string_StringToInt(num1);
    num_2 = string_StringToInt(num2);

    for(i=0; i<=num_1; i++)
    {
        string_print(word1);
    }

    for(i=0; i<=num_2; i++)
    {
        string_print(word2);
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

int string_StringToInt(char* str)
{
    int i=0,num=0,flag=0;
    if(str[0]=='-')
    {
        flag=1;
        i++;
    }
    for(; str[i]; i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            num=num*10 +(str[i]-'0');

        }
    }
    if(flag == 1)
    {
        num = num * (-1);
    }
    return num;

}

int main()
{
    char str[] = "hi,5,ff,6,mohamed,4,awad,8" ;
    string_words_with_num_1(str);
    return 0;
}
