#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int L, R;
	printf("请输入n:\n");
	scanf("%d", &n);
	int i, sum;
	int* arr = (int*)malloc(n * 4);
	printf("请输入%d个整数:\n",n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("请输入L和R:\n");
	scanf("%d%d", &L, &R);
	sum = 0;
	for ( i = L - 1; i <= R - 1; i++)
	{
		sum = sum + arr[i];
	}
	printf("sum=%d", sum);
	free(arr);
	arr = NULL;
	return 0;
}