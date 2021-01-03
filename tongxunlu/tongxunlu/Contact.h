#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

//#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3

enum Option
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,//3
	MODIFY,//4
	SHOW,//5
	SORT,//6
	SAVE,
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//typedef struct PeoInfo
//{
//	char name[MAX_NAME];
//	int age;
//	char sex[MAX_SEX];
//	char tele[MAX_TELE];
//	char addr[MAX_ADDR];
//}PeoInfo;//这样后期只要写PeoInfo就行了
//通讯录类型
struct Contact
{
	struct PeoInfo *data;//指针，指向一块空间，空间可大可小
	int size;//记录当前已经有的元素个数
	int capacity;//当前通讯录的最大容量
};

//声明函数
//清空通讯录
void InitContact(struct Contact* ps);
//增加指定的通讯录人员
void AddContact(struct Contact* ps);
//显示指定的通讯录人员
void ShowContact(const struct Contact* ps);//指针指向的内容不允许被修改
//删除指定的通讯录人员
void DelContact(struct Contact* ps);
//寻找指定的通讯录人员
void SearchContact(const struct Contact* ps);
void ModifyContact(struct Contact* ps);
//排序通讯录内容
void SortContact(struct Contact* ps);
void DestroyContact(struct Contact* ps);
void SaveContact(struct Contact* ps);
//加载文件中的信息到通讯录
void LoadContact(struct Contact* ps);