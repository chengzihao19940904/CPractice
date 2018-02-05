//
// Created by amdin on 2018/1/29.
//
#include "Sequence.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>


int initSqList(SqList *sl,int max)
{
    sl->data = (int *)malloc(max*sizeof(Element));
    if(!sl->data) return -1;
    sl->length = 0;
    sl->maxLenght = max;
    return 1;
}


void DeleteSqList(SqList *sl)
{
    sl->length=0;
    sl->maxLenght = 0;
    free(sl);
}


int isEmpty(SqList *sl)
{
    return sl->length==0?1:0;
}


int getSqListLength(SqList *sl)
{
    return sl->length;
}


void inputSqList(SqList *sl)
{
    int i=0;
    for(i=0;i<sl->length;i++)
        printf("%d\n",sl->data[i]);

}

Element findValueByKey(SqList *sl,int key)
{
    int i;
    if(key>=sl->length)
        return -1;
    for(i=0;i<key;i++)
    {
        *(sl->data)++;
    }
    return sl->data;

}


Element findValue(SqList *sl,Element value)
{
    int i=0;
    while(sl->data!=value&&i<sl->length)
    {
        *(sl->data)++;
        i++;
    }
    if(sl->data!=value)
        return -1;
    return i;
}

bool insertElement(SqList *sl,int key,Element value)
{
    int i;
    if(key>sl->length)
        return false;
    if(sl->length == 0)
    {
        (sl->data)[0] = value;
        sl->length++;
        return true;
    }
    for(i=sl->length-1;i>key;i--)
    {
        (sl->data)[i+1] = (sl->data)[i];
    }
    sl->data[key] = value;
    sl->length++;
    return true;
}


bool deleteValue(SqList *sl,int key)
{
    int i;
    if(key>sl->length-1||key<=-1)
        return false;
    for(i=key;i<sl->length-1;i++)
        sl->data[i] = sl->data[i+1];
    sl->length--;
    return true;
}



bool listAppend(SqList *sl,Element value)
{
    sl->data[sl->length] = value;
    sl->length++;
    return true;
}



