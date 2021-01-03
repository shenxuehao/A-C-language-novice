#define _CRT_SECURE_NO_DEPRECATE
#include "Contact.h"

void DestroyContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}

static int FindByName(const struct Contact* ps, char name[MAX_NAME])//static����˼��ֻ����Դ�ļ��ڲ�����
//static�Ĺ���1.���ξֲ��������ı���������2.����ȫ�ֱ������ı��������������ڲ��䣬static���ε�ȫ�ֱ���ֻ����Դ�ļ��ڲ�����3.static���κ���ֻ����Դ�ļ��ڲ�����
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)//�����ַ����Ƚ��õ���strcmp
		{
			return i;
		}
	}
	return -1;//�Ҳ��������
}

void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(3 * sizeof(struct PeoInfo));
	if (ps->data == NULL)//�ռ俪��ʧ��
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
	//���ļ����Ѿ���ŵ�ͨѶ¼�е���Ϣ���ص�ͨѶ¼��
	LoadContact(ps);//���ļ��������ļ�֮�����Ϣ�ŵ�psָ���ͨѶ¼����
}

void CheckCapcity(struct Contact* ps);//����һ��
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
	//��ȡ�ļ�����ŵ�ͨѶ¼��
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfRead))//����0��˵��ʲô��û�ж���������1���Ͷ���һ��Ԫ��
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
	if (ps->size == ps->capacity)//���ˣ�Ҫ����
	{
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(ps->data, (ps->capacity + 2)*sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

void AddContact(struct Contact* ps)
{
	CheckCapcity(ps);//��⵱ǰͨѶ¼������1.������ˣ����ݣ�2.���������ɶ�²���
		printf("����������\n");
		scanf("%s", ps->data[ps->size].name);//data[ps->size]�ҵ������ĳһ��Ԫ�أ�name�����飬����Ҫȡ��ַ
		printf("����������\n");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰\n");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ\n");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	//if (ps->size == MAX)
	//{
	//	printf("ͨѶ¼�������޷�����\n");
	//}
	//else
	//{
	//	printf("����������\n");
	//	scanf("%s", ps->data[ps->size].name);//data[ps->size]�ҵ������ĳһ��Ԫ�أ�name�����飬����Ҫȡ��ַ
	//	printf("����������\n");
	//	scanf("%d", &(ps->data[ps->size].age));
	//	printf("�������Ա�\n");
	//	scanf("%s", ps->data[ps->size].sex);
	//	printf("������绰\n");
	//	scanf("%s", ps->data[ps->size].tele);
	//	printf("�������ַ\n");
	//	scanf("%s", ps->data[ps->size] .addr);
	//	ps->size++;
	//	printf("��ӳɹ�\n");
	//}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");//��ӡ����
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
	printf("������Ҫɾ���˵�����\n");
	scanf("%s", name);
	//ɾ���ķ���1.��һ���ŵ�ǰһ����λ���ϣ������������һ��Ԫ��size--�����һ���ͷ��ʲ�����2.
	//1.����Ҫɾ��������ʲôλ��
	int pos = FindByName(ps, name);//�ҵ��˷����±꣬�Ҳ�������-1
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)//�����ַ����Ƚ��õ���strcmp
		{
			return i;
		}
	}
	if (-1==pos)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		//2.ɾ��
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)//���size=7�����һ���ǰ��±�Ϊ6��Ԫ�طŵ��±�Ϊ5��λ����
		{
			ps->data[j] = ps->data[j + 1];
		}
	}
	ps->size--;
	printf("ɾ���ɹ�\n");
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");//��ӡ����
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
	printf("������Ҫ�޸��˵�����\n");
	scanf("%s", &name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˵���Ϣ������\n");
	}
	else
	{
		printf("����������\n");
		scanf("%s", ps->data[pos].name);//data[ps->size]�ҵ������ĳһ��Ԫ�أ�name�����飬����Ҫȡ��ַ
		printf("����������\n");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�\n");
		scanf("%s", ps->data[pos].sex);
		printf("������绰\n");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ\n");
		scanf("%s", ps->data[pos].addr);
		printf("�޸����\n");
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
	//дͨѶ¼�е����ݵ��ļ���
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]),sizeof(struct PeoInfo),1,pfWrite);
	}
	fclose(pfWrite);
	pfWrite = NULL;
}