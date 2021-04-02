#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>


//��ʽ���еĽ��
typedef struct LinkNode
{
	int data;
	struct LinkNode* next;
}LinkNode;

//��ʽ����

typedef struct
{
	LinkNode *front, *rear;//���е�ͷָ����βָ��
}LinkQueue;

bool IsEmpty(LinkQueue Q)
{
	if (Q.front == Q.rear)
		return true;
	else
		return false;
}

//��ʼ�����У���ͷ��㣩
void InitQueueWithHead(LinkQueue &Q)
{
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
	Q.front->next = NULL;
}



//���
void EnterQueueWithHead(LinkQueue &Q, int x)
{
	LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = NULL;
	Q.rear->next = s;
	Q.rear = s;
}


//����
bool DeleteQueueWithHead(LinkQueue &Q,int &x)
{
	if (Q.front == Q.rear)//�ն���
		return false;
	//LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));//���÷�����
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

//��ӣ�����ͷ��㣩
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
	LinkQueue Q;//����һ������
	InitQueueWithHead(Q);
}

int main()
{
	test();
	return 0;
}