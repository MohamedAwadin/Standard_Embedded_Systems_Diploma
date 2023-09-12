/*
sheet5_problem9 : Write a c function to swap the two bytes of a short int (n=0xFE20 ->0X20FE)
                                        use 2 methods

*/

#include <stdio.h>
#include <stdlib.h>


unsigned char swap_nipples( unsigned char num){
    unsigned char nR,nL;
    nR = num & 0x0f;
    printf("nR %d\n",nR);
    nL = num & 0xf0;
    printf("nL %d\n",nL);
    nR = nR << 4;
    printf("nR %d\n",nR);
    nL = nL>>4;
    printf("nL %d\n",nL);

    num = nR | nL;
    printf("num = %d\n",num);

}

unsigned short swap_nipples_2( unsigned short num){
    unsigned short nR,nL;
    nR = num & 0x00ff;
    //printf("nR %d\n",nR);
    nL = num & 0xff00;
    //printf("nL %d\n",nL);
    nR = nR << 8;
    //printf("nR %d\n",nR);
    nL = nL>>8;
    //printf("nL %d\n",nL);

    num = nR | nL;
    //printf("num = %04X\n",num);
    return num;

}


int main()
{
    //unsigned char num = 43;
    //unsigned short num = 9910;
    unsigned short num = 0xFE20;
    //printf("Before : %d\n",num);
    printf("NUM Before : 0x%04X\n",num);
    num = swap_nipples_2(num);
    //printf("After : %d\n",num);
    printf("NUM AFTER  : 0x%04X\n",num);

    return 0;
}
