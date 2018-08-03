/*************************************************************************
	> File Name: binary_tree.c
	> Author: zc  
	> Mail: zcpython_crawler@yeah.net 
	> Created Time: 2018年07月31日 星期二 19时49分28秒
 ************************************************************************/
#define ElementType int

#include<stdio.h>

typedef struct TreeNode *BinTree;
typedef BinTree Position;
struct TreeNode{
        ElementType     Data;
        BinTree         Left;
        BinTree         Right;
};

typedef struct SNode *Stack;
struct SNode{
        ElementType     Data;
        struct SNode    *Next;
};

int  IsEmpty(BinTree BT);
void Traversal(BinTree BT);
BinTree CreatBinTree();
void PreOrderTraversal(BinTree BT);
void InOrderTraversal(BinTree BT);
void PosiOrderTraversal(BinTree BT);
void LevelOrderTraversal(BinTree BT);


int main(int argc,char *argv[])
{

    return 0;
}
int IsEmpty(Stack S)
{
    return (S->Next == NULL);
}
void PreOrderTraversal(BinTree BT)
{
    if(BT)
    {
        printf("%d",BT->Data);
        PreOrderTraversal(BT->Left);
        PreOrderTraversal(BT->Right);
    }
}

void InOrderTraversal(BinTree BT)
{
    if(BT)
    {
        InOrderTraversal(BT->Left);
        printf("%d",BT->Data);
        InOrderTraversal(BT->Right);
    }
}

void PosiOrderTraversal(BinTree BT)
{
    if(BT)
    {
        PosiOrderTraversal(BT->Left);
        PosiOrderTraversal(BT->Right);
        printf("%d",BT->Data);
    }
}

/*void InOrderTraversal(BinTree BT)
{
    BinTree T = BT;
    Stack S = CreatStack(MaxSize);
    while(T||!IsEmpty(S))
    {
        Push(S,T);
        T = T->Left;
    }
    if(!IsEmpty(S))
    {
        T = 
    }
}*/
