#include <stdio.h>
#include<stdlib.h>
#include"student.h"
#include"string.h"


std_t course[1000];
int index =0;
int op=0;
int main()
{
    int id = 0;
    printf("Welcome to Student Program \n\n");
    while(1)
    {
        printf("Number of students in database = %d\n\n",index);
        printf("Enter the number of the order which you need:\n");
        printf("1- Add Student. \n2- Edit Student. \n3- Print Studnet. \n4-Delete Student. \n5-Print School. \n6- Calling Student.\n");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            student_add();
            break;
        case 2:
            printf("Enter Student ID:\n");
            scanf("%d",&id);
            student_Edit(id);
            break;

        case 3:
            printf("Enter Student ID:\n");
            scanf("%d",&id);
            student_print(course[id]);
            break;
        case 4:
            printf("Enter Student ID:\n");
            scanf("%d",&id);
            student_delete(id);
            break;
        case 5:
            student_printArr(course,index);
            break;
        case 6:
            printf("Enter Student ID:\n");
            scanf("%d",&id);
            student_calling(id);
            break;


        }
    }

    return 0;


}
