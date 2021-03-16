#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode,*LinkList;

bool InitList(LinkList &L)//��ʼ��һ��������
{
	L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
		return false;
	L->next = NULL;
	return true;
}

bool ListInsertByPosition(LinkList &L, int i, int e)
{
	if (i < 1)
		return false;
	LNode* p = L;
	int j = 0;
	while ((j < i - 1) && (p != NULL))
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
	{
		return false;
	}
	LNode *s = (LNode*)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	s = p->next;
	return true;
}


//������
bool InsertNextNode(LNode* p, int e)
{
	if (p == NULL)
		return false;
	LNode* s = (LNode*)malloc(sizeof(LNode));
	if (s == NULL)//�ڴ����ʧ��
		return false;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}


bool InsertPriorNode(LNode* p,int e)
{
	LNode* s = (LNode*)malloc(sizeof(LNode));
	if (p == NULL || NULL == s)
		return false;
	s->next = p->next;
	p->next = s;
	s->data = p->data;
	p->data = e;
	return true;
}


//��λ��ɾ��
bool ListDeleteByPosition(LinkList &L, int i, int &e)
{
	if (i < 1)
		return false;
	LNode *p = L;
	int j = 0;
	while (j < i - 1 && p != NULL)//ѭ������p��ָ����i-1�����
	{
		p = p->next;
		j++;
	}
	if (p == NULL||p->next==NULL)
		return false;
	LNode *q = p->next;
	e = q->data;
	p->next = q->next;
	free(q);
	return true;
}


//ɾ��ָ�����
bool DeleteSureLNode(LNode* p)
{
	if (p == NULL)
		return false;
	LNode* q = p->next;
	q->data = p->data;
	p->next = q->next;
	free(q);
	return true;
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