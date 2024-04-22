//
// Created by ASUS on 18/04/2024.
//

#ifndef EX_3_EX3_H
#define EX_3_EX3_H
#include<stdlib.h>
#include<assert.h>
#include <stdio.h>
typedef struct
{
    int value;
    struct element *next;
}element;
typedef struct
{
    element *head;
    element *tail;
}queue;
void create(queue *);
void enqueue(int ,queue *);
unsigned isempty(queue);
void dequeue(queue *);
void display(queue ,int );
int first(queue);
#endif //EX_3_EX3_H
