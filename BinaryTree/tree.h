//
// Created by amdin on 2018/3/15.
//

#ifndef BINARYTREE_TREE_H
#define BINARYTREE_TREE_H
#define MaxData 15

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    char data;
    struct Node *  LChild;
    struct Node *  RChild;
}BiNode,*BiTree;

/**
 * 创建二叉树
 * @param T
 */
void PreInsert(BiTree *T);

/**
 * 先序顺序遍历
 * @param T
 */
void PreOrder(BiTree T);

/**
 * 中序顺序遍历
 * @param T
 */
void InOrder(BiTree T);
/**
 * 后序遍历
 * @param T
 */
void AfterOrder(BiTree T);
#endif //BINARYTREE_TREE_H
