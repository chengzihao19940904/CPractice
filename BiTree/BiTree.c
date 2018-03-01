//
// Created by amdin on 2018/2/28.
//

#include "BiTree.h"
bool initTree(BiTree * T)
{
    *T = NULL;
    return true;
}


bool DestroyBiTree(BiTree T)
{
    if(T)
    {
        if(T->LNode)
            DestroyBiTree(T->LNode);
        if(T->RNode)
            DestroyBiTree(T->RNode);

        free(T);
        return true;
    }

}

void createBiTree(BiTree * tree)
{
    BiTree * T = tree;
    char c;
    printf("please input char!\n");
    scanf("%c",&c);
    getchar();
//    scanf("%*[^\n]%*c");
    if(isspace(c))
    {
        *T = NULL;
    }else{
        *T = (BiTree)malloc(sizeof(BiNodes));
        (*T)->data = c;
        createBiTree(&(*T)->LNode);
        createBiTree(&(*T)->RNode);
    }

}


void preOrderVisit(BiTree T)
{
    BiTree tmp = T;
    if(tmp!=NULL)
    {
        printf("%c-",tmp->data);
        preOrderVisit(tmp->LNode);
        preOrderVisit(tmp->RNode);
    }
}


