//
// Created by cheng on 2018/2/9.
//

#ifndef SEQUENCECHAIN_LINK_H
#define SEQUENCECHAIN_LINK_H
/**
 * 队列的链式存储
 *
 */
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
typedef struct Node{
    int data;
    struct Node * next;
}SqNode;

typedef struct Chain{
    SqNode  * rear;
    SqNode  * front;
}SqChain,*SqList;
bool initNode(SqChain *L);
bool empty(SqChain L);

bool add(SqChain *L,int e);

void delete(SqChain *L,int *x);
#endif //SEQUENCECHAIN_LINK_H
