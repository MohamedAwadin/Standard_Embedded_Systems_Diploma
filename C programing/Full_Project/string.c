#include"string.h"
void string_print(const char* str)
{
    int i;
    if(str == 0){
        return ;
    }
    for(i=0; str[i]; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}

void string_copy(char* str1, char* str2)
{
    int i =0 ;
    for( i= 0 ; str1[i] && str2[i]; i++)
    {
        str1[i] = str2[i];
    }
    str1[i] = 0;

}

int string_len(char* str)
{
    int i;
    for(i=0; str[i]; i++);
    return i;
}
void string_CapitalToSmall(char* str)
{
    int i;
    for(i=0; str[i]; i++)
    {
        if((str[i]>='A')&&(str[i]<='Z'))
        {
            str[i] = str[i] - 'A' + 'a';
        }
    }
}


int string_Compare(char* str1,char* str2)
{
    int i,flag=1;
    //int l1=string_len(str1);
    //int l2=string_len(str2);
    /*if(l1 != l2){
        flag=0;
        return flag;
    }*/
    for(i=0; str1[i] || str2[i]; i++)
    {
        if(str1[i] != str2[i])
        {
            return 0;
        }
    }

    return 1;
}

int string_CompareNotCaseSens(char* str1,char* str2)
{
    int i,flag=1;
    char ch1,ch2;
    for(i=0; str1[i] || str2[i]; i++)
    {
        ch1 =str1[i];
        ch2 =str2[i];
        if((ch1>='A')&&(ch1<='Z'))
        {
            ch1 = ch1 - 'A' + 'a';
        }
        if((ch2>='A')&&(ch2<='Z'))
        {
            ch2 = ch2 - 'A' + 'a';
        }
        if(ch1 != ch2)
        {
            return 0;
        }
    }

    return 1;
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

void string_longestWord(char* str, char *word)
{
    int i =0,j=0,c=0,index=0,max=0;
    for(i=0; str[i]!=0; i++)
    {
        if((str[i] != ' '))
        {
            c++;
        }
        else
        {
            if(c>=max)
            {
                max = c;
                index = i-max;
            }
            c=0;
        }
    }
    if(c>=max)
    {
        max = c;
        index = i-max;
    }
    //printf(":string.c:max = %d  index=%d\n",max,index);
    for(i=index,j=0; i<=index+max; i++,j++)
    {
        word[j] = str[i];
        //printf(":string.c:word[%d] = str[%d] = %c\n",j,i,str[i]);
    }
    str[i]=0;

}
void string_longestWord_1(char*str,char *word)
{
    int i,c=0,max=0,index=0,j=0;
    for(i=0; str[i]; i++)
    {
        if(str[i]==' ')
        {
            if(c>=max)
            {
                max=c;
                index=i-1;
            }
            c=0;
        }
        else
        {
            c++;
        }
    }
    if(c>=max)
    {
        max=c;
        index=i-1;
    }

    //  printf("%d   %d    %c",max,index,str[index]);
    i=index-max+1;
//printf("\n%c\n",str[i]);
    for(; j<max;)
    {
        word[j]=str[i];
        i++;
        j++;
    }
    word[j]=0;

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

void string_IntToString(int num, char* str)
{
    int m,i=0,flag = 0;
    if(num == 0)
    {
        str[0] = '0';
        str[1] = 0;
        return 0;
    }
    if(num < 0)
    {
        num = num * (-1);
        flag =1;
    }
    while(num)
    {
        m= num%10;
        str[i] = m + '0';
        num= num/10;
        i++;
    }
    if(flag == 1)
    {
        str[i++] = '-';
    }
    str[i]=0;
    string_reverse(str);
}

int string_StringToInt(char* str)
{
    int i=0,num=0,flag=0;
    if(str[0]=='-'){
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
    if(flag == 1){
        num = num * (-1);
    }
    return num;

}

int string_StringToInt_NoChar(char* str, int* pnum)
{
    int i=0,num=0,flag=0;
    if(str[0]=='-'){
        flag=1;
        i++;
    }
    for(; str[i]; i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            num=num*10 +(str[i]-'0');
        }
        else{
            return 0;
        }
    }
    if(flag == 1){
        num = num * (-1);
    }
    *pnum = num;
    return 1;

}


int string_MirorCheck(char* str)
{
    int i =0,j;
    char ch;
    int len = string_len(str);
    char* str1[len];
    for(i=0,j=len-1;i<len; i++,j--)
    {
        str1[i] = str[j];
    }
    for(i=0; str[i]; i++,j--)
    {
        if(str[i] != str1[i]){
            return 0;
        }
    }
    return 1;
}


void string_TriangleCheck(char* str, char* strRes)
{
    int i=0,num=0,num1=0,num2=0,num3=0,c=0;
    char str_1[]="Equilateral Triangle",str_2[]="Isosceles Triangle",str_3[] ="Scalene Triangle";
    for(; str[i]; i++)
    {
        if(str[i] != ' ')
        {
            if(str[i]>='0' && str[i]<='9')
            {
                num=num*10 +(str[i]-'0');

            }
        }
        else
        {
            c++;
            if(c == 1)
            {
                num1 = num;
            }
            else if(c == 2)
            {
                num2 = num;
            }
            if(c == 3)
            {
                num3 = num;
            }
            else if(c>3)
            {
                break;
            }
            num= 0;
        }
    }
    if((num1 == num2) && (num1 == num3) && (num2 == num1) && (num2 == num3) && (num3 == num1) && (num3 == num2))
    {
        for(int i = 0; str_1[i];i++){
            strRes[i] = str_1[i];
        }
        return 0;
    }
    else if((num1 == num2) || (num1 == num3) || (num2 == num1) || (num2 == num3) || (num3 == num1) || (num3 == num2))
    {
        for(int i = 0; str_2[i];i++){
            strRes[i] = str_2[i];
        }
        return 0;
    }
    else
    {
        for(int i = 0; str_3[i];i++){
            strRes[i] = str_3[i];
        }
        return 0;
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

void string_find(char* main,char* find,char* replace )
{
    int i=0,j=0,flag=1,start=0,finish=0;
    char temp[100];
    for(i=0; main[i]; i++)
    {
        if(main[i]!=' ')
        {
            if(flag != 0)
            {
                if(main[i] == find[j])
                {
      //              printf("main[%d] =%c   find[%d]=%c \n",i,main[i],j,find[j]);
                    j++;
                }
                else
                {
                    j=0;
                    flag =0;
                }
            }
        }
        else
        {
            if(flag == 1)
            {
                start = i-j;
                finish = i-1;
                break;
            }
            else
            {
                flag = 1;
            }

        }
    }
    //printf("start = %d finish =%d flag =%d \n",start,finish,flag);
    j=0;
    if(flag == 1)
    {
        for(i=finish+1; main[i]; i++)
        {
            temp[j] = main[i];
            main[i]=0;
            //printf("temp[%d]=%c    main[%d] =%c\n",j,temp[j],i,main[i]);
            j++;
        }
        temp[j]=0;
        j=0;
        for(i=start; replace[j]; i++)
        {
            main[i] = replace[j] ;
            //printf("replace[%d]=%c    main[%d] =%c\n",j,replace[j],i,main[i]);
            j++;
        }
        for(i,j=0; temp[j]; i++)
        {
            main[i] = temp[j] ;
            //printf("temp[%d]=%c    main[%d] =%c\n",j,temp[j],i,main[i]);
            j++;
        }
        main[i]=0;
    }
    else
    {
        return;
    }
}



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
