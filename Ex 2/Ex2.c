//
// Created by ASUS on 18/04/2024.
//
#include"Ex2.h"

void create(queue *q)
{
    q->head=NULL;
    q->tail=NULL;
}
unsigned isempty(queue q)
{
    return ((q.head==NULL)&&(q.tail==NULL));
}
void enqueue(int v,queue *q)

{
    element *e;
    e=(element *)malloc(sizeof(element));
    e->value=v;
    e->next=NULL;
    if(!isempty(*q))
    {
        q->tail->next=e;
        q->tail=e;
    }
    else{

        q->head=e;
        q->tail=e;
    }
}
bool isprime(int f) {
    int i;
    if (f==1)
        return true;
    for (i =2; i <=(f/2); i++)
    {
        if ((f%i)==0) {
            return false;
        }
        return true;
    }
}
int first(queue q)
{
    return q.head->value;
}
void dequeue(queue *q)
{
    element *e;
    e=(element *)malloc(sizeof(element));
    assert(!isempty(*q));
    e=q->head;
    q->head=e->next;
    free(e);
    if(q->head==NULL)
    {
        q->tail=NULL;
    }
}
void display(queue q)
{
    while(!isempty(q))
    {
    printf("%d\n",first(q));
    dequeue(&q);}

}