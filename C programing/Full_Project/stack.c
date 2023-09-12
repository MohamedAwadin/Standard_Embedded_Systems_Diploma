
#include "stack.h"

static int stack[STACK_SIZE];
static int sp=0;



/*----------Functions  => Using Arrays -----------------------*/

stack_type* stack_A_create(int size)
{

    stack_type *s;
    s=malloc(sizeof(stack_type));
    s->size=size;
    s->sp=0;
    s->DataArray = calloc(size,sizeof(int));

    return s;


}



StackStatus_type stack_A_push(stack_type* s,int data)
{

    StackStatus_type status;

    if((s->sp)<(s->size))
    {
        s->DataArray[s->sp]=data;
        s->sp++;
        status = STACK_DONE;
    }
    else
    {
        status = STACK_FULL;
    }
    return status ;
}

StackStatus_type stack_A_pop(stack_type* s,int* pdata)
{


    StackStatus_type status;
    if((s->sp)>0)
    {
        s->sp--;
        *pdata = s->DataArray[s->sp];
        status = STACK_DONE;
    }
    else
    {
        status = STACK_EMPTY;
    }
    return status;
}

void stack_A_delete(stack_type **s)
{
    free((*s)->DataArray);
    (*s)->DataArray = 0;
    (*s)->sp = 0;
    (*s)->size = 0;
    free(*s);
    return 0;
}
//===============================================================
/*----------Functions => Using Linked List -----------------------*/




StackStatus_type stack_L_push(node_t**phead,int data)
{
    node_t*newNode  = create_node(data);
    node_t*current  = *phead;
    if(*phead == 0)
    {
        *phead=newNode;
        return STACK_DONE;
    }

    while(current->next != 0)
    {
        current=current->next;
    }
    current->next=newNode;
}

StackStatus_type stack_L_pop(node_t **head, int * data)
{
    node_t*current  = *head;
    if(current == 0){
        return STACK_EMPTY;
    }
    if(current->next == 0)
    {
        *data = current->data;
        *head= 0;
        return STACK_DONE;
    }

    while(current->next->next != 0)
    {
        current=current->next;
    }
    *data = current->next->data;
    current -> next = 0;
    return STACK_DONE;
}


