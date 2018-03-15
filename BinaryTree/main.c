#include <stdio.h>
#include "tree.h"
int main() {
    printf("Hello, World!\n");
    BiTree T;
    PreInsert(&T);
    PreOrder(T);
    printf("---------");
    InOrder(T);
    return 0;
}