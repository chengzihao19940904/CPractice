//
// Created by amdin on 2018/2/8.
//

#ifndef SHEDLIST_SQSTACK_H
#define SHEDLIST_SQSTACK_H
#define MAXSIZE 100

#include <stdbool.h>
typedef int element;
typedef struct Node{
    element data[MAXSIZE];
    int top;
}SqStack;

typedef struct DoubleNode{
    element data[MAXSIZE];
    int top[2];
}DoubleSqStack;

void initStack(SqStack *L);
bool empty(SqStack L);


bool isFull(SqStack L);


bool push(SqStack *L,element e);


element pop(SqStack *L);

void DInitStack(DoubleSqStack *DL);

bool DIsFull(DoubleSqStack *DL);


bool DPush(DoubleSqStack *L,element e,int type);

#endif //SHEDLIST_SQSTACK_H
