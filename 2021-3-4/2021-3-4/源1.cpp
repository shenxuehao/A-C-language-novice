#define _CRT_SECURE_NO_DEPRECATE
//队列及其相关操作
#include <stdio.h>
#include <stdlib.h>

#define MaxSize 10

typedef struct
{
	int data[MaxSize];
	int front, rear;
}SqQueue;

void InitQueue(SqQueue &Q)
{
	Q.rear = 0;
	Q.front = 0;
}

bool EmptyQueue(SqQueue &Q)
{
	if (Q.front == 0 && Q.rear == 0)
		return true;
	else
		return false;
}

//入队操作
bool EnterQueue(SqQueue &Q, int x)
{
	if (((Q.rear + 1) % MaxSize) == Q.front)
		return false;
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1) % MaxSize;
	return true;
}

//出队操作
bool DeleteQueue(SqQueue &Q,int &x)
{
	if (Q.rear == Q.front)
		return false;
	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	return true;
}

bool GetHead(SqQueue Q, int &x)
{
	if (Q.rear == Q.front)
		return false;
	x = Q.data[Q.front];
	return true;
}


void test()
{
	SqQueue	Q;
	InitQueue(Q);
}

int main()
{
	test();
	return 0;
}