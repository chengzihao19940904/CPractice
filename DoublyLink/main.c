#include <stdio.h>
#include "DLink.h"
int main() {
    int i;
    DuList list1;
    initList(&list1);
    for(i=0;i<5;i++)
        insertOrder(&list1,i);
    insert(&list1,99,4);

    delete(&list1,3);
    return 0;

}