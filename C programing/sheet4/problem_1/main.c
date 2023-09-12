/*
sheet4_problem1: Write c function to reverse string "Ahmed salem"->melas demhA".
*/

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
    //printf(":string.c: len = %d\n",len);
    for(i=0,j=len-1; i<=j; i++,j--)
    {
        //printf(":string.c: i = %d,  j = %d\n",i,j);
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        //printf(":string.c: str[%d] = %c,  str[%d] = %c , ch =%c\n",i,str[i],j,str[j],ch);
    }
    //printf(":string.c: str[%d] = %d\n",len,str[len]);

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
#include <stdio.h>


int main()
{
    char str[100] = "Mohamed Awadin";
    string_print(str);
    string_reverse(str);
    string_print(str);
    while(1){
    string_scan(str,100);
    string_print(str);
    string_reverse(str);
    string_print(str);

    }

    return 0;
}
