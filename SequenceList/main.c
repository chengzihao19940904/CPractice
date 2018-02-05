#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>



#include "SequenceList.h"

int main() {
    printf("Hello, World!\n");
    return 0;
}


void InitList(SqList * sl)
{
    if(sl->data!=NULL)
    {
        printf("此线性已被初始化！",__func__);
    }else{
        sl->data = (Element *)malloc(LIST_INIT_SIZE*sizeof(Element));
        if(!sl->data){
            printf("分配内存失败！",__func__);
            exit(OVERFLOW);
        }
        sl->length = 0;
        sl->MaxLength = LIST_INIT_SIZE;
    }
}

void DestroyList(SqList *sl)
{
    free(sl);
    sl->data = NULL;
    sl->length = 0;
    sl->MaxLength = 0;
}


void ClearList(SqList *sl)
{
    sl->data = NULL;
    sl->length = 0;
}

bool ListEmpty(SqList *sl)
{
    return sl->length==0?true:false;
}

int GetElem(SqList sl,int i)
{
    int elem;
    if(i>sl.length)
    {
        printf("i超过最大长度!\n");
        return ERRORCODE;
    }

    for(elem=0;elem<=i;elem++)
    {
        sl.data++;
    }
    return sl.data;
}


void ReMalloc(SqList *sl)
{
    SqList * tmp;
    tmp = (Element *)realloc(sl->data,INCREMENT*sl->MaxLength* sizeof(Element));
    if(!tmp)
    {
        printf("重新分配内存失败");
        exit(ERRORCODE);
    }
    sl->data = tmp;
    sl->MaxLength = INCREMENT*sl->MaxLength;
}


