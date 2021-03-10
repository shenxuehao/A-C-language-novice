#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//����Ľ�㣬ֻ����������ָ����
struct LinkNode
{
	void* data;//���ݶ���void*������
	struct LinkNote* next;//ָ����
};


//����ṹ��
struct LList
{
	struct LinkNode pHeader;//ͷ�ڵ�
	int m_size;//����ĳ���
};


typedef void* LinkList;//���û��õ�LinkList����

//��ʼ������
LinkList init_LinkList()
{
	struct LList* myList = malloc(sizeof(struct LList));

	if (myList == NULL)
	{
		return NULL;
	}

	//��ʼ������Ľṹ��
	myList->pHeader.data = NULL;
	myList->pHeader.next = NULL;
	myList->m_size = 0;//��ǰ��������Ϊ0

	return myList;//�����û�ֻ�õ�void*������֪�������������ʲô
}

//����ڵ�
void insert_LinkList(LinkList list, int pos, void* data)//ά��������ȫ����void*
{
	if (list == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	struct LList* myList = list;//��list��ԭ��ԭ������֪���Ľṹ��(LList)
	if (pos<0 || pos>myList->m_size)
	{
		//��Чλ��β��
		pos = myList->m_size;
	}

	//������ʱ���
	struct LinkNode* pCurrent = &myList->pHeader;//һ��ʼָ��ͷ��㣬��ͷ����������
	//myList��struct LinkNode���͵ģ�����struct LinkNode*����
	for (int i = 0; i < pos; i++)
	{
		pCurrent = pCurrent->next;
	}//ͨ��ѭ�����ҵ�����λ�õ�ǰ�����

	//�����½��
	struct LinkNode* newNode = malloc(sizeof(struct LinkNode));
	newNode->data = data;
	newNode->next = NULL;

	//���½����뵽������
	newNode->next = pCurrent->next;
	pCurrent->next = newNode;

	myList->m_size++;//����������
}

//��������
void foreach_LinkList(LinkList list,void(*myPrint)(void*))
{
	//LinkList����void*��������ʱ���ת������
	if (list == NULL)
	{
		return;
	}
	struct LList* myList = list;
	struct LinkNode* pCurrent = myList->pHeader.next;//�ҵ���һ�������ݵĽڵ�
	for (int i = 0; i < myList->m_size; i++)
	{
		myPrint(pCurrent->data);
		pCurrent = pCurrent->next;//ָ��һֱ������
	}
}


struct Person
{
	char name[64];
	int age;
};



void myPrintPerson(void* data)
{
	struct Person* p = data;
	printf("����:%s ����:%d\n", p->name, p->age);
}

void test01()
{
	//��ʼ������
	LinkList list = init_LinkList();
	//��������
	struct Person p1 = { "��", 1500 };
	struct Person p2 = { "����", 2500 };
	struct Person p3 = { "������", 500 };
	struct Person p4 = { "����", 30 };
	struct Person p5 = { "Ī��", 1000 };
	struct Person p6 = { "����", 3000 };

	insert_LinkList(list, 0, &p1);
	insert_LinkList(list, 0, &p2);
	insert_LinkList(list, 1, &p3);
	insert_LinkList(list, 0, &p4);
	insert_LinkList(list, 1, &p5);
	insert_LinkList(list, 100, &p6);

	foreach_LinkList(list, myPrintPerson);
}
int main()
{
	test01();
	system("pause");
	return 0;
}