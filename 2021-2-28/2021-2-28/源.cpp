#define _CRT_SECURE_NO_DEPRECATE

//静态顺序表
//#include <stdio.h>
//#define MaxSize 10
//
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
//void InitList(SqList &L)
//{
//	for (int i = 0; i < MaxSize; i++)
//	{
//		L.data[i] = 0;
//	}
//	L.length = 0;
//}
//
//int main()
//{
//	SqList L;
//	InitList(L);
//	return 0;
//}


//动态顺序表
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#define Initsize 10
//typedef struct{
//	int* data;
//	int MaxSize;
//	int length;
//}SeqList;
//
//void InitList(SeqList &L)
//{
//	L.data = (int*)malloc(sizeof(int)*Initsize);
//	L.length = 0;
//	L.MaxSize = Initsize;
//}
//
////增加动态数组的长度
//void IncreaseSize(SeqList &L, int len)
//{
//	int* p = L.data;
//	L.data = (int*)malloc(sizeof(int)*(L.MaxSize + len));
//	for (int i = 0; i < L.length; i++)
//	{
//		L.data[i] = p[i];
//	}
//	L.MaxSize = L.MaxSize + len;
//	free(p);
//	//p = NULL;这是局部变量，系统会自动回收
//}
//
//int main(void)
//{
//	SeqList L;
//	InitList(L);
//	IncreaseSize(L, 5);
//	return 0;
//}



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MaxSize 10
typedef struct
{
	int data[MaxSize];
	int length;
}SqList;

void InitList(SqList &L)
{
	for (int i = 0; i < MaxSize; i++)
	{
		L.data[i] = 0;
	}
	L.length = 0;
}

bool ListInsert(SqList &L, int i, int e)
{
	if (i<1 || i>L.length + 1)
	{
		return false;
	}
	if (L.length >= MaxSize)
	{
		return false;
	}
	for (int j = L.length; j>=i; j++)
	{
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	return true;
}

bool ListDelete(SqList &L, int i, int &e)
{
	if (i<1 || i>L.length)
	{
		return false;
	}
	e = L.data[i - 1]; //将被删除的元素给e
	for (int j = i; j < L.length; j--)
	{
		L.data[i - 1] = L.data[i];
	}
	L.length--;
}



int main()
{
	SqList L;
	InitList(L);
	ListInsert(L, 3, 3);
	int e = 0;
	if (ListDelete(L, 3, e))
	{
		printf("已经删除第3个元素，删除的元素为=%d\n", e);
	}
	else
	{
		printf("位序不合法，删除失败\n");
	}
	return 0;
}