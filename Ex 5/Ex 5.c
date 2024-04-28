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
void add_ms(queue *q)
{
    city *e;
    e=(city *)malloc(sizeof(city));
    e->name="msakin";
    printf("give the area of msseken");
    scanf("%f",&e->area);
    printf("give the number of inhabitants of msseken");
    scanf("%d",&e->inh);
    enqueue(*e,q);
}
void add(queue *q)
{
    city *e;
    char *nam;
    nam=(char *)malloc(sizeof(char));
    e=(city *)malloc(sizeof(city));
    printf("give the name of the city");
    scanf("%s",nam);
    e->name=nam;
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
/*city first(queue q)
{
    return ();
}*/
void display(queue *q)
{
    printf("%s / %f / %d\n",q->head->value.name,q->head->value.area,q->head->value.inh);
    dequeue(q);
}
void delet_thr(queue *q)
{
    int i;
    queue q1;
    create(&q1);
    for(i=0;i<2;i++)
    {
        enqueue(q->head->value,&q1);
        dequeue(q);
    }
    dequeue(q);
    for(i=0;i<2;i++)
    {
        enqueue(q1.head->value,q);
        dequeue(&q1);
    }
}
