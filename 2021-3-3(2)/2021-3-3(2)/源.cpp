#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10
typedef struct
{
	int data[MAXSIZE];
	int front, rear;
}SqQueue;

bool QueueEmpty(SqQueue Q)
{
	if (Q.front == Q.rear)
		return true;
	else
		return false;
}


void InitQueue(SqQueue &Q)
{//初始化队头队尾指向0
	Q.rear = Q.front = 0;
}

void TestQueue()
{
	SqQueue Q;
	InitQueue(Q);
}


void test()
{
	TestQueue();
}

int main()
{
	test();
	return 0;
}


//typedef struct Linknode
//{
//	int data;//数据域
//	struct Linknode* next;//指针域
//}LinkStack;//栈类型定义
//
//void test()
//
//int main()
//{
//	void test();
//	return 0;
//}