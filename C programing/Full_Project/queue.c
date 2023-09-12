#include "queue.h"

static DATA_TYPE queue[QUEUE_SIZE];
static int head=-1;
static int tail=-1;

static int in=0;
static int out=0;

static int c_flag=0;

QueueStatus_type Enqueue(DATA_TYPE data)
{
    /* Queue is full
            if tail in the position exactly before head (tail = head -1)
    */
    if((tail + 1) % QUEUE_SIZE == head)
    {
        return QUEUE_FULL;
    }
    /*
    Queue is empty
    */
    else if((tail == -1) && (head == -1))
    {
        head = 0;
        tail = 0;
    }
    /*
    Increase the position of the tail
    until (tail = size -1)
    then tail back to zero
    */
    else
    {
        tail = (tail+1) % QUEUE_SIZE;
    }
    queue[tail] = data;
    return QUEUE_DONE;
}


QueueStatus_type Enqueue2(DATA_TYPE data)
{
    if((head == -1)&&(tail == -1))
    {
        head = 0 ;
        tail = 0 ;
        queue[tail] = data ;
        return QUEUE_DONE;
    }

    if((tail + 1) == head)
    {
        return QUEUE_FULL;
    }
    if(tail < QUEUE_SIZE-1)
    {
        //queue[tail] = data ;
        tail++  ;
    }
    else if(head != 0)
    {
        tail = 0;
    }
    else
    {
        return QUEUE_FULL;
    }
    queue[tail] = data ;
    return QUEUE_DONE;
}




QueueStatus_type Dequeue(DATA_TYPE *data)
{
    /*
        check if queue is still empty

    */
    if((tail == -1) && (head == -1))
    {
        return QUEUE_EMPTY;
    }
    /*
        if not
            return the element in head index
    */
    *data = queue[head];
    //>>>>>>Detect the value of next head index
    /*
        if head == tail
            then the queue becomes empty from elements
                then both of head && tail back to begin (head == tail == -1)
    */
    if(head == tail)
    {
        head = -1;
        tail = -1;
    }
    /*
        if not (head == tail)
            then the queue have elements yo dequeue
                then dequeue until (head index == queue_size -1)
                    then tail back to zero
    */
    else
    {
        head = (head + 1) % QUEUE_SIZE ;
    }
    return QUEUE_DONE;

}


QueueStatus_type Dequeue2(DATA_TYPE *data)
{
    printf("t=%d    h =%d\n",tail,head);
    if((head == -1)&&(tail == -1))
    {
        return QUEUE_EMPTY;
    }

    *data = queue[head];


    if(head == tail)
    {
        head = -1;
        tail = -1;
        //return QUEUE_EMPTY;
    }
    else if(head < QUEUE_SIZE-1)
    {
        head ++;
    }
    else
    {
        head =0;
    }
    return QUEUE_DONE;

}

QueueStatus_type L_INqueue(DATA_TYPE data)
{
    if(in == QUEUE_SIZE)
    {
        return QUEUE_FULL;
    }
    else
    {
        queue[in] = data;
        in++;
        return QUEUE_DONE;
    }
}

QueueStatus_type L_DEqueue(DATA_TYPE *data)
{

    if(in == out)
    {
        in  = 0;
        out = 0;
        return QUEUE_EMPTY;
    }
    else
    {
        *data  = queue[out];
        out++;
        return QUEUE_DONE;
    }


}

QueueStatus_type C_INqueue(DATA_TYPE data)
{
    if(in == QUEUE_SIZE)
    {
        in = 0;
        c_flag  =1;
    }
    if((in == out) && (c_flag ==1) )
    {
        return QUEUE_FULL;
    }
    else
    {
        queue[in] = data;
        in++;
        return QUEUE_DONE;
    }
}

QueueStatus_type C_DEqueue(DATA_TYPE *data)
{

    if(out == QUEUE_SIZE)
    {
        out = 0;
        c_flag = 0;
        //return QUEUE_EMPTY;
    }
    if((in == out)&&(c_flag==0))
    {
        return QUEUE_EMPTY;
    }
    else
    {
        *data  = queue[out];
        out++;
        return QUEUE_DONE;
    }


}

void show_queue2(void)
{
    int i=0;
    printf("::t=%d    h =%d\n",tail,head);
    for(i = head ; i<=tail; i++)
    {
        printf("%d\t",queue[i]);
    }
    printf("\n");
}

void show_queue(void)
{
    int i=0;
    printf("::out=%d   in =%d\n",out,in);
    for(i = out ; i<QUEUE_SIZE; i++)
    {
        printf("%d\t",queue[i]);
    }
    printf("\n");
}


void clear_queue(void)
{
    head = -1;
    tail = -1;
}


QueueStatus_type Queue_L_INqueue(node_t**phead,int data)
{
    node_t * newNode = create_node(data);
    node_t * current = *phead ;
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
QueueStatus_type Queue_L_DEqueue(node_t**phead, int * data)
{
    node_t * current = *phead;

    if(current == 0)
    {
        return QUEUE_EMPTY;
    }
    *data = current->data;
    //printf("c = %d\n",current->next);
    *phead = current->next;

    //printf("c = %d\n",current);
    return QUEUE_DONE;
}






