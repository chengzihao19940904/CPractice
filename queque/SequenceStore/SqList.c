//
// Created by amdin on 2018/2/9.
//

#include "SqList.h"


SqList * initList()
{
    SqList * L = (SqList *)malloc(sizeof(SqList));
    if(!L)
        return NULL;

    L->front = -1;
    L->rear = -1;
    L->count = 0;
    return L;
}


bool empty(SqList L)
{
    return L.count == 0?true:false;
}

bool isFull(SqList L)
{
    return L.count == MAXSIZE?true:false;
}


bool add(SqList *L,element e)
{
    if(isFull(*L))
        return false;

    L->rear++;
    L->rear %= MAXSIZE;
    L->data[L->rear] = e;
    L->count++;
    return true;
}


void delete(SqList *L,element * x)
{
    if(empty(*L))
        return;

    L->front++;
    L->front %= MAXSIZE;
    *x = L->data[L->front];
    L->count--;
}


void inputQueue(SqList L)
{
    int i;
    int index = L.front;
    for(i=0;i<L.count;i++)
    {
        index++;
        index %= MAXSIZE;
        printf("%d\n",L.data[index]);
    }
}