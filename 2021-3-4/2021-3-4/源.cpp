#define _CRT_SECURE_NO_DEPRECATE
//顺序栈及其相关操作
#include <stdio.h>
#include <stdlib.h>

#define MaxSize 10

typedef struct
{
	int data[MaxSize];
	int top;
}SqStack;

void InitStack(SqStack &S)
{
	S.top = -1;
}

bool StackEmpty(SqStack &S)
{
	if (S.top == -1)//空
		return true;
	else//不空
		return false;
}

//进栈
bool Push(SqStack &S, int x)
{
	if (S.top == MaxSize - 1)
		return false;//满了
	S.top++;
	S.data[S.top] = x;
	return true;
}

bool Pop(SqStack &S)
{
	if (S.top == -1)
		return false;
	S.data[S.top--] = 0;
}


void test()
{
	SqStack S;//创建栈
	InitStack(S);//初始化栈
}

int main()
{
	test();
	return 0;
}