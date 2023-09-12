#include "list.h"


node_t*create_node(int data)
{
    node_t* newNode = malloc(sizeof(node_t));
    //printf("::%d\n",newNode);
    newNode->data=data;
    newNode->next = 0;
    return newNode;
}

void List_addNodeToLast(node_t**phead,int data)
{
    node_t*newNode  = create_node(data);
    node_t*current  = *phead;
    if(*phead == 0)
    {
        *phead=newNode;
        return ;
    }

    while(current->next != 0)
    {
        current=current->next;
    }
    current->next=newNode;
}

void List_addNodeToFirst(node_t**phead,int data)
{
    node_t*newNode  = create_node(data);
    newNode->next   = *phead;
    *phead=newNode;
}

void List_printData(node_t*head)
{

    node_t*current1  = head;
    node_t*current2  = head;
    while(current1 != 0)
    {
        printf("%d\t",current1->data);
        current1=current1->next;
        if((current2!=0)&&(current2->next!=0)){
                current2 = current2->next->next;

        }
        if(current1 == current2){
            return;
        }
    }

    printf("\n");

}


int List_editNode(node_t*head,int oldData, int newData)
{

    node_t*current  = head;
    while(current != 0)
    {

        //if(*current.data == oldData)
        if(current->data == oldData)
        {
            current->data=newData;
            return 1;
        }
        current=current->next;
    }
    return 0;


}

int List_InsertAfter(node_t *head,int prevData, int nextData)
{

    node_t*current  = head;

    if(head == 0)
    {
        return 0;
    }
    node_t*newNode  = create_node(nextData);
    while(current != 0)
    {

        if(current->data == prevData)
        {
            newNode->next=current->next;
            current->next=newNode;
            return 1;
        }
        current=current->next;
    }
    return 0;
}


int List_RemoveNode(node_t**head,int oldData)
{

    node_t*current  = *head;
    node_t*temp  = *head;
    if(*head == 0)
    {
        return 0;
    }
    while(current != 0)
    {

        if((current->data == oldData)&&(temp->data == oldData))
        {
            *head = 0;
            return 1;
        }
        else if(current->data == oldData)
        {
            temp->next=current->next;
            return 1;
        }
        temp   = current;
        current=current->next;
    }
    return 0;



}




void List_printDataReverse(node_t*head)
{
    int l = 0,i = 0;
    node_t*current  = head;
    while(current->next != 0)
    {
        l++;
        current=current->next;
    }



    int * arrdata = malloc(l*sizeof(int));

    current = head;

    while(current != 0)
    {

        arrdata[i] = current->data;

        i++;
        current=current->next;
    }

    for(i = l ; i>=0 ; i--)
    {
        printf("%d\t",arrdata[i]);
    }
    printf("\n");

}

void List_printDataReverse2(node_t*head)
{
    int l = 0,i = 0;
    node_t*current  = head;
    node_t* arr[1000];
    while(current!= 0)
    {
        current=current->next;
        arr[i]=current;
        i++;
    }
    while(i>=0){
        printf("%d\t",arr[i]->data);
        i--;
    }
    printf("\n");



    int * arrdata = malloc(l*sizeof(int));



}

//====================Functions= => Double Linked List Functions=========

Dlist_t * Create_DoubleList(void)
{
    Dlist_t * DL;
    DL = malloc(sizeof(Dlist_t));
    DL->Head = 0;
    DL->Tail = 0;
    DL->size = 0;
    return DL;
}

Dnode_t*create_Dnode(int data)
{
    Dnode_t* newNode = malloc(sizeof(Dnode_t));
    newNode->data=data;
    newNode->next = 0;
    newNode->prev = 0;
    return newNode;
}


int DList_InsertAfter(Dlist_t *Dlist,int prevData, int newData)
{


    Dnode_t * current = Dlist->Head;

    if(Dlist->Tail->data == prevData){
        Dnode_t * newNode = create_Dnode(newData);
        newNode->prev = Dlist ->Tail;
        Dlist ->Tail = newNode;
        newNode->prev->next=newNode;
        return 1;
    }

    while(current != 0)
    {

        if(current -> data == prevData )
        {
            Dnode_t * newNode = create_Dnode(newData);
            current->next->prev = newNode;
            newNode->prev=current;
            newNode->next=current->next;
            current->next=newNode;
            Dlist->size++;
            return 1 ;
        }
        current = current->next;

    }
    return 0;

}
void DList_printData(Dlist_t *Dlist)
{

    Dnode_t*current  = Dlist->Head;

    while(current != 0)
    {

        printf("%d\t",current->data);
        current=current->next;
    }

    printf("\n");

}

