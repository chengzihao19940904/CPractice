//
// Created by amdin on 2018/1/16.
//

#ifndef SEQUENCELIST_SEQUENCELIST_H
#define SEQUENCELIST_SEQUENCELIST_H

#endif //SEQUENCELIST_SEQUENCELIST_H

#include <stdbool.h>
#define LIST_INIT_SIZE 100
#define INCREMENT 10
#define OVERFLOW 99999
#define ERRORCODE -1
typedef int Element;
typedef struct sqList{
    Element * data;
    int length;
    int MaxLength;
} SqList;

/**
 * 初始化线性表
 * @param sl 结构体
 */
void InitList(SqList * sl);
/**
 * 当线性表存在时，销毁线性表
 * @param sl
 * @return bool
 */
void DestroyList(SqList *sl);

/**
 * 清空线性表
 * @param sl
 */
void ClearList(SqList *sl);

/**
 * 判断线性表是否为空 true为空，false为空
 * @param sl
 * @return bool
 */
bool ListEmpty(SqList *sl);

int GetElem(SqList sl,int i);

int listInsert(SqList *sl,int i,Element e);


void ReMalloc(SqList *sl);
