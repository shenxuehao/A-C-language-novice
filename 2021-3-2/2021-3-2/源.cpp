#define _CRT_SECURE_NO_DEPRECATE
//β�巨����������
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode,*LinkList;

//��ʼ��һ��������
bool InitList(LinkList &L)
{
	L = (LNode*)malloc(sizeof(LNode));//����һ��ͷ���
	if (NULL == L)
	{
		return false;
	}
	L->next = NULL;
	return true;
}

//��i��λ�ò���Ԫ��
bool ListInsert(LinkList &L, int i, int e)
{
	if (i < 1)
	{
		return false;
	}
	LNode* p = L;
	int j = 0;
	while ((p != NULL) && (j < i - 1))//j=i-1��ʱ���˳�ѭ��
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


//�������ĺ�������p���֮�����e
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
	L = (LinkList)malloc(sizeof(LNode));//����ͷ���

	LNode *s, *r = L;//rΪ��βָ��
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));//sָ��ָ���½��Ľ��
		s->data = x;
		r->next = s;//��sָ��ָ�����һ��Ԫ��
		r = s;//rָ���µı�β���
		scanf("%d", &x);//����ȡֵ
	}
	r->next = NULL;//β���ָ���ÿ�
	return L;
}


//ͷ�巨����������
LinkList List_HeadInsert(LinkList &L)
{
	L = (LNode*)malloc(sizeof(LNode));//����ͷ���
	int x = 0;
	LNode *s;
	L->next = NULL;//��ʼΪ������
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));//�����½ڵ�
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
	LinkList L;//����һ��ָ�������ָ��
	//��ʼ��һ���ձ�
	InitList(L);
	ListInsert(L, i, e);
}

int main()
{
	return 0;
}