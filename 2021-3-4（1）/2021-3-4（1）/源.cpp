#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>


//链式队列的结点
typedef struct LinkNode
{
	int data;
	struct LinkNode* next;
}LinkNode;

//链式队列

typedef struct
{
	LinkNode *front, *rear;//队列的头指针与尾指针
}LinkQueue;

bool IsEmpty(LinkQueue Q)
{
	if (Q.front == Q.rear)
		return true;
	else
		return false;
}

//初始化队列（带头结点）
void InitQueueWithHead(LinkQueue &Q)
{
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
	Q.front->next = NULL;
}



//入队
void EnterQueueWithHead(LinkQueue &Q, int x)
{
	LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = NULL;
	Q.rear->next = s;
	Q.rear = s;
}


//出队
bool DeleteQueueWithHead(LinkQueue &Q,int &x)
{
	if (Q.front == Q.rear)//空队列
		return false;
	//LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));//不用分配结点
	LinkNode* p = Q.front;
	x = p->data;
	Q.front->next = p->next;
	if (Q.rear == p)
	{
		Q.rear = Q.front;
	}
	free(p);
	return true;
}




void InitQueueWithoutHead(LinkQueue &Q)
{
	Q.front = NULL;
	Q.rear = NULL;
}

//入队（不带头结点）
void EnterQueueWithoutHead(LinkQueue &Q, int x)
{
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = NULL;
	if (Q.front == NULL)
	{
		Q.front = s;
		Q.rear = s;
	}
	else
	{
		Q.rear->next = s;
		Q.rear = s;
	}
	
}

bool DeleteQueueWithoutHead(LinkQueue &Q, int &x)
{
	if (Q.front == NULL)
		return false;
	LinkNode* s = Q.front; 
	x = s->data;
	Q.front = s->next;
	if (Q.rear == s)
	{
		Q.front = NULL;
		Q.rear = NULL;
	}
	free(s);
	return true;
}


void test()
{
	LinkQueue Q;//声明一个队列
	InitQueueWithHead(Q);
}

int main()
{
	test();
	return 0;
}