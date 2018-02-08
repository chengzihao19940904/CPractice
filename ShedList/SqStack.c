//
// Created by amdin on 2018/2/8.
//

#include "SqStack.h"
void initStack(SqStack *L)
{
    L->top =-1;
}


/**
 * 栈是否为空
 * @param L
 * @return
 */
bool empty(SqStack L)
{
    return L.top==-1?true:false;
}

/**
 * 是否栈满
 * @param L
 * @return
 */
bool isFull(SqStack L)
{
    return L.top==MAXSIZE-1?true:false;
}

bool push(SqStack *L,element e)
{
    if(isFull(*L))
        return false;

    (*L).top++;
    (*L).data[(*L).top] = e;

    return true;
}


element pop(SqStack *L)
{
    element tmp;
    if(empty(*L))
       return false;
    tmp = (*L).data[(*L).top];
    (*L).top--;
    return tmp;
}


void DInitStack(DoubleSqStack *DL)
{
    (*DL).top[0] = -1;
    (*DL).top[1] = MAXSIZE-1;

}

/**
 * 两栈共享顺序存储判定是否满栈
 * @param DL
 * @return
 */
bool DIsFull(DoubleSqStack *DL)
{
    return (*DL).top[0] == (*DL).top[1]?true:false;
}


bool DPush(DoubleSqStack *L,element e)
{

}

