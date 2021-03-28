#define _CRT_SECURE_NO_DEPRECATE
//˳��ջ������ز���
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
	if (S.top == -1)//��
		return true;
	else//����
		return false;
}

//��ջ
bool Push(SqStack &S, int x)
{
	if (S.top == MaxSize - 1)
		return false;//����
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
	SqStack S;//����ջ
	InitStack(S);//��ʼ��ջ
}

int main()
{
	test();
	return 0;
}