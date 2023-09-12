

#include "student.h"



void student_print(std_t s)
{
    printf("Name : ");
    string_print(s.name);
    printf("Age : %d \nGrade : %c\n",s.age,s.grade);
    printf("===================\n");
}

void student_printByRef(const std_t *ps)
{
    printf("Name : ");
    string_print((*ps).name);
    printf("Age : %d \nGrade : %c\n",(*ps).age,(*ps).grade);
    printf("---------------------\n");
}

void student_printArr(const std_t *ps, int size)
{
    printf("    Name      Age      Grade\n");
    int i = 0;
    for(i = 0 ; i<size ; i++)
    {
        //printf("    %s   |   %d   |   %c\n",(*(ps+i)).name,(*(ps+i)).age , (*(ps+i)).grade );
        //printf("    %s   |   %d   |   %c\n",(ps+i) ->name,(ps+i) -> age , (ps+i)->grade );
        printf("%10s   |   %d   |   %c\n",ps[i].name,ps[i].age, ps[i].grade );
        // ps[i] ... *(ps+i)
        printf("-----------------------\n");
    }


}


void student_scan_NoReturn(std_t *ps)
{
    printf("Enter Name: ");
    fflush(stdin);
    string_scan(ps -> name,20);

    printf("Enter Age: ");
    fflush(stdin);
    scanf("%d",&(ps -> age));

    printf("Enter Grade: ");
    fflush(stdin);
    scanf("%c",&(ps -> grade));

}
struct student student_scan_WithReturn(void)
{
    std_t s1;

    printf("Enter Name: ");
    fflush(stdin);
    string_scan(s1.name,20);

    printf("Enter Age: ");
    fflush(stdin);
    scanf("%d",&(s1.age));

    printf("Enter Grade: ");
    fflush(stdin);
    scanf("%c",&(s1.grade));
/*
    printf("Enter number of brothers : ");
    scanf("%d",&(s1.numberOfBrothers));
    s1.brothers = (person_t*)malloc(s1.numberOfBrothers*sizeof(person_t));
*/
    return s1;
}

std_t student_scan_dynamic(void)
{
    std_t*ps = (std_t*)malloc(sizeof(std_t));
    printf("Enter Name: ");
    fflush(stdin);
    string_scan(ps -> name,20);

    printf("Enter Age: ");
    fflush(stdin);
    //scanf("%d",&(ps -> age));
    scanf("%d",&((*ps).age));

    printf("Enter Grade: ");
    fflush(stdin);
    scanf("%c",&(ps -> grade));

    return *ps;

}

void student_scan_All(std_t *arr,int size)
{

    int i = 0;
    for(i=0; i<size ; i++)
    {


        printf("Enter Student %d Name: ",i);
        fflush(stdin);
        string_scan(arr[i].name,20);

        printf("Enter Student %d Age: ",i);
        fflush(stdin);
        scanf("%d",&(arr[i].age));

        printf("Enter Student %d Grade: ",i);
        fflush(stdin);
        scanf("%c",&(arr[i].grade));


    }

}

int student_FindMaxAge(std_t *arr,int size){
    int i =0, max=0,index=0 ;
    for(i = 0 ;i<size ; i++){
        if((arr[i].age) > max){
            max = arr[i].age;
            index = i;

        }
    }
    //*rmax = max;
    return index;
}

int student_searchByName(std_t *arr,int size,char *s_name){
    int i =0;
    for(i = 0 ;i<size ; i++){
        if(string_CompareNotCaseSens(arr[i].name,s_name)==1){
            return i;
        }
    }
    return -1;
}


void studentAGE_bubble_sorting_ascending(std_t *arr,int size)
{
    int i=0,j=0,c=0 ;
    struct student temp;
    for(i=0 ; i< size ; i++)
    {

        for(j =0 ; j< size-1-i ; j++)
        {
            c++;
            if(arr[j].age > arr[j+1].age)
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    //printf("c = %d size = %d\n",c,size);

}

void student_swap(std_t *ps1,std_t*ps2){
    std_t temp;
    temp = *ps1;
    *ps1 = *ps2;
    *ps2 = temp;
}
