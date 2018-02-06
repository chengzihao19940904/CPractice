//
// Created by amdin on 2018/2/5.
//

#include "DLink.h"
bool initList(DuList *list)
{

    *list = (DuList)malloc(sizeof(Node));
    if(!*list) return false;

    (*list)->next = (*list)->pre = *list;
    return true;
}