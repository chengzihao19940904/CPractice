#include <stdio.h>
#include "Link.h"
int main() {
    int i;
    LinkList X,Y,Z;
    initNode(&X);
    initNode(&Y);
    initNode(&Z);
    for(i=12;i>0;i--)
        push(&X,i);

    hanoi(X.top+1,&X,&Y,&Z);
    return 0;
}