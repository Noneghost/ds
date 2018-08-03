/*************************************************************************
    > File Name: double_stack.c
    > Author: zc  
    > Mail: zcpython_crawler@yeah.net 
    > Created Time: 2018年07月19日 星期四 05时02分46秒
 ************************************************************************/

#define ElementType int
#define Maxsize 10
#include<stdio.h>

typedef int Position;
struct DStack{
    ElementType Data[Maxsize];
    Position Top1;
    Position Top2;
    
}S;
//S.Top1 = -1;
//S.Top2 = Maxsize;
void Push(struct DStack *Ptrs,ElementType item,int Tag)
{
    if(Ptrs->Top2 - Ptrs->Top1 == 1)
    {
        printf("堆栈满"); 
        return ;
    }
    if(Tag == 1)
        Ptrs->Data[++(Ptrs->Top1)] = item;
    else 
        Ptrs->Data[--(Ptrs->Top2)] = item;
}
ElementType Pop(struct DStack *Ptrs, int Tag)
{
    if(Tag == 1)
    {
        if(Ptrs->Top1 == -1)
        {
            printf("堆栈 1 为空");
            return ;
        }
        else 
        return Ptrs->Data[(Ptrs->Top1)--];
    }
    else if(Tag == 2 )
    {
        if(Ptrs->Top2 == Maxsize)
        {
            printf("堆栈 2 空");
            return ;
        }
        else return Ptrs->Data[(Ptrs->Top2)++];
    }
    
}
int main(int argc,char *argv[])
{
    
    return 0;
}
