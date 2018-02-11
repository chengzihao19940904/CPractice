#include <stdio.h>
#include "SqList.h"
int main() {
    //杨辉三角
    SqList  L;
    initList(&L);
    int i,j,m=10;
    element x,y;
    add(&L,1);
    for(i=1;i<m;i++)
    {
        add(&L,1);
        for(j=1;j<=i-1;j++)
        {
            delete(&L,&x);
            printf("%d ",x);
            get(L,&y);
            y +=x;
            add(&L,y);

        }
        delete(&L,&x);
        printf("%d\n",x);
        add(&L,1);
    }
    return 0;
}