#define _CRT_SECURE_NO_DEPRECATE
#define MAXSIZE 10
typedef struct
{
	int data[MAXSIZE];
	int top;
}SqStack;

//≥ı ºªØ’ª
void InitStack(SqStack &S)
{
	S.top = -1;
}

bool StackEmpty(SqStack S)
{
	if (S.top == -1)
		return true;
	else
		return false;
}

bool Push(SqStack &S, int x)
{
	if (S.top == MAXSIZE - 1)
		return false;
	S.top = S.top + 1;
	S.data[S.top] = x;
	return true;
}

void testStack()
{
	SqStack S;
	InitStack(S);
	StackEmpty(S);
}

void test()
{

}


int main()
{
	test();
	return 0;
}