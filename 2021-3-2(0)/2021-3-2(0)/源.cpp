#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

typedef struct DNode
{
	int data;
	struct DNode *prior, *next;
}DNode,*DLinkList;

bool InitDLinkList(DLinkList &L)
{
	L = (DNode*)malloc(sizeof(DNode));
	if (L == NULL)
	{
		return false;
	}
	L->next = NULL;
	L->prior = NULL;
	return true;
}

bool Empty(DLinkList L)//�ж�˫�����Ƿ�Ϊ��
{
	if (L->next == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}


//��p���֮�����s���
bool InsertNestDNode(DNode* p, DNode* s)
{
	if (NULL == p || NULL == s)
	{
		return false;
	}
	s->next = p->next;
	if (p->next == NULL)
	{
		p->next->prior = s;
	}
	s->prior = p;
	p->next = s;
}


void testDLinkList()//��ʼ��˫����
{
	DLinkList L;
	InitDLinkList(L);
	Empty(L);
}

int main()
{
	testDLinkList();
	return 0;
}