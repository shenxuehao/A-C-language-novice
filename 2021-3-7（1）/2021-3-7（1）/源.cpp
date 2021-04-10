#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

typedef struct ThreadNode
{
	int data;
	struct ThreadNode *lchild, *rchild;
	int ltag, rtag;
}ThreadNode,*ThreadTree;

ThreadNode* FirstNode(ThreadNode *p)
{
	//找最左下的结点
	while (p->ltag == 0)
		p = p->lchild;
	return p;
}

ThreadNode *NextNode(ThreadNode *p)
{
	//找右子树中最左下的结点
	if (p->rtag == 0)
		return FirstNode(p->rchild);
	else
		return p->rchild;
}

void Inorder(ThreadNode *T)
{
	for (ThreadNode *p = FirstNode(T); p != NULL; p = NextNode(p))
	{

	}
}


void test()
{
	ThreadNode T;
}

int main()
{
	test();
	return 0;
}