#define _CRT_SECURE_NO_DEPRECATE
//����
#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
	int data;
	struct LNode *next;
}LNode,*LinkList;

bool JudgeEmpty(LinkList L)
{
	if (L == NULL)
		return true;
	else
		return false;
}

bool InitListNoHead(LinkList &L)
{
	L = NULL;
	return true;
}
//��ʼ��������
bool InitList(LinkList &L)
{
	L = (LNode*)malloc(sizeof(LNode));//����һ��ͷ���
	if (NULL == L)
		return false;
	L->next = NULL;
	return true;
}

bool ListInsertNextByPosition(LinkList &L, int i, int e)
{
	if (L == NULL)
		return false;
	int j = 0;
	LNode* p = L;
	while (j < i - 1 && p != NULL)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
		return false;
	LNode *q = (LNode*)malloc(sizeof(LNode));
	p->next = q->next;
	q->data = e;
	p->next = q;
	return true;
}

bool ListInsertNextByPositionNoHead(LinkList &L, int i, int e)
{
	if (i < 1)
		return false;//�����λ�򲻺Ϸ�
	if (i == 1)
	{
		LNode *s = (LNode*)malloc(sizeof(LNode));
		if (NULL == s)
			return false;
		s->data = e;
		s->next = L;
		L = s;//ͷָ��ָ���½ڵ�
		return true;
	}
	int j = 0;
	LNode *p = L;
	while (p != NULL&&j < i - 1)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
		return false;
	LNode *s = (LNode*)malloc(sizeof(LNode));
	s = p->next;
	s->next = p->next;
	p->next = s;
	s->data = e;
	return true;
}

bool InsertPriorNodeWay1(LNode* p, LinkList &L, int e)//����һ��ͷָ�룬��ͷָ�뿪ʼ����
{
	if (p == NULL)
		return false;
	LNode *s = L;
	while (s->next == p)
	{
		s = s->next;
	}
	LNode *q = (LNode*)malloc(sizeof(LNode));
	q->next = s->next; 
	s->next = q;
	q->data = e;
	return true;
}

bool InsertPriorNodeWay2(LNode* p, int e)
{
	if (NULL == p)
		return false;
	LNode *s = (LNode*)malloc(sizeof(LNode));
	if (NULL == s)
		return false;
	s->next = p->next;
	p->next = s;
	s->data = p->data;
	p->data = e;
	return true;
}

bool InsertPriorNodeWay3(LNode* p, LNode* s)
{
	if (NULL == p || NULL == s)
		return false;
	s->next = p->next;
	p->next = s;
	int e = p->data;
	p->data = s->data;
	s->data = e;
	return true;
}

bool ListDeleteByPosition(LinkList &L, int i,int e)
{
	L = (LNode*)malloc(sizeof(LNode));
	if (NULL == L)
		return false;
	LNode* p = L;
	int j = 0;
	while (p != NULL&&j < i - 1)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
		return false;
	if (p->next == NULL)
		return false;
	p->next = p->next->next;
	e = p->next->data;
	return true;
}

bool DeleteAppointNode(LNode* p)
{
	if (NULL == p)
		return false;
	LNode *q = p->next;
	p->data = p->next->data;
	p->next = p->next->next;
	free(q);
	return true;
}


//��λ���ң����ص�i��Ԫ��
LNode* GetElem(LinkList &L, int i)
{
	if (i < 0)
		return NULL;
	LNode* p = L;
	int j = 0;
	while (p != NULL&&j < i)
	{
		p = p->next;
		j++;
	}
	//if (p == NULL)
	//	return NULL;
	return p;
}

void test()
{
	LinkList L;
	InitList(L);
}

int main()
{
	test();
	return 0;
}