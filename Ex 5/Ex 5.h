//
// Created by ASUS on 19/04/2024.
//

#ifndef EX_5_EX_5_H
#define EX_5_EX_5_H
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char *name;
    float area;
    int inh;
}city;
typedef struct
{
    city value;
    struct element *next;
}element;

typedef struct
{
    element *head;
    element *tail;
}queue;
unsigned isempty(queue);
void enqueue(city ,queue *);
void create(queue *);
void add_ms(queue *);
void add(queue *);
/*city first(queue);*/
void display(queue *);
void dequeue(queue *);
void delet_thr(queue *);
#endif //EX_5_EX_5_H