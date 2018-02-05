#include <stdio.h>
#include "LinkList.h"

int main() {
    LNode * list=NULL,*list2=NULL,*LA,*LB,*LC,*mix,*list1=NULL;
    int len,key1,i,j;

    createLinkList_byTail(&list,5);
    list1 = list;
    len = length(list);
    printf("list's %d\n",len);
    for(i=0;i<5;i++)
        createLinkList_byTail(&list,i);
    for(i=3;i<7;i++)
        createLinkList_byTail(&list2,i);

//    for(j=3;j<7;j++)
//        createLinkList_byTail(&list2,j);

//    mix = different(list,list2);
    circleLink(&list);
    circleLink(&list2);

    LC = circleMerge(list,list2);


    return 0;

}