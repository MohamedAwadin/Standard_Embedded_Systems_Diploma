/*
sheet4_problem6: Write a C function to take 3 strings, “main string”, “find”, and “replace”,
                    if you find the second string inside the first one replaces it with the third and return new string,
                        if you didn’t find it return the first string without change
Main string->”ahmed mohamed ali kamel”.
Find->”ali”.
Replace->”ayman”.
Return new string ->”ahmed mohamed ayman kamel”.
*/
#include <stdio.h>

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

void string_print(char* str)
{
    int i;
    for(i=0; str[i]; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}

int main()
{
    char main[]="ahmed mohamed ayman kamel ";
    char find[]="kamel";
    char replace[]="ali";
    string_find( main, find, replace );
    string_print(main);

    return 0;
}
