#include <stdio.h>
#include "Sequence.h"
int main() {

    SqList sl;
    Element ret;
    initSqList(&sl,10);
    insertElement(&sl,0,5);
    listAppend(&sl,7);
    listAppend(&sl,12);
    listAppend(&sl,55);
    listAppend(&sl,31);
    inputSqList(&sl);
    deleteValue(&sl,2);
    printf("-----------\n");
    inputSqList(&sl);
    printf("----------\n");
    ret = findValue(&sl,12);
    printf("%d\n",ret);
    return 0;
}