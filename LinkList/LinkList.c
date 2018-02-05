//
// Created by amdin on 2018/1/17.
//
#include "LinkList.h"

void create_LinkList(LinkList *list, int list_init_var)
{
    (*list) = (LinkList)malloc(sizeof(Node));
    if(!(*list))
    {
        printf("初始化线性表失败！\n");
        return;
    }
    (*list)->next = NULL;

}




