

#include "student.h"



void student_print(std_t s)
{
    printf("Name : ");
    string_print(s.name);
    printf("ID : %d \nAge : %d \nGrade : %c\n Phone Number : %lld \n",s.id,s.age,s.grade,s.number);
    printf("===================\n");
}

void student_printByRef(const std_t *ps)
{
    printf("Name : ");
    string_print((*ps).name);
    printf("ID : %d \nAge : %d \nGrade : %c\n Phone Number : %lld \n",(*ps).id,(*ps).age,(*ps).grade,(*ps).number);
    printf("---------------------\n");
}

void student_printArr(const std_t *ps, int size)
{
    printf("ID     Name       Age      Grade      Phone\n");
    int i = 0;
    for(i = 0 ; i<size ; i++)
    {
        //printf("    %s   |   %d   |   %c\n",(*(ps+i)).name,(*(ps+i)).age , (*(ps+i)).grade );
        //printf("    %s   |   %d   |   %c\n",(ps+i) ->name,(ps+i) -> age , (ps+i)->grade );
        printf("  %d   |%10s   |   %d   |   %c   |   %lld\n",ps[i].id,ps[i].name,ps[i].age, ps[i].grade,ps[i].number );

        // ps[i] ... *(ps+i)
        printf("-----------------------\n");
    }


}


void student_scan_NoReturn(std_t *ps)
{
    ps -> id = index;
    printf("Enter Name: ");
    fflush(stdin);
    string_scan(ps -> name,20);

    printf("Enter Age: ");
    fflush(stdin);
    scanf("%d",&(ps -> age));

    printf("Enter Grade: ");
    fflush(stdin);
    scanf("%c",&(ps -> grade));

    printf("Enter Phone Number: ");
    fflush(stdin);
    scanf("%lld",&(ps ->number));

}


void student_scan_All(std_t *arr,int size)
{

    int i = 0;
    for(i=0; i<size ; i++)
    {
        arr[i].id = index;


        printf("Enter Student %d Name: ",i);
        fflush(stdin);
        string_scan(arr[i].name,20);

        printf("Enter Student %d Age: ",i);
        fflush(stdin);
        scanf("%d",&(arr[i].age));

        printf("Enter Student %d Grade: ",i);
        fflush(stdin);
        scanf("%c",&(arr[i].grade));

        printf("Enter Student %d Phone Number: ",i);
        fflush(stdin);
        scanf("%lld",&(arr[i].number));

        index++;
    }

}

int student_FindMaxAge(std_t *arr,int size)
{
    int i =0, max=0,index=0 ;
    for(i = 0 ; i<size ; i++)
    {
        if((arr[i].age) > max)
        {
            max = arr[i].age;
            index = i;

        }
    }
    //*rmax = max;
    return index;
}

int student_searchByName(std_t *arr,int size,char *s_name)
{
    int i =0;
    for(i = 0 ; i<size ; i++)
    {
        if(string_CompareNotCaseSens(arr[i].name,s_name)==1)
        {
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

void student_swap(std_t *ps1,std_t*ps2)
{
    std_t temp;
    temp = *ps1;
    *ps1 = *ps2;
    *ps2 = temp;
}
//-----------------------
void student_add(void)
{
    printf("New Student With index = %d\n",index);
    student_scan_NoReturn(&course[index]);
    index++;
}
void student_Edit(int id)
{
    printf("Edit Data of Student With ID = %d\n",id);
    printf("Enter Name: ");
    fflush(stdin);
    string_scan(course[id].name,20);

    printf("Enter Age: ");
    fflush(stdin);
    scanf("%d",&(course[id].age));

    printf("Enter Grade: ");
    fflush(stdin);
    scanf("%c",&(course[id].grade));

    printf("Enter Phone Number: ");
    fflush(stdin);
    scanf("%lld",&(course[id].number));

    //student_scan_NoReturn(&course[id]);

}
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
void student_calling(int id)
{
    int i = 0,f=0;
    while(f<=5)
    {
        //printf("\33\r");
        printf("Calling %lld ",course[id].number);
        for(i=0; i<=3; i++)
        {
            printf(".");
            delay(1);
        }
        delay(2);
        //printf("\33\r");
        printf("\n");
        delay(2);
        f++;

    }
    printf("%s did't answer\n",course[id].name);
    delay(2);
}

void student_delete(int id){
    int i = 0 ;
    for(i = id ; i<index ; i++){
        student_swap(&course[i],&course[i+1]);
        course[i].id--;
    }
    index--;
}

