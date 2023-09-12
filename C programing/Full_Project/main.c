#include <stdio.h>
#include<stdlib.h>
#include "list.h"
#include "stack.h"




int main()
{
    node_t * L1 = 0;

    L1 = create_node(1);
    List_addNodeToLast(&L1,2);
    List_addNodeToLast(&L1,3);
    List_addNodeToLast(&L1,4);
    List_addNodeToLast(&L1,5);
    List_addNodeToLast(&L1,6);
    List_addNodeToLast(&L1,7);
    List_addNodeToLast(&L1,8);
    List_addNodeToLast(&L1,9);
    List_addNodeToLast(&L1,10);
    List_addNodeToLast(&L1,11);
    List_addNodeToLast(&L1,12);
    List_addNodeToLast(&L1,13);
    List_printData(L1);
    L1->next->next->next->next->next->next=L1->next->next->next;
    List_printData(L1);

    /*
    DLIST DL1 = 0;

    DL1 = Create_DoubleList();

*/



/*
    node_t * Q1 = 0;
    //Q1 = create_node(1);
    //Queue_L_INqueue(&Q1,2);

    int x,y,op;
    while(1)
    {
        printf("Enter 1 TO Push number, or Enter 2 TO POP number, or Enter 3 TO Show Stack\n");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            printf("Enter Number to Push :\n");
            scanf("%d",&x);
            Queue_L_INqueue(&Q1,x);
            printf("Number %d is pushed to Queue\n",x);

            break;
        case 2:
            if(Queue_L_DEqueue(&Q1,&y)==1)
            {
                printf("Number %d is pop from Queue\n",y);
            }
            else
            {
                printf("Queue EMPTY\n");
            }
            break;
        case 3 :
            List_printData(Q1);
            break;
        }
    }


*/

    /*
    node_t * L1 = 0;
    node_t * L2 = 0;

    L1 = create_node(50);
    List_addNodeToLast(&L1,100);
    List_addNodeToLast(&L1,150);
    List_addNodeToLast(&L1,200);
    List_addNodeToLast(&L1,250);
    List_addNodeToLast(&L1,300);
    List_addNodeToLast(&L1,350);
    List_printData(L1);
    List_RemoveNode(&L1,200);
    List_printData(L1);
    List_RemoveNode(&L1,350);
    List_printData(L1);
    List_RemoveNode(&L1,300);
    List_printData(L1);
    List_RemoveNode(&L1,250);
    List_printData(L1);
    List_RemoveNode(&L1,200);
    List_printData(L1);
    List_RemoveNode(&L1,150);
    List_printData(L1);
    List_RemoveNode(&L1,100);
    List_printData(L1);
    List_RemoveNode(&L1,50);
    List_printData(L1);
    List_RemoveNode(&L1,50);
    List_printData(L1);

    */
    return 0;
}
