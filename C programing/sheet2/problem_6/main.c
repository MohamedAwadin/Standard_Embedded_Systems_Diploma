/*
Sheet2_problem6: Write c code to reverse bits in an 8-bit number
                    (149->10010101 return 169->10101001),
                    (5->00000101 return 160->10100000).
*/

#include <stdio.h>

unsigned char reverse_bits(unsigned char num)
{
    unsigned char res=0,bit=0,j=7;
    for(int i =0 ; i<8 ; i++,j--)
    {
        if((num >> i)&1)
        {
            res = res | (1 << j);

        }

    }
    return res;
}

/*
unsigned char reverse_bits(unsigned char num)
{
    unsigned char res=0,bit=0;
    for(int i =0 ; i<8 ; i++)
    {
        bit = (num >> i)&1;
        res = res | (bit << (7 - i));
    }
    return res;
}
*/
int main()
{
    unsigned char num;
    while(1)
    {

        printf("Enter the Number :\n");
        scanf("%d",&num);
        printf("Number after reverse bits = %d\n",reverse_bits(num));


    }
    return 0;
}
