/*************************************************************************
	> File Name: generalized.c
	> Author: zc  
	> Mail: zcpython_crawler@yeah.net 
	> Created Time: 2018年07月18日 星期三 21时02分21秒
 ************************************************************************/
#define ElementType int

#include<stdio.h>

typedef struct GNode *GList;
struct GNode{
        int     Tag;
        union{
        ElementType Data;
        GList       SubList;
        }URegion;
        GList Next;
};


int main(void)
{   
    
    
    return 0;

}

