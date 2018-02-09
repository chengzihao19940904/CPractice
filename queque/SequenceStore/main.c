#include <stdio.h>
#include "SqList.h"
int main() {
    SqList * L = initList();
    element x;
    add(L,1);
    add(L,5);
    add(L,2);
    add(L,8);
    delete(L,&x);
    inputQueue(*L);
    return 0;
}