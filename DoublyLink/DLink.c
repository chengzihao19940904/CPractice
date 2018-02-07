//
// Created by amdin on 2018/2/5.
//

#include "DLink.h"
bool initList(DuList *list)
{

    *list = (DuList)malloc(sizeof(Node));
    if(!*list) return false;

    (*list)->next = (*list)->pre = NULL;
    return true;
}


int getLength(DuList L)
{
    int i=1;
    if(L==NULL)
        return 0;
    while(L->next!=NULL)
    {
        L = L->next;
        i++;
    }
    return i;
}

void insert(DuList *L,element e,int i)
{
    DuList p = *L,tmp;
    if(getLength(*L) == 0)
        exit(-1);
    if(i<0||i>getLength(*L))
        exit(-1);

    while(i!=0)
    {
        i--;
        p = p->next;
    }

    tmp = (DuList)malloc(sizeof(Node));
    if(!tmp) exit(-1);

    tmp->data = e;
    tmp->next = p->next;
    p->next->pre = tmp;
    p->next = tmp;
    tmp->pre = p;




}



void insertOrder(DuList *L,element e)
{
    DuList p =*L,tmp;
    while(p->next!=NULL)
        p = p->next;

    tmp = (DuList)malloc(sizeof(Node));
    tmp->data = e;
    tmp->next = NULL;
    p->next = tmp;
    tmp->pre = p;

}

int getElem(DuList L,int pos)
{
    DuList p = L;
    int i=0;
    while(p->next!=NULL&&i!=pos)
    {
        i++;
        p = p->next;
    }

    if(i!=pos)
        return 0;
    return i;
}

bool delete(DuList *L,int pos)
{
    int i=0;
    DuList p=*L,tmp;
    if(getElem(*L,pos)==0)
        return false;

    while (i+1!=pos)
    {
        i++;
        p = p->next;
    }
    p->next = p->next->next;
    p->next->next->pre = p;
    return true;

}