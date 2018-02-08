//
// Created by amdin on 2018/2/8.
//

#ifndef HANOI_LINK_H
#define HANOI_LINK_H

#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
typedef int element;
typedef struct node{
    element data;
    struct node * next;
}Node, *LinkList;
bool initNode(LinkList *L,element e);
element pop(LinkList *L);
bool push(LinkList *L,element e);

/**
 * 先从L1中让置顶元素出栈，然后在放入L2中
 * @param L1
 * @param L2
 * @return
 */
bool pop_push(LinkList *L1,LinkList *L2);

/**
 * 将X的数据通过Y转到Z上
 * @param X
 * @param Y
 * @param Z
 */
void hanoi(LinkList *X,LinkList *Y,LinkList *Z);
#endif //HANOI_LINK_H
