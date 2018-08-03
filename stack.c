/*************************************************************************
	> File Name: stack.c
	> Author: zc  
	> Mail: zcpython_crawler@yeah.net 
	> Created Time: 2018年07月19日 星期四 03时43分46秒
 ************************************************************************/
#define MaxSize 100
#define ElementType int
#define ERROR -1
typedef struct SNode *Stack;
struct SNode{
        ElementType Data[MaxSize];
        int Top;
};

#include<stdio.h>

void Push(Stack PtrS,ElementType item)
{
    if(PtrS->Top == MaxSize - 1)
    {
        printf("堆栈满 ");
        return 0;
    }
    else 
    {
        PtrS->Data[++(PtrS->Top)] = item;
        return 0;
    }
} 
ElementType Pop(Stack PtrS)
{
    if(PtrS->Top == -1)
    {
        printf("堆栈为空"); 
        return ERROR;
    }
    else
    { 
        return (PtrS->Data[(PtrS->Top)--]);
    }
}

int main(int argc,char *argv[])
{

    return 0;
}
