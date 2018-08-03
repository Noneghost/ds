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
        ElementType Data[MAXSIZE];
        int Last;
};

struct LNode L;
List PtrL;
List MakeEmpty()
{
    List PtrL;
    PtrL = (List)malloc(sizeof(struct LNode));
    PtrL->Last = -1;  //最后一个元素 的指针位置 
    return PtrL;
}

int Find(ElementType X,List PtrL)
{
    int i = 0;
    while(i <= PtrL->Last && PtrL->Data[i]!= X)
    i++;
    if(i > PtrL->Last) return -1;
    else    return i;
}
int Insert(ElementType X,int i,List PtrL)
{
    int j;
    if(PtrL->Last == MAXSIZE - 1)
    {
        printf("表满");
        return 0 ;
    }
    if(i < 1 || i > PtrL->Last+2)
    {
        printf("位置不合法");
        return 0;
    }
    for(j = PtrL->Last;j >= i - 1 ;j--)// 从后移位
        PtrL->Data[j+1] = PtrL->Data[j];
     PtrL->Data[i-1] = X;
     PtrL->Last++;
     return 0 ;
}
int Delete(ElementType X,int i ,List PtrL)
{
    int j ;
    if(i < 1 || i > PtrL->Last+1)
    {
        printf("不存在第 %d个元素",i);
        return 0;
    }
    for(j = i;j <= PtrL->Last;j++)
        PtrL->Data[j-1]=PtrL->Data[j];
    PtrL->Last--;
    return 0;

}
int main(int argc,char *argv[])
{ 
    int a[3] ;
    a[1]=0;
    printf("%d",a[1]);

    return 0;
}
