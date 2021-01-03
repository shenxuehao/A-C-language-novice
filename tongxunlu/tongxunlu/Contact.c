#define _CRT_SECURE_NO_DEPRECATE
#include "Contact.h"

void DestroyContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}

static int FindByName(const struct Contact* ps, char name[MAX_NAME])//static的意思是只能在源文件内部看到
//static的功能1.修饰局部变量，改变生命周期2.修饰全局变量，改变作用域，生命周期不变，static修饰的全局变量只能在源文件内部看到3.static修饰函数只能在源文件内部看到
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)//两个字符串比较用的是strcmp
		{
			return i;
		}
	}
	return -1;//找不到的情况
}

void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(3 * sizeof(struct PeoInfo));
	if (ps->data == NULL)//空间开辟失败
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
	//把文件中已经存放的通讯录中的信息加载到通讯录中
	LoadContact(ps);//读文件，读了文件之后把信息放到ps指向的通讯录里面
}

void CheckCapcity(struct Contact* ps);//申明一下
void SaveContact(struct Contact* ps);

void LoadContact(struct Contact* ps)
{
	struct PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("LoadContact:%s\n", strerror(errno));
		return;
	}
	//读取文件，存放到通讯录中
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfRead))//返回0就说明什么都没有读到，返回1，就读到一个元素
	{
		CheckCapcity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}
	fclose(pfRead);
	pfRead = NULL;
}
void CheckCapcity(struct Contact* ps)
{
	if (ps->size == ps->capacity)//满了，要增容
	{
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(ps->data, (ps->capacity + 2)*sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}

void AddContact(struct Contact* ps)
{
	CheckCapcity(ps);//检测当前通讯录的容量1.如果满了，增容；2.如果不满，啥事不干
		printf("请输入名字\n");
		scanf("%s", ps->data[ps->size].name);//data[ps->size]找到数组的某一个元素，name是数组，不需要取地址
		printf("请输入年龄\n");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话\n");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址\n");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	//if (ps->size == MAX)
	//{
	//	printf("通讯录已满，无法增加\n");
	//}
	//else
	//{
	//	printf("请输入名字\n");
	//	scanf("%s", ps->data[ps->size].name);//data[ps->size]找到数组的某一个元素，name是数组，不需要取地址
	//	printf("请输入年龄\n");
	//	scanf("%d", &(ps->data[ps->size].age));
	//	printf("请输入性别\n");
	//	scanf("%s", ps->data[ps->size].sex);
	//	printf("请输入电话\n");
	//	scanf("%s", ps->data[ps->size].tele);
	//	printf("请输入地址\n");
	//	scanf("%s", ps->data[ps->size] .addr);
	//	ps->size++;
	//	printf("添加成功\n");
	//}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");//打印标题
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除人的名字\n");
	scanf("%s", name);
	//删除的方法1.后一个放到前一个的位置上，依次往后，最后一个元素size--，最后一个就访问不到了2.
	//1.查找要删除的人在什么位置
	int pos = FindByName(ps, name);//找到了返回下标，找不到返回-1
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)//两个字符串比较用的是strcmp
		{
			return i;
		}
	}
	if (-1==pos)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//2.删除
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)//如果size=7，最后一次是把下标为6的元素放到下标为5的位置上
		{
			ps->data[j] = ps->data[j + 1];
		}
	}
	ps->size--;
	printf("删除成功\n");
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");//打印标题
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);
	}
}


void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改人的名字\n");
	scanf("%s", &name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要修改的人的信息不存在\n");
	}
	else
	{
		printf("请输入名字\n");
		scanf("%s", ps->data[pos].name);//data[ps->size]找到数组的某一个元素，name是数组，不需要取地址
		printf("请输入年龄\n");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别\n");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话\n");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址\n");
		scanf("%s", ps->data[pos].addr);
		printf("修改完成\n");
	}
}

void SortContact(struct Contact* ps)
{
}

void SaveContact(struct Contact* ps)
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("SaveContact:%s\n", strerror(errno));
		return;
	}
	//写通讯录中的数据到文件中
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]),sizeof(struct PeoInfo),1,pfWrite);
	}
	fclose(pfWrite);
	pfWrite = NULL;
}