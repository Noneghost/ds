/*************************************************************************
	> File Name: list_stack.c
	> Author: zc  
	> Mail: zcpython_crawler@yeah.net 
	> Created Time: 2018年07月19日 星期四 12时35分50秒
 ************************************************************************/
#define ElementType int

#include<stdio.h>
#include<stdlib.h>
typedef struct SNode *Stack;
struct SNode{
        ElementType     Data ;
        struct SNode    *Next;

};

Stack CreateStack()
{
    Stack S ;
    S = (Stack)malloc(sizeof(struct SNode));
    S -> Next = NULL;
    return S;
}

int IsEmpty(Stack S)
{
    return (S->Next == NULL);
}

void Push(ElementType item,Stack S)
{
    struct SNode *TmpCell;
    TmpCell = (struct SNode *)malloc(sizeof(struct SNode));
    TmpCell ->Data = item;
    TmpCell ->Next    = S ->Next;
    S ->Next = TmpCell;
}

ElementType Pop(Stack S)
{
    struct SNode *FirstCell;
    ElementType TopElem;
    if(IsEmpty(S))
    {
        printf("堆栈空");
        return NULL;
    }
    else
    {
        FirstCell = S ->Next;
        S ->Next = FirstCell ->Next;
        TopElem  = FirstCell ->Data;
        free(FirstCell);
        return TopElem;
    }
}
int main(int argc,char *argv[])
{

    return 0;
}
