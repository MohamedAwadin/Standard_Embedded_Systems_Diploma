
#ifndef _list_H_
#define _list_H_


typedef struct node{
    int data;
    struct node* next;
}node_t;
//===================
typedef struct DoubleNode{
    int data;
    struct DoubleNode* next;
    struct DoubleNode* prev;
}Dnode_t;

typedef struct{
    Dnode_t * Head;
    Dnode_t * Tail;
    int       size;
}Dlist_t;

typedef Dlist_t* DLIST;

//====================Prototype Function= => Linked List Functions=========
node_t*create_node(int data);
void List_addNodeToLast(node_t**phead,int data);
void List_addNodeToFirst(node_t**phead,int data);
void List_printData(node_t*head);
void List_printDataReverse(node_t*head);
int List_InsertAfter(node_t *head,int prevData, int nextData);
int List_editNode(node_t*head,int oldData, int newData);
int List_RemoveNode(node_t**head,int oldData);

//====================Prototype Function= => Double Linked List Functions=========

Dlist_t * Create_DoubleList(void);
Dnode_t*create_Dnode(int data);
int DList_InsertAfter(Dlist_t *Dlist,int prevData, int newData);


#endif // _list_H_



