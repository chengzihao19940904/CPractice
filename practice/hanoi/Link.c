//
// Created by amdin on 2018/2/8.
//

#include "Link.h"


void initNode(LinkList *L)
{
    L->top = -1;
}





bool empty(LinkList L)
{
    return L.top==-1?true:false;
}


bool isFull(LinkList L)
{
    return L.top+1 == MAXSIZE?true:false;
}

element pop(LinkList *L)
{
    element  p;
    if(empty(*L))
        return INFINITY;
    p = L->data[L->top];
    L->top--;
    return p;
}


bool push(LinkList *L,element e)
{
    if(isFull(*L))
        return false;

    L->top++;
    L->data[L->top] = e;

    return true;
}

bool pop_push(LinkList *L1,LinkList *L2)
{
    element p;
    bool tmp;
    if((p = pop(L1))== INFINITY)
        return false;

    tmp = push(L2,p);
    return tmp;
}


void hanoi(int n,LinkList *L1,LinkList *L2,LinkList *L3)
{
    if(n == 1)
        pop_push(L1,L3);
    else{
        hanoi(n-1,L1,L3,L2);
        pop_push(L1,L3);
        hanoi(n-1,L2,L1,L3);
    }
}



