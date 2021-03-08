#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 

//��̬����ṹ��
struct dynamicArray
{
	void** pAddr;//ά���ڶ�������ʵ������ָ�룬ά����ÿһ�����ݶ����û������ݵ�ַ��������void*ȥ���棬���ص����ݵĵ�ַ��void**����
	int m_capacity;//��������
	int m_size;//�����С
};

//��ʼ�����飬��ʼ������ֻҪ�õ��ṹ��ָ�����
//�ṹ����������飩Ӧ��д�����ϣ�д��ջ�ϻᱻ�ͷŵ�
struct dynamicArray* init_DynamicArray(int capacity)//������Ҫ�ṩһ������������int arr[10],���������ʼ�����������
{
	if (capacity <= 0)
	{
		return NULL;
	}
	struct dynamicArray* array = malloc(sizeof(struct dynamicArray));//�����ṹ��
	//struct dynamicArray* array������
	if (NULL == array)
	{
		return NULL;
	}

	//��������
	array->m_capacity = capacity;
	//���ô�С
	array->m_size = 0;//һ��ʼһ��Ԫ�ض�û��
	//ά���ڶ����������ָ��
	array->pAddr = malloc(sizeof(void*)*(array->m_capacity));//����array->pAddr����void**������
	return array;
}


//���빦��
void insert_danamicArray(struct dynamicArray* array, int pos, void* data)//posΪ�����λ��
{
	if (array == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	if (pos < 0||pos>array->m_size)
	{
		//��Ч��λ��,�Ǿ�β��
		pos = array->m_size;
	}
	//���ж��Ƿ��Ѿ����أ����������̬����
	if (array->m_size >= array->m_capacity)
	{
		//1������һ��������ڴ�ռ�
		int newCapacity = array->m_capacity * 2;
		//2�������¿ռ�
		void** newSpace = malloc(sizeof(void*)*newCapacity);
		//3����ԭ�е����ݿ������¿ռ���
		memcpy(newSpace, array->pAddr, sizeof(void*)*array->m_capacity);
		//4���ͷ�ԭ�еĿռ�
		free(array->pAddr);
		//5������ָ��ָ��
		array->pAddr = newSpace;
		//6�������µ�������С
		array->m_capacity = newCapacity;
	}
	//�����µ�����Ԫ��
	//�����һ��λ�ÿ�ʼ���������ƶ�����
	for (int i = array->m_size - 1; i >= pos; i--)
	{
		array->pAddr[i + 1] = array->pAddr[i];
	}

	//����Ԫ�ز��뵽ָ��λ��
	array->pAddr[pos] = data;
	//���´�С
	array->m_size++;
}


//��������
void foreach_DynamicArray(struct dynamicArray* array,void(*myForeach)(void*))//�������鴫���飬������ֻҪ��ָ�뼴��
//myForeach�Ǻ���ָ�룬��������Ϊvoid*������ֵΪvoid�������ǰѺ���ָ�뵱������������
{
	if (array == NULL)
	{
		return;
	}
	if (myForeach == NULL)
	{
		return;
	}
	for (int i = 0; i < array->m_size; i++)
	{
		//printf("%", array->pAddr[i]); // array->pAddr[i]���ÿһ��Ԫ�ض���void*�����ô�ӡ�����Խи��û�ȥת������Ҫ���������ͣ�Ȼ���Լ���ӡ������ֻ�ǰ�ÿһ�����ݶ�������
		myForeach(array->pAddr[i]);
	}
}

//ɾ�������е�Ԫ��(��λ��)
void removeByPosition_DynamicArray(struct dynamicArray* arr,int pos)//��һ��������λ�þ���ɾ����
{
	if (arr == NULL)
	{
		return;
	}
	if (pos<0 || pos>arr->m_size - 1)
	{
		//��Ч��λ�ã�ֱ��return
		return;
	}
	//ɾ���ݵķ�������pos��ʼ������ǰ�ǹ�ȥ
	for (int i = pos; i < arr->m_size-1; i++)
	{
		arr->pAddr[i] = arr->pAddr[i + 1];//arr->pAddr��������

	}
	arr->m_size--;
}

//ɾ�������е�Ԫ��(��ֵ)
void removeByValue_DynamicArray(struct dynamicArray* arr, void* data,int(*myCompare)(void*,void*))//����ά����ÿһ�����ݶ���void*��������ﲻ��дstruct Person* data
{
	if (NULL == arr)
	{
		return;
	}
	if (NULL == data)
	{
		return;
	}
	for (int i = 0; i < arr->m_size; i++)
	{
		if (myCompare(arr->pAddr[i],data))//����дarr->pAddr[i] == data,ָ����ָ��Ƚ�û�����壬Ӧ�öԱ�ָ��ָ����Ǹ�ֵ
		//���������ó���ַ��Ȼ�����û�תΪ����Ҫ������
		{
			removeByPosition_DynamicArray(arr, i);
			break;//ɾ����˳�ȥ
		}
	}
}

//��������
void destroy_dynamicArray(struct dynamicArray* arr)
{
	if (NULL == arr)
	{
		return;
	}
	if (arr->pAddr != NULL)
	{
		free(arr->pAddr);//�ѿ��ٵĿռ��ͷŵ�
		arr->pAddr = NULL;
	}
	free(arr);
	arr = NULL;
}








//����Ϊ���Դ���
struct Person
{
	char name[60];
	int age;
};


void myPrintPerson(void* data)//�ص�����
{
	struct Person* p = data;//���ݽ����û����Լ�ת��ȥ��ӡ����Ϊ���ǲ�֪��void����ô��ӡ
	printf("������%s ���䣺%d\n", p->name, p->age);
}



//�ص�����
int myComparePerson(void* data1, void*data2)
{
	struct Person* p1 = data1;
	struct Person* p2 = data2;
	return ((strcmp(p1->name, p2->name)==0)&&(p1->age==p2->age));
}

void test01()
{
	//����һ����̬����
	struct dynamicArray* arr = init_DynamicArray(5);
	//׼��5��person����
	struct Person p1 = { "��ɪ", 18 };
	struct Person p2 = { "���Ѿ�", 28 };
	struct Person p3 = { "����", 38 };
	struct Person p4 = { "�ŷ�", 48 };
	struct Person p5 = { "����", 58 };
	struct Person p6 = { "����", 68 };

	//�����ݲ��뵽��̬��������
	printf("��ǰ������Ϊ:%d\n", arr->m_capacity);//5


	insert_danamicArray(arr, 0, &p1);//p1�����ݵĵ�ַ���ŵ�ַ������
	insert_danamicArray(arr, 0, &p2);
	insert_danamicArray(arr, 0, &p3);
	insert_danamicArray(arr, 2, &p4);
	insert_danamicArray(arr, 10, &p5);
	insert_danamicArray(arr, 1, &p6);
	//��ȷ��˳��Ӧ���� ���� ���� ���Ѿ� �ŷ� ��ɪ ����


	printf("�������ݺ������Ϊ:%d\n", arr->m_capacity);//10
	//������̬����
	foreach_DynamicArray(arr, myPrintPerson);

	printf("ɾ����һ��Ԫ�غ������Ϊ:%d\n", arr->m_capacity);
	printf("ɾ����һ��Ԫ�غ������Ϊ:\n");
	removeByPosition_DynamicArray(arr, 1);
	foreach_DynamicArray(arr, myPrintPerson);

	struct Person p = { "�ŷ�", 48 };//����Ҫ����ֵ��ɾ��

	removeByValue_DynamicArray(arr, &p, myComparePerson);
	printf("---------\n");
	foreach_DynamicArray(arr, myPrintPerson);
	destroy_dynamicArray(arr);
	arr = NULL;//ָ���ÿ�
	printf("--------------------------\n");
	foreach_DynamicArray(arr, myPrintPerson);
}


int main()
{
	test01();
	system("pause");
	return 0;
}