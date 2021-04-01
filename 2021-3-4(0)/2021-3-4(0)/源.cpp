#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

#define MaxSize 10

typedef struct
{
	int data[MaxSize];
	int rear, front, size;
}SqQueue;

void InitQueue(SqQueue &Q)
{
	Q.rear = 0;
	Q.front = 0;
	Q.size = 0;
}

bool QueueEmpty(SqQueue Q)
{
	if (Q.size == 0)
		return true;
	else
		return false;
}



void test()
{
	SqQueue Q;
	InitQueue(Q);
}

int main()
{
	test();
	return 0;
}