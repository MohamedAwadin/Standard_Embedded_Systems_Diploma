/*
:video-14-sheet2:1.13:
sheet3_bouns: find longest sequence of numbers in array, and the frist element in this sequence
            arr[]={1,2,3,4,7,8,9,12,13,15,16,17,18,19,25,26}
            longest sequence = 5;
            frist element in longest sequence = 15;
            index of frist element in longest sequence = 9;
            {1,2,3,7,8,9,12,13,15,16,17,18,19,25,26};
*/

#include <stdio.h>
/*
int array_longest_sequnce(int*arr,int size){
    int i=0,c=arr[0],c1=0,max=0,flag=0; //c=1
    for(i=0;i<size;i++){
        if(arr[i]==c){
            printf(":array.c:c1 = %d , c=%d, arr[%d]=%d\n",c1,c,i,arr[i]);
            c1++;
        }
        else{
            flag =1;
            printf(":array.c:Flag = %d \n",flag);
        }
        if(flag==1){
            if(c1>max){
                printf(":array.c:c1 = %d , max=%d\n",c1,max);
                max =c1;
                c1 = 0;
            }
            flag=0;
            c = arr[i]-1;
            printf(":array.c:Flag = %d, c = %d\n",flag,c);
            i=i-1;
        }
        c++;
        printf(":array.c:c = %d, i = %d\n",c,i);
    }
    printf(":array.c:max = %d \n",max);
    return max;

}
*/
int array_longest_sequnce(int*arr,int size,int* pfrist,int* pindex)
{
    int i=0,c=1,max=0;
    for(i=0; i<size-1; i++)
    {
        //printf(":;:array.c:c = %d, arr[%d]+1 == arr[%d]=%d=%d \n",c,i,i,arr[i]+1,arr[i+1]);
        if(arr[i]+1 == arr[i+1]){
            c++;
            //printf(":array.c:c = %d, arr[%d]+1 == arr[%d]=%d=%d \n",c,i,i,arr[i]+1,arr[i+1]);
        }
        else{
            *pfrist = arr[i-1]-c-1;
            *pindex = i-c-1;
            c=1;
            //printf(":array.c:c = %d \n",c);
        }
        if(c>max){
            max= c;
            //printf(":array.c:max = %d \n",max);
        }
    }
    return max;

}

void array_print(int* arr,int size) //(int* p,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        //printf("%d  %d",p[i],*(p+1));
        //printf("%d # %d\n",arr[i],*(arr+1));
        printf("%3d  ",arr[i]);
    }
    printf("\n");
}

int array_scan(int* arr,int MaxSize)
{
    int i,n;
    printf(":array_scan:Enter total numbers (not more than %d):",MaxSize);
    scanf("%d",&n);
    for(i = 0 ; (i<n)&&(i<MaxSize); i++)
    {
        scanf("%d",&arr[i]);
        //scanf("%d",arr+i);
        //scanf("%d",&*(arr+i));
    }
    return i;
}

int main()
{
    int arr[]= {1,2,3,4,7,8,9,12,13,15,16,17,18,19,25,26};
    int size = sizeof(arr)/sizeof(arr[0]);
    array_print(arr,size);
    int max,index,frist;
    max = array_longest_sequnce(arr,size,&frist,&index );
    printf("max = %d, index = %d, frist = %d\n",max,index,frist);

    return 0;
}
