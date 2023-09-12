#include <stdio.h>
/*
Sheet3_problem15: Write a C Function that swaps two pointers.
*/
/* //*****WRONG*****#
void swap_pointers(int* p1 , int* p2){
    printf(":func:p1= %d  *p1= %d  p2= %d  *p2= %d\n",p1,*p1,p2,*p2);
    int *temp;
    temp = p1;
    p1 = p2;
    p2= temp;
    printf(":func:p1= %d  *p1= %d  p2= %d  *p2= %d\n",p1,*p1,p2,*p2);


}*/

void swap_pointers(int** pp1 , int** pp2){
    printf(":func:&pp1 = %d pp1= %d  *pp1= %d **pp1= %d &pp2 = %d pp2= %d   *pp2= %d  **pp2= %d\n",&pp1,pp1,*pp1,**pp1,&pp2,pp2,*pp2,**pp2);
    int* temp;
    temp = *pp1;
    *pp1 = *pp2;
    *pp2= temp;
    printf(":func:&pp1 = %d pp1= %d  *pp1= %d **pp1= %d &pp2 = %d pp2= %d   *pp2= %d  **pp2= %d\n",&pp1,pp1,*pp1,**pp1,&pp2,pp2,*pp2,**pp2);

}

/*
void swap_pointers(char* pp1 , char* pp2){
    printf(":func:&pp1= %d pp1= %d  *pp1= %d &pp2= %d pp2= %d  *pp2= %d\n",&pp1,pp1,*pp1,&pp2,pp2,*pp2);
    char* temp;
    temp = *pp1;
    printf(":func:temp=%d \n",temp);
    *pp1 = *pp2;
    *pp2= temp;
    printf(":func:&pp1= %d pp1= %d  *pp1= %d &pp2= %d pp2= %d  *pp2= %d\n",&pp1,pp1,*pp1,&pp2,pp2,*pp2);

}
*/
int main()
{
    int x= 5,y=7;
    char* p1 = &x,* p2 = &y;
    printf("x = %d , y = %d &p1= %d  p1= %d  *p1= %d &p2= %d p2= %d  *p2= %d\n",x,y,&p1,p1,*p1,&p2,p2,*p2);
    swap_pointers(&p1,&p2);
    printf("x = %d , y = %d &p1= %d  p1= %d  *p1= %d &p2= %d p2= %d  *p2= %d\n",x,y,&p1,p1,*p1,&p2,p2,*p2);
    return 0;
}
