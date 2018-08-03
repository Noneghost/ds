/*************************************************************************
	> File Name: partition.c
	> Author: zc  
	> Mail: zcpython_crawler@yeah.net 
	> Created Time: 2018年07月17日 星期二 17时39分09秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 100
#define ElementType int

typedef struct LNode *List;
struct LNode{
        ElementType Data;
        List Next;
};

struct LNode L;
List PtrL;
int  Length(List PtrL)
{
    List p = PtrL;
    int j = 0 ;
    while(p){
        p = p->Next;
        j++;
    }
    return j;
}
List FindKth(int K, List PtrL)
{
    List p = PtrL;
    int i = 1;
    while(p!=NULL && i<K)
    {
        p = p->Next;
        i++;
    }
    if(i==K) return p;
    else return NULL;
}
List Find(ElementType X,List PtrL)
{
    List p = PtrL;
    while(p!=NULL && p->Data!=X)
    {
        p = p->Next;    
    }
    return p;
}
List Insert(ElementType X,int i ,List PtrL)
{
    List p,s;
    if(i == 1)
    {
        s = (List)malloc(sizeof(struct LNode));
        s->Data = X;
        s->Next = PtrL;
        return s;
    }
    p = FindKth(i-1,PtrL);
    if(p == NULL)
    {
        printf("参数错误")；
        return NULL;
    }
    else
    {
        s = (List)malloc(sizeof(struct LNode));
        s->Data = X;
        s->Next = p->Next;
        p->Next = s;
        return PtrL;
    }
}
List Delete(int i , List PtrL)
{
    List p,s;
    if(i==1)
    {
        s = PtrL;
        if(PtrL!=NULL) PtrL = PtrL->Next;
        else return NULL;
        free(s);
        return PtrL;
    }
    p = FindKth(i-1,PtrL);
    if(p == NULL)
    {
        printf("第%d个节点不存在",i-1);
        return NULL;
    }
    else if(p->Next == NULL)
    {
        printf("第%d个节点不存在",i);
        return null;
    }
    else
    {
        s = p->Next;
        p->Next = s->Next;
        free(s);
        return PtrL;
    }
}
int main(int argc,char *argv[])
{ 
    int a[3] ;
    a[1]=0;
    printf("%d",a[1]);

    return 0;
}
