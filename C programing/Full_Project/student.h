#ifndef _student_H_
#define _student_H_
#include"string.h"
#include<stdio.h>
#include<stdlib.h>

typedef struct student{
    int  age ;
    char name[20];
    char grade ;

}std_t;

/*
typedef struct {
    char name[20];
    int  phone[11];
    int age;
}person_t;

struct student{
    int  age ;
    char name[20];
    char grade ;
    person_t father ;
    person_t mather ;
    int numberOfBrothers;
    person_t *brothers;

};
*/


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


#endif // _student_H_
