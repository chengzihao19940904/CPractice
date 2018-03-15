//
// Created by amdin on 2018/3/15.
//

#include "tree.h"
#include "ErrorCode.h"
/*
 * 创建二叉树
 */
void PreInsert(BiTree *T)
{
    char c;
    printf("please input a char\n");
    scanf("%c",&c);
    getchar();
    if(c != '#')
    {
        *T= (BiTree)malloc(sizeof(BiNode));

        if(!*T)
            exit(ALLC);
        (*T)->data = c;
        PreInsert(&(*T)->LChild);
        PreInsert(&(*T)->RChild);
    }else{
        *T =NULL;
    }

}


void PreOrder(BiTree T)
{
    BiTree p = T;
    if(p!=NULL)
    {
        printf("%c-",p->data);
        PreOrder(p->LChild);
        PreOrder(p->RChild);
    }
}


void InOrder(BiTree T)
{
    if(T!=NULL)
    {
        InOrder(T->LChild);
        printf("%c-",T->data);
        InOrder(T->RChild);
    }
}


void AfterOrder(BiTree T)
{
    if(T!=NULL)
    {
        AfterOrder(T->LChild);
        AfterOrder(T->RChild);
        printf("%c-",T->data);
    }
}