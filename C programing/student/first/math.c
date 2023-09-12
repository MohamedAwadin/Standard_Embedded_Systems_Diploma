
int num_mult(int x,int y)
{
    int mult = 0;
    for(int i =0 ; i< x; i++)
    {
        mult = mult + y;
    }
    return mult;
}

int div_num(int x, int y)
{
    int c = 0;
    while(x>=y)
    {
        x=x-y;

        c++;
    }
    return c;
}
int modulus_num(int x, int y)
{
    int c = 0;
    while(x>=y)
    {
        x=x-y;

        c++;
    }
    return x;
}

int pow_num(int num,int pow )
{
    int res=1;
    for(int i= 0 ; i<pow; i++)
    {
        res = res * num;
    }
    return res;

}

long fact_num(int num)
{
    long res=1;
    for(int i= num ; i>0; i--)
    {
        res = res * i;
    }
    return res;

}

int check_prime(int num)
{

    if(num < 2)
    {
        return 0;
    }
    else
    {
        for(int i = 2 ; i<num ; i++)
        {
            if(num % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;

}

int perfect_square(int num)
{
    int flag=0;
    if(num > 0)
    {

        for (int i = 1; i * i <= num; i++)
        {
            //printf("%d  %d  %i\n",i,num % i, num / i);
            if (i*i == num)
            {
                flag=1;
                return flag;
                //break;
            }
        }
    }
    return flag;

}

int check_base_two(int num)
{
    int flag =0;
    if(num>0)
    {
        while(num%2 ==0)
        {
            num = num /2 ;
        }
        if(num == 1)
        {
            flag = 1;
        }
    }
    return flag;

}

int power_of_3(int num)
{
    int flag =0;
    if(num>0)
    {
        while(num%3 ==0)
        {
            num = num /3 ;
        }
        if(num == 1)
        {
            flag = 1;
        }
    }
    return flag;
}

int sum_digit(int a)
{
    int b,sum=0,c=0;
    while( a != 0)
    {
        b= a%10;
        a= a/10;
        sum = sum + b;
        c++;
    }
    return sum ;
}
int sum_between(int n1,int n2)
{
    int sum;
    if(n1>n2)
    {
        n1 = n1+n2;
        n2 = n1-n2;
        n1 = n1-n2;
    }

    sum = ((n1+n2)/2) * (n2 - n1 +1);
    return sum;

    sum = (0.5*(n2*(n2+1)))-(0.5*(n1*(n1-1)));
    return sum;


}


void swap(int* p1 , int* p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


void swap_pointers(char** pp1 , char** pp2){
   // printf(":func:&pp1 = %d pp1= %d  *pp1= %d **pp1= %d &pp2 = %d pp2= %d   *pp2= %d  **pp2= %d\n",&pp1,pp1,*pp1,**pp1,&pp2,pp2,*pp2,**pp2);
    char* temp;
    temp = *pp1;
    *pp1 = *pp2;
    *pp2= temp;
 //   printf(":func:&pp1 = %d pp1= %d  *pp1= %d **pp1= %d &pp2 = %d pp2= %d   *pp2= %d  **pp2= %d\n",&pp1,pp1,*pp1,**pp1,&pp2,pp2,*pp2,**pp2);

}


