//
// Created by amdin on 2018/1/17.
//

#ifndef LINKLIST_LINKLIST_H
#define LINKLIST_LINKLIST_H

#endif //LINKLIST_LINKLIST_H
#define INCREMENT   10;
#define ERRCODE 9;
#define LIST_INIT_VAR   100;
#include <stdlib.h>
#include <stdio.h>
typedef int Element;
typedef struct lNode{
    Element data;
    struct lNode * next;
}Node,* LinkList;

void create_LinkList(LinkList *list,int list_init_var);