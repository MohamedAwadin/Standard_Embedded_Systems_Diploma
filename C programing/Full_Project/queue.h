#ifndef _queue_H_
#define _queue_H_
#include"list.h"

/*----------Configrations-----------------------*/
typedef int DATA_TYPE;

#define QUEUE_SIZE 5
/*----------DON'T CHANGE IT -----------------------*/

typedef enum{
    QUEUE_FULL,
    QUEUE_EMPTY=0,
    QUEUE_DONE
}QueueStatus_type;

/*
#define QUEUE_FULL    0
#define QUEUE_DONE    1
#define QUEUE_EMPTY  -1
*/
/*----------Function Prototypes -----------------------*/
QueueStatus_type Enqueue(DATA_TYPE data);
QueueStatus_type Dequeue(DATA_TYPE *data);

QueueStatus_type Enqueue2(DATA_TYPE data);
QueueStatus_type Dequeue2(DATA_TYPE *data);

QueueStatus_type C_INqueue(DATA_TYPE data);
QueueStatus_type C_DEqueue(DATA_TYPE *data);

void show_queue(void);

void clear_queue(void);

QueueStatus_type Queue_L_INqueue(node_t**phead,int data);
QueueStatus_type Queue_L_DEqueue(node_t**phead , int * data);



#endif // _queue_H_
