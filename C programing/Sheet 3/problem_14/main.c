/*
Sheet3_problem14:Write c function to find the most repeated number in an array of char
                           (size of the array is very large) try to optimize your code.
*/

#include <stdio.h>

unsigned char  array_char(char* arr,int size)
{
    int i=0,j=0,c=0,num=0,max=0;
    printf(":array.c:num= %d\n",num);
    for( i= 0; i<size ; i++){
        for(j= 0; j<size ; j++ ){
            if (arr[j] == arr[i]){
                c++;
                printf(":array.c:c= %d arr[%d]=%d\n",c,j,arr[j]);
            }
        }
        if(c > max){
            printf(":array.c: c= %d   max=%d\n",c,max);
            max =c;
            num = arr[i];
            printf(":array.c:num= %d\n",num);
        }
        c=0;
    }
    return num;


}


int main()
{
    char arr[]={1,44,44,44,44,22,3,45,5,6,3,3,3,44,1,5,5,45,5,44,56,44,6,44,22,22,22,22,7,45,4,3,2,33,3,3,3,3,1,66,77,44,1,3,3,55,5,6,7,8,2,1,1,1,1,1,3,5,4,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("size= %d\n",size);
    int num = array_char(arr,size);
    printf("num= %d\n",num);

    return 0;
}
