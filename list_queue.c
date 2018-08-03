/*************************************************************************
	> File Name: list_queue.c
	> Author: zc  
	> Mail: zcpython_crawler@yeah.net 
	> Created Time: 2018年07月23日 星期一 10时51分59秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define ElementType int 
#define ERROR -1
struct Node{
        ElementType Data;
        struct Node *Next;
};

struct QNode{
    struct Node *rear;
    struct Node *front;

};
typedef struct QNode *Queue;
Queue PtrQ;

bool IsEmpty(Queue PtrQ)
{
    return (PtrQ->front ==NULL);
}

ElementType DeleteQ(Queue PtrQ)
{
    struct Node *FrontCell;
    ElementType FrontElem;
    if(PtrQ->front == NULL)
    {
        printf("队列为空");
        return ERROR;
    }
    FrontCell = PtrQ->front;
    if(PtrQ->front==PtrQ->rear)
    {
        PtrQ->front = PtrQ->rear = NULL;
    }
    else
    {
        PtrQ->front = PtrQ->front->Next;
    }
    FrontElem = FrontCell->Data;
    free(FrontCell);
    return FrontElem;
}
int main(int argc,char *argv[])
{

    return 0;
}
