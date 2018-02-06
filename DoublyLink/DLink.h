//
// Created by amdin on 2018/2/5.
//

#ifndef DOUBLYLINK_DLINK_H
#define DOUBLYLINK_DLINK_H

#include <stdbool.h>
#include <stdlib.h>
typedef int element;
typedef struct DNode{
    element data;
    struct DNode *pre,*next;
}* DuList,Node;

bool initList(DuList *list);
#endif //DOUBLYLINK_DLINK_H
