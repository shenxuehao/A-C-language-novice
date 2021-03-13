#define _CRT_SECURE_NO_DEPRECATE
//尾插法建立单链表
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode,*LinkList;

//初始化一个单链表
bool InitList(LinkList &L)
{
	L = (LNode*)malloc(sizeof(LNode));//分配一个头结点
	if (NULL == L)
	{
		return false;
	}
	L->next = NULL;
	return true;
}

//在i的位置插入元素
bool ListInsert(LinkList &L, int i, int e)
{
	if (i < 1)
	{
		return false;
	}
	LNode* p = L;
	int j = 0;
	while ((p != NULL) && (j < i - 1))//j=i-1的时候退出循环
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
	{
		return false;
	}
	LNode* s = (LNode*)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}


//后插操作的函数，在p结点之后插入e
bool InsertNextNode(LNode* p, int e)
{
	if (NULL == p)
	{
		return false;
	}
	LNode* s = (LNode*)malloc(sizeof(LNode));
	if (NULL == s)
	{
		return false;
	}
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}

LinkList List_TailInsert(LinkList &L)
{
	int x;
	L = (LinkList)malloc(sizeof(LNode));//建立头结点

	LNode *s, *r = L;//r为表尾指针
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));//s指针指向新建的结点
		s->data = x;
		r->next = s;//把s指针指向最后一个元素
		r = s;//r指向新的表尾结点
		scanf("%d", &x);//继续取值
	}
	r->next = NULL;//尾结点指针置空
	return L;
}


//头插法建立单链表
LinkList List_HeadInsert(LinkList &L)
{
	L = (LNode*)malloc(sizeof(LNode));//创建头结点
	int x = 0;
	LNode *s;
	L->next = NULL;//初始为空链表
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));//创建新节点
		s->data = x;
		s->next = L->next;
		L->next = s;
		scanf("%d", &x);
	}

	return L;
}

void test()
{
	int i = 0, e = 0;
	LinkList L;//声明一个指向单链表的指针
	//初始化一个空表
	InitList(L);
	ListInsert(L, i, e);
}

int main()
{
	return 0;
}