#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//链表的结点，只有数据域与指针域
struct LinkNode
{
	void* data;//数据都是void*的类型
	struct LinkNote* next;//指针域
};


//链表结构体
struct LList
{
	struct LinkNode pHeader;//头节点
	int m_size;//链表的长度
};


typedef void* LinkList;//让用户拿到LinkList就行

//初始化链表
LinkList init_LinkList()
{
	struct LList* myList = malloc(sizeof(struct LList));

	if (myList == NULL)
	{
		return NULL;
	}

	//初始化链表的结构体
	myList->pHeader.data = NULL;
	myList->pHeader.next = NULL;
	myList->m_size = 0;//当前的链表长度为0

	return myList;//这样用户只拿到void*，并不知道里面的数据是什么
}

//插入节点
void insert_LinkList(LinkList list, int pos, void* data)//维护的数据全部是void*
{
	if (list == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	struct LList* myList = list;//把list还原回原来的我知道的结构体(LList)
	if (pos<0 || pos>myList->m_size)
	{
		//无效位置尾插
		pos = myList->m_size;
	}

	//创建临时结点
	struct LinkNode* pCurrent = &myList->pHeader;//一开始指向头结点，从头结点往后遍历
	//myList是struct LinkNode类型的，不是struct LinkNode*类型
	for (int i = 0; i < pos; i++)
	{
		pCurrent = pCurrent->next;
	}//通过循环，找到插入位置的前驱结点

	//创建新结点
	struct LinkNode* newNode = malloc(sizeof(struct LinkNode));
	newNode->data = data;
	newNode->next = NULL;

	//将新结点插入到链表中
	newNode->next = pCurrent->next;
	pCurrent->next = newNode;

	myList->m_size++;//更新链表长度
}

//遍历链表
void foreach_LinkList(LinkList list,void(*myPrint)(void*))
{
	//LinkList就是void*，操作的时候得转换回来
	if (list == NULL)
	{
		return;
	}
	struct LList* myList = list;
	struct LinkNode* pCurrent = myList->pHeader.next;//找到第一个有数据的节点
	for (int i = 0; i < myList->m_size; i++)
	{
		myPrint(pCurrent->data);
		pCurrent = pCurrent->next;//指针一直往后移
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
	printf("姓名:%s 年龄:%d\n", p->name, p->age);
}

void test01()
{
	//初始化链表
	LinkList list = init_LinkList();
	//插入数据
	struct Person p1 = { "魈", 1500 };
	struct Person p2 = { "甘雨", 2500 };
	struct Person p3 = { "班尼特", 500 };
	struct Person p4 = { "凝光", 30 };
	struct Person p5 = { "莫娜", 1000 };
	struct Person p6 = { "钟离", 3000 };

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