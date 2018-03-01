//
// Created by amdin on 2018/2/28.
//

#ifndef BITREE_BITREE_H
#define BITREE_BITREE_H

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
typedef char element;
typedef struct Node{
    element data;
    struct Node * LNode;
    struct Node * RNode;
}BiNodes, *BiTree;

bool initTree(BiTree * T);


bool DestroyBiTree(BiTree T);

void createBiTree(BiTree *T);


void preOrderVisit(BiTree T);

#endif //BITREE_BITREE_H
