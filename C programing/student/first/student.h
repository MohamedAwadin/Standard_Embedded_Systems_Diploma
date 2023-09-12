#ifndef _student_H_
#define _student_H_
#include"string.h"
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
void delay(int number_of_seconds);

typedef struct student{
    int id;
    int  age ;
    char name[20];
    char grade ;
    long long number;

}std_t;

extern std_t course[1000];
extern int index;



void student_print(std_t s);
void student_printByRef(const std_t *ps);
void student_printArr(const std_t *ps, int size);

void student_scan_NoReturn(std_t *ps);
void student_scan_All(std_t *arr,int size);
struct student student_scan_WithReturn(void);
std_t student_scan_dynamic(void);
int student_FindMaxAge(std_t *arr,int size);
int student_searchByName(std_t *arr,int size,char *s_name);
void studentAGE_bubble_sorting_ascending(std_t *arr,int size);


//------------------------
void student_add(void);
void student_Edit(int id);
void student_calling(int id);

#endif // _student_H_
