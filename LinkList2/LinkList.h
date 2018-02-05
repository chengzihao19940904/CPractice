//
// Created by amdin on 2018/1/30.
//

#ifndef LINKLIST2_LINKLIST_H
#define LINKLIST2_LINKLIST_H



#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
typedef int Elem;
typedef struct node{
    Elem data;
    struct node * next;
}LNode,* LinkList;

LNode * initLNode(LNode *node,Elem data);
void createLinkList_byHead(LinkList * pHead,Elem data);
void createLinkList_byTail(LinkList *pHead,Elem data);
int length(LNode * list);
int findKeyByValue(LNode *list,Elem value);
bool insertNode_byPre(LinkList * lList,Elem data,Elem key);
bool * delete(LinkList *list,Elem key);

LNode * different(LinkList list1,LinkList list2);


LinkList reverse(LinkList list1);
LinkList circleLink(LinkList *LA);
LinkList circleMerge(LinkList LA,LinkList LB);

#endif //LINKLIST2_LINKLIST_H
