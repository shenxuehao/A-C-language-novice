#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode
{
	int data;
	struct BiTNode *lchild, *rchild;
}BiTNode,*BiTree;


void InitBitTree(BiTree &root)
{
	//定义一颗空树,插入根节点
	root = (BiTree)malloc(sizeof(BiTNode));
	root->data = 1;
	root->lchild = NULL;
	root->rchild = NULL;
}

bool Empty(BiTree root)
{
	if ((root->lchild == NULL) && (root->rchild == NULL))
		return true;
	else
		return false;
}

bool InsertBiTNode(BiTree &root)
{
	BiTNode *p = (BiTNode*)malloc(sizeof(BiTNode));
	if (p == NULL)
		return false;
	p->data = 2;
	p->lchild = NULL;
	p->rchild = NULL;
	root->lchild = p;
	return true;
}

void test()
{
	BiTree root;
	InitBitTree(root);
	Empty(root);
}



int main()
{
	test();
	return 0;
}