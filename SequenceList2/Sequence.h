//
// Created by amdin on 2018/1/29.
//


#include <stdbool.h>
#ifndef SEQUENCELIST2_SEQUENCE_H
#define SEQUENCELIST2_SEQUENCE_H
#define INCREMENT   10;
#endif //SEQUENCELIST2_SEQUENCE_H
typedef int Element;

/*
 * 1、初始化线性表
 * 2、删除线性表
 * 3、判断是否为空表
 * 4、线性表长度
 * 5、输出线性表全部元素
 * 6、按元素位置查找
 * 7、按元素值查找
 * 8、插入
 * 9、删除
 * 10、在末尾添加值
 * 11、删除末位置
 * */
typedef struct{
    Element * data;
    int length;
    int maxLenght;
} SqList;

/**
 * 初始线性表
 * @param sl
 * @param max
 * @return  1或-1
 */
int initSqList(SqList *sl,int max);

/**
 * 删除线性表
 * @param sl
 */
void DeleteSqList(SqList *sl);

/**
 * 判断线性表是否为空
 * @param sl
 * @return 1或-1
 */
int isEmpty(SqList *sl);

/**
 * 获取线性表的长度
 * @param sl
 * @return
 */
int getSqListLength(SqList *sl);

/**
 * 输出线性表全部元素
 * @param sl
 */
void inputSqList(SqList *sl);


Element findValueByKey(SqList *sl,int key);


Element findValue(SqList *sl,Element value);


bool insertElement(SqList *sl,int key,Element value);


bool deleteValue(SqList *sl,int key);


bool listAppend(SqList *sl,Element value);

