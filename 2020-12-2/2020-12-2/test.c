#define _CRT_SECURE_NO_DEPRECATE
//struct S
//{
//	int n;
//	char c;
//	int arr[0];//柔性数组成员
//};
//struct S
//{
//	int n;
//	char c;
//	int arr[];//柔性数组成员
//};


#include <stdio.h>
#include <stdlib.h>
struct S
{
	int n;
	int* arr;//用arr来维护一个动态开辟的内存空间
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
	free(p->arr);//不能先释放p，要先释放数组的空间
	p->arr = NULL;
	free(p);
	p = NULL;
	return 0;
}