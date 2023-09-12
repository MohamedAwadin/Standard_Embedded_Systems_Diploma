int print_binary_simple(int num)
{
    int flag=0;
    printf("0b");
    for(int i=31 ; i>=0 ; i--)
    {
        if((1<<i)&num)
        {
            printf("1");
            flag = 1;
        }
        else
        {
            if(flag == 1)
            {
                printf("0");
            }
        }
    }
    printf("\n");
}
int print_binary(int num)
{
    printf("0b");
    for(int i=31 ; i>=0 ; i--)
    {
        if((1<<i)&num)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
}
int count_zeros_bits_between_ones(int num)
{
    int flag=0,c=0,max=0;
    for(int i=0 ; (i<32); i++)
    {
        if((1<<i)&num)
        {
            if(c>0)
            {
                if(c>max)
                {
                    max=c;
                }
                c=0;
            }
            flag=1;
        }
        else
        {
            if(flag==1)
            {
                c++;
            }
        }
    }
    return max;

}
int count_ones_bit(int num)
{
    int c = 0;

    for(int i=0 ; i<32 ; i++)
    {
        if((1<<i)&num)
        {
            c++;
        }
    }
    return c;
}

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
