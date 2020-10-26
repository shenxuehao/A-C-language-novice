#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[10]);
	for (i = 0; i <= sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了,下标是：%d\n",i);
			break;
		}
	}
	if (i == sz)
		printf("找不到\n");
	return 0;
}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int s = 0;
//	printf("请输入n:>");
//	scanf("%d", &n);
//		s = n;
//		for (i = 1; i <n; i++)
//		{
//			s = s*(n - i);
//		}
//		n = n - 2;	
//	printf("%d", s);
//	return 0;
//}




//
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int s = 0;
//	int a = 0;
//	printf("请输入n:>");
//	scanf("%d", &n);
//	for (a = n; a > 0; a--)
//	{
//		s = n;
//		for (i = 1; i <n; i++)
//		{
//			s = s*(n - i);
//		}
//		n = n - 2;
//		a = a - 1;
//	}
//	printf("%d", s);
//	return 0;
//}

//
//int main()
////{/*
//	int i = 0;
//	int s = 0;
//	int n = 0;
//	int j = 0;
//	printf("请输入n的值:>");
//	scanf("%d", &n);
//	for (n = 1; n <= 3; n++)
//	{
//		s = s * n;
//		j = j + s;
//	}
//	printf("结果为%d", j);
//	return 0;
//}*/

















//int main()
//{
//	int i=1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		{
//			for (j = 1; j <= i; j++)
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i=1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}