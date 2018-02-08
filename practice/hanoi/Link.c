//
// Created by amdin on 2018/2/8.
//

#include "Link.h"


bool initNode(LinkList *L,element e)
{
    *L = (LinkList)malloc(sizeof(Node));
    if(!*L)
        return false;
    (*L)->data = e;
    (*L)->next = NULL;
    return true;
}

element pop(LinkList *L)
{
    LinkList tmp=(*L)->next;
    element p;

    if(tmp==NULL)
        return INFINITY;
    p = tmp->data;
    (*L)->next = tmp->next;
    (*L)->data--;
    free(tmp);
    return p;
}


bool push(LinkList *L,element e)
{
    LinkList p;
    bool b;
    b = initNode(&p,e);
    if(!b)
        return false;
    p->data = e;
    p->next = (*L)->next;
    (*L)->next = p;
    (*L)->data++;
    return true;
}


bool pop_push(LinkList *L1,LinkList *L2)
{
    element tmp;
    bool bl;
    tmp = pop(*L1);
    if(tmp ==INFINITY)
        return false;
    bl = push(*L2,tmp);
    return bl;

}


void hanoi(LinkList *X,LinkList *Y,LinkList *Z)
{
    LinkList *tmp;
    if((*X)->next==NULL)
    {
        pop_push(*X,*Z);
    }else{
        tmp = (*X)->next;
        hanoi(tmp,*Y,*Z);
        pop_push(*X,*Z);
        hanoi(*Y,*X,*Z);
    }
}


