#ifndef _stack_H_
#define _stack_H_

#include "list.h"

#define STACK_SIZE 5
#define DATA_TYPE  int



typedef struct {
    int size;
    int sp;
    int *DataArray;
}stack_type;

typedef stack_type* STACK;




/*
#define STACK_FULL    0
#define STACK_DONE    1
#define STACK_EMPTY  -1
*/
typedef enum{
    STACK_FULL,
    STACK_EMPTY=0,
    STACK_DONE
}StackStatus_type;

/*----------Function Prototypes => Using Linked List -----------------------*/
StackStatus_type stack_L_push(node_t**phead,int data);
StackStatus_type stack_L_pop(node_t**phead , int * data);




/*----------Function Prototypes => Using Arrays -----------------------*/
StackStatus_type stack_A_push(stack_type* s,int data);
StackStatus_type stack_A_pop(stack_type* s,int* pdata);

stack_type* stack_A_create(int size);
void stack_A_delete(stack_type **s);




#endif // _stack_H_
