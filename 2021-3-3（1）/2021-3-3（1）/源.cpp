#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10

typedef struct
{
	int data[MAXSIZE];
	int top;
}SqStack;

bool InitStack(SqStack &S)
{
	S.top = -1;
}

bool JudgeEmpty(SqStack S)
{
	if (S.top = -1)
		return true;
	else
		return false;
}

//½øÕ»²Ù×÷
bool Push(SqStack &S,int x)
{
	if (S.top == MAXSIZE - 1)
		return false;
	S.top = S.top + 1;
	S.data[S.top] = x;
	return true;
}

bool Pop(SqStack &S, int &x)
{
	if (S.top == -1)
		return false;
	x = S.data[S.top];
	S.top -= 1;
	return true;
}

void test()
{
	SqStack S;
	InitStack(S);
	JudgeEmpty(S);

}

int main()
{
	test();
	return 0;
}