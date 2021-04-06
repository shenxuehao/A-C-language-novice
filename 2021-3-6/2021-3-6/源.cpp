#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode
{
	int data;
	struct BiTNode *lchild, *rchild;
}BiTNode,*BiTree;

//定义一颗空树,插入根节点
BiTree root = (BiTree)malloc(sizeof(BiTNode));






int main()
{
	return 0;
}