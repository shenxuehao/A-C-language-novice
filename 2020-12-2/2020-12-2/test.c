#define _CRT_SECURE_NO_DEPRECATE
//struct S
//{
//	int n;
//	char c;
//	int arr[0];//���������Ա
//};
//struct S
//{
//	int n;
//	char c;
//	int arr[];//���������Ա
//};


#include <stdio.h>
#include <stdlib.h>
struct S
{
	int n;
	int* arr;//��arr��ά��һ����̬���ٵ��ڴ�ռ�
};
int main()
{
	struct S* p = (struct S*)malloc(sizeof(struct S));
	p->n = 100;
	p->arr = (int*)malloc(10 * sizeof(int));
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		p->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p->arr[i]);
	}
	free(p->arr);//�������ͷ�p��Ҫ���ͷ�����Ŀռ�
	p->arr = NULL;
	free(p);
	p = NULL;
	return 0;
}