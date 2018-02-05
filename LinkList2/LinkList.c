//
// Created by amdin on 2018/1/30.
//

#include "LinkList.h"


LNode * initLNode(LNode *node,Elem data)
{
   node = (LNode *) malloc(sizeof(LNode));
    if(!node)
    {
        printf("分配失败！");
        return NULL;
    }
    node->data = data;
    node->next = NULL;
    return node;
}

/**
 * 头插法
 * @param pHead
 * @param data
 * @return
 */
void createLinkList_byHead(LinkList * pHead,Elem data)
{
    LNode * pNode =  initLNode(pNode,data);
    LNode *pTmp;

    if(!pNode)
        exit(-1);
    if(*pHead==NULL)
    {
        pTmp = pNode;
        *pHead=pTmp;
    }else{
        pTmp = *pHead;
        *pHead = pNode;
        pNode->next = pTmp;

    }
}



void createLinkList_byTail(LinkList *pHead,Elem data)
{
    LNode *pNode = initLNode(pNode,data);
    LNode * lTmp = *pHead;
//    LNode * lTmp = pHead;
    if(!pNode)
    {
        printf("分配内存失败！");
        exit(-1);
    }

    if(*pHead==NULL)
    {
        *pHead = pNode;
    }else{

        while(lTmp->next!=NULL)
            lTmp = lTmp->next;
        lTmp->next = pNode;
    }

}


int length(LNode * list)
{
    if(list==NULL)
    {
        return 0;
    }
    int i=1;
    while(list->next!=NULL)
    {
        list = list->next;
        i++;
    }

    return i;
}


int findKeyByValue(LNode *list,Elem value)
{
    LNode *tmp = list;
    int i=1;
    while(tmp->next!=NULL&&tmp->data!=value)
    {
        i++;
        tmp = tmp->next;
    }
    if(tmp->data ==value)
    {
        return i;
    }else{
        return 0;
    }
}


bool insertNode_byPre(LinkList * lList,Elem data,Elem key)
{
    LNode *lNode = initLNode(lNode,data);
    LNode *lTmp = *lList;
    if(lTmp==NULL){
        return false;
    }else if(lTmp->next==NULL){
        return false;
    }else{
        while(lTmp->next->data!=key&&lTmp->next!=NULL){
            lTmp = lTmp->next;
        }
        if(lTmp->data ==key){
            lNode->next = lTmp->next;
            lTmp->next = lNode;
        }else{
            return false;
        }
    }
    return true;
}

bool * delete(LinkList *list,Elem key)
{
    LNode *lNode = *list,*lTmp;
    if(lNode==NULL)
    {
        printf("此列链表为空，不能删除！");
    }
    while(lNode->next!=NULL&&lNode->next->data!=key)
        lNode = lNode->next;
    if(lNode->data ==key)
    {
        lTmp = lNode->next;
        lNode->next = lTmp->next;
        free(lTmp);

    }

}


LinkList different(LinkList list1,LinkList list2)
{
    LNode *p,*q,*r=NULL,*tmp;
    p=list1;

    while(p!=NULL)
    {
        q=list2;
        while(q!=NULL&&q->data!=p->data)
            q = q->next;

        if(q!=NULL)
        {
            if(r==NULL)
            {

                r = initLNode(r,q->data);

            }else{
                tmp = initLNode(tmp,q->data);
                r->next = tmp;
            }

            tmp=tmp->next;
        }
        p = p->next;
    }
    return r;
}




LinkList reverse(LinkList list1)
{
    LNode *l1 = list1,*tmp;
//    tmp = initLNode(tmp,NULL);
    while(l1!=NULL)
    {
        createLinkList_byHead(&tmp,l1->data);
        l1 = l1->next;
    }
    return tmp;
}


LinkList circleLink(LinkList *LA)
{
    LNode *p,*q;
    p = *LA;
    while(p->next !=NULL) p = p->next;
    p->next = *LA;

}


LinkList circleMerge(LinkList LA,LinkList LB)
{
    LinkList p = LA;
    LinkList q = LB;
    while(p->next != LA) p = p->next;

    while(q->next != LB) q = q->next;
    p->next = LB;
    q->next = LA;
//    free(LB);
    return LA;

}