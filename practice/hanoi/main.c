#include <stdio.h>
#include "Link.h"
int main() {
    int i;
    LinkList X,Y,Z;
    initNode(&X,0);
    initNode(&Y,0);
    initNode(&Z,0);
    for(i=4;i>0;i--)
        push(&X,i);

    hanoi(&X,&Y,&Z);
    return 0;
}