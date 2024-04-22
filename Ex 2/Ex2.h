//
// Created by ASUS on 18/04/2024.
//

#ifndef EX_2_EX2_H
#define EX_2_EX2_H
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <assert.h>
typedef struct
{
    int value;
    struct element *next
}element;
typedef struct
{
    element *head;
    element *tail;
}queue;
void create(queue *);
unsigned isempty(queue );
void enqueue(int ,queue *);
bool isprime(int);
void display(queue);
int first(queue);
void dequeue(queue *);
#endif //EX_2_EX2_H
