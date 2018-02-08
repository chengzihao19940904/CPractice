#include <stdio.h>
#include "SqStack.h"
int main() {
    printf("Hello, World!\n");
    SqStack L;
    initStack(&L);
    push(&L,4);
    pop(&L);
    return 0;
}