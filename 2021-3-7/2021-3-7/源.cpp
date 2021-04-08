#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

//二叉树的结点
typedef struct BiTNode
{
	char data;
	struct BiTNode *lchild, *rchild;
}BiTNode,*BiTree;

//链式队列结点
typedef struct LinkNode
{
	BiTNode *data;//结点指针
	struct LinkNode *next;
}LinkNode;

typedef struct
{
	LinkNode *front, *rear;//队头队尾
}LinkQueue;

void InitQueue(LinkQueue &Q)
{
	Q.front=Q.rear=(LinkNode*)malloc(sizeof(LinkNode));
	Q.front->next = NULL;
}

bool IsEmpty(LinkQueue Q)
{
	if (Q.front == NULL)
		return true;
	else
		return false;
}

void EnQueue(LinkQueue &Q, BiTNode* T)
{
	LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = T;
	s->next = NULL;
	Q.rear->next = s;
	Q.rear = s;
}

bool DeQueue(LinkQueue &Q, BiTNode* &T)
{
	if (Q.front == Q.rear)
		return false;
	LinkNode *p = Q.front->next;
	T = p->data;
	Q.front->next = p->next;
	if (Q.rear == p)
		Q.rear = Q.front;
	free(p);
	return true;
}

void LevelOrder(BiTree T)
{
	LinkQueue Q;
	InitQueue(Q);
	BiTree p;
	EnQueue(Q, T);
	while (!IsEmpty(Q))
	{
		DeQueue(Q, p);
		if (p->lchild != NULL)
			EnQueue(Q, p->lchild);
		if (p->rchild != NULL)
			EnQueue(Q, p->rchild);
	}
}

void test()
{
	BiTree T;
	LevelOrder(T);
}

int main()
{
	test();
	return 0;
}