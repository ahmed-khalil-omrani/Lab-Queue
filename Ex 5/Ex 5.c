//
// Created by ASUS on 19/04/2024.
//
#include "Ex 5.h"
#include<string.h>
#include<assert.h>
unsigned isempty(queue q)
{
    return q.head==NULL && q.tail==NULL;
}
void enqueue(city c ,queue *q)
{
    element *e;
    e=(element *)malloc(sizeof(element));
    e->value=c;
    if(!isempty(*q))
    {
        q->tail->next=e;
        q->tail=e;
    }
    else
    {
        q->head=e;
        q->tail=e;
    }
}
void add(queue *q)
{
    city *e;
    e=(city *)malloc(sizeof(city));
    strcpy(e->name,"msakin");
    printf("give the area of the city");
    scanf("%f",&e->area);
    printf("give the number of inhabitants of the city");
    scanf("%d",&e->inh);
    enqueue(*e,q);
}
void create(queue *q)
{
    q->tail=NULL;
    q->head=NULL;
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
city first(queue q)
{
    return ((q.head)->value);
}
void display(queue q)
{
    printf("%s / %f / %d\n",first(q).name,first(q).area,first(q).inh);
}
void delete_thr(queue *q)
{
    int i;
    queue q1;
    create(&q1);
    for(i=0;i<2;i++)
    {
        enqueue(first(*q),&q1);
        dequeue(q);
    }
    dequeue(q);
    for(i=0;i<2;i++)
    {
        enqueue(first(q1),q);
        dequeue(&q1);
    }
}
