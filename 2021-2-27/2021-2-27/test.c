#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//��̬����ṹ��
struct dynamicArray
{
	void** pAddr;//ά���ڶ�������ʵ����ָ��
	int m_capacity;//��������
	int m_size;//�����С

};


//��ʼ������

struct dynamicArray* init_DynamicArray(int capacity)//capacity�����˳�ʼ�������ݵ�����
{
	//���ٵ�������ջ�ϵĻ�һ�����û��
	if (capacity <= 0)
	{
		return NULL;
	}
	struct dynamicArray* array = malloc(sizeof(struct dynamicArray));
	//�ж��ڴ��Ƿ�����ɹ�
	if (array == NULL)
	{
		return NULL;
	}
	//��������
	array->m_capacity = capacity;
	//���ô�С
	array->m_size = 0;
	//ά���ڶ����������ָ��
	array->pAddr = malloc(sizeof(void*)*array->m_capacity);
	return array;
}


//���빦��
void insert_dynamicArray(struct dynamicArray * array,int pos,void* data)//���ÿһ��Ԫ�ض���void*������
{//posΪ�����λ��
	if (array == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	if (pos<0 || pos>array->m_size)
	{
		//�����λ������Ч��
		pos = array->m_size;//β��

	}
	//���ж��Ƿ��Ѿ����أ�����==��С��m_capacity==m_size)
	if (array->m_size == array->m_capacity)
	{
		//1������һ��������ڴ�ռ�
		int newCapacity = array->m_capacity * 2;//��������չ
		//2�������¿ռ�
		void** newSpace = malloc(sizeof(void*)*newCapacity);
		//3����ԭ�е����ݿ������¿ռ���
		memcpy(newSpace, array->pAddr, sizeof(void*)*array->m_capacity);
		//4���ͷ�ԭ�еĿռ�
		free(array->pAddr);
		//5������ָ��ָ��
		array->pAddr = newSpace;
		//6������������С
		array->m_capacity = newCapacity;
	}


	//�����µ�����Ԫ��
	//�����һ��λ�ÿ�ʼ�����ƶ����� ����
	for (int i = array->m_size; i >= pos; i--)
	{
		array->pAddr[i + 1] = array->pAddr[i];
	}

	//����Ԫ�ز���ָ��λ��
	array->pAddr[pos] = data;

	//���´�С
	array->m_size++;
}


int main()
{
	system("pause");
	return 0;
}