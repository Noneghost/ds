/*************************************************************************
	> File Name: queue.c
	> Author: zc  
	> Mail: zcpython_crawler@yeah.net 
	> Created Time: 2018年07月20日 星期五 23时08分46秒
 ************************************************************************/
//  FIFO

#include<stdio.h>
#include<stdlib.h>
#define MaxSize 100
#define ElementType int
#define ERROR -1
typedef struct QNode *Queue;
struct QNode{
        ElementType     Data[MaxSize];
        int rear;
        int front;
};

void AddQ(Queue PtrQ,ElementType item)
{
    if((PtrQ->rear + 1)% MaxSize == PtrQ->front)
    {
        printf("");
       return ;
    }
    PtrQ->rear = (PtrQ->rear+1)%MaxSize;
    PtrQ->Data[PtrQ->rear] = item;
}

ElementType DeleteQ(Queue PtrQ)
{
    if(PtrQ->front == PtrQ->rear)
    {
        printf("队列空");
        return ERROR;
    }
    else
    {
        PtrQ->front =(PtrQ->front + 1);
    }
}



int main(int argc,char *argv[])
{  //  printf("%d\n",*(p+6));
    int* arry = (int[]){0,1,2};
    arry =(int[]){3,4,5};
    printf("%d\n",*(arry+2));
    return 0;
}
