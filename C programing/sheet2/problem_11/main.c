/*
Sheet2_problem11: Given two integers: L and R, Find the maximal value of A xor B where A and B satisfy the condition L =< A <= B <= R Constrains: 1 <= L <= R <= 1000
Input format: the input contains two lines first line contains L and next line contains R.
Output format: The maximum value of A xor B.
*/

#include <stdio.h>

int max_xor_value(int n, int k)
{
    int _xor;
    int max_xor=0;
    if (k>n){
        k = k + n;
        n = k - n;
        k = k - n;
    }
    for(int i =k ; i<=n; i++)
    {
        for(int j = i ; j<=n ; j++)
        {

            _xor = i ^ j;
            printf("%d ^ %d = %d\n",i,j,_xor);
            if((_xor > max_xor)&&(_xor<k))
            {
                max_xor = _xor;
            }

        }

    }
    return max_xor;
}

int main()
{
    int n,k;

    while(1)
    {


        printf("Enter two limit Number :\n");
        scanf("%d",&n);//15
        scanf("%d",&k);//10
        printf("Maximum XOR value= %d\n",max_xor_value(n,k));




    }
    return 0;
}
