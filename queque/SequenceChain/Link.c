//
// Created by cheng on 2018/2/9.
//

#include <stdlib.h>
#include "Link.h"

bool initNode(SqChain *L)
{
    L->front = (SqChain *)malloc(sizeof(SqNode));
    if(!L->front)
        return false;

    L->rear = L->front;
    L->front->next = NULL;
    return true;
}

bool empty(SqChain L)
{
   return L.front==NULL?true:false;
}


bool add(SqChain *L,int e)
{
    SqNode * p = (SqNode *)malloc(sizeof(SqNode));
    if(!p)
        return false;

    p->data = e;
    p->next = NULL;
    L->rear->next = p;
    L->rear = p;
    return true;
}


void delete(SqChain *L,int *x)
{
    if(empty(*L))
    {
        printf("队列为空！");
        return;
    }


    *x = L->front->next->data;
    SqNode * tmp =L->front->next;
    L->front->next = tmp->next;
    free(tmp);

}