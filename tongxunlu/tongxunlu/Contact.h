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
//}PeoInfo;//��������ֻҪдPeoInfo������
//ͨѶ¼����
struct Contact
{
	struct PeoInfo *data;//ָ�룬ָ��һ��ռ䣬�ռ�ɴ��С
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
	int capacity;//��ǰͨѶ¼���������
};

//��������
//���ͨѶ¼
void InitContact(struct Contact* ps);
//����ָ����ͨѶ¼��Ա
void AddContact(struct Contact* ps);
//��ʾָ����ͨѶ¼��Ա
void ShowContact(const struct Contact* ps);//ָ��ָ������ݲ������޸�
//ɾ��ָ����ͨѶ¼��Ա
void DelContact(struct Contact* ps);
//Ѱ��ָ����ͨѶ¼��Ա
void SearchContact(const struct Contact* ps);
void ModifyContact(struct Contact* ps);
//����ͨѶ¼����
void SortContact(struct Contact* ps);
void DestroyContact(struct Contact* ps);
void SaveContact(struct Contact* ps);
//�����ļ��е���Ϣ��ͨѶ¼
void LoadContact(struct Contact* ps);