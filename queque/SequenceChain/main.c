#include <stdio.h>
#include "Link.h"
int main() {
    printf("Hello, World!\n");
    SqChain L;
    int x;
    initNode(&L);
    add(&L,3);
    add(&L,2);
    add(&L,14);
    add(&L,1);
    delete(&L,&x);
    return 0;
}