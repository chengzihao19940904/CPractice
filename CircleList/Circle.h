//
// Created by amdin on 2018/2/5.
//

#ifndef CIRCLELIST_CIRCLE_H
#define CIRCLELIST_CIRCLE_H

#endif //CIRCLELIST_CIRCLE_H
typedef int Element;
typedef struct Lnode{
    Element data;
    struct Lnode *next;
}LNode, *LinkList;

LinkList merge(LinkList LA,LinkList LB);


