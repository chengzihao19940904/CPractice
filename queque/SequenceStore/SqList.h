//
// Created by amdin on 2018/2/9.
//

#ifndef SEQUENCESTORE_SQLIST_H
#define SEQUENCESTORE_SQLIST_H

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#define MAXSIZE 50
#define ERR -1
typedef int element;
typedef struct Node{
    element data[MAXSIZE];
    int rear;   //记录队尾位置
    int front;  //记录队头位置
    int count;  //记录总元素数
}SqList;

SqList * initList();

bool empty(SqList L);
bool isFull(SqList L);

bool add(SqList *L,element e);
void delete(SqList *L,element * x);

void inputQueue(SqList L);

#endif //SEQUENCESTORE_SQLIST_H
