/*
sheet4_problem4: Write C function to take string contain three numbers separated by space,
                    check what type of triangle this number could make, and return string
                                            "12 23 21 "
                         "Equilateral triangle "      "Isosceles triangle"
                         "Scalene triangle"              "Not triangle"
*/
#include <stdio.h>
void string_print(char* str)
{
    int i;
    for(i=0; str[i]; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}

char* string_TriangleCheck(char* str)
{
    int i=0,num=0,num1=0,num2=0,num3=0,c=0;
    char *str_1="Equilateral Triangle",*str_2="Isosceles Triangle",*str_3 ="Scalene Triangle";
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

        return str_1;
    }
    else if((num1 == num2) || (num1 == num3) || (num2 == num1) || (num2 == num3) || (num3 == num1) || (num3 == num2))
    {
        return str_2;
    }
    else
    {
        return str_3;
    }

}

int main()
{
    char nums[] = "21 21 21 ";
    char* strRes;
    strRes = string_TriangleCheck(nums);
    string_print(strRes);
  return 0;
}
