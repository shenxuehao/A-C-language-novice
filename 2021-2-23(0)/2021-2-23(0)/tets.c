#define _CRT_SECURE_NO_DEPRECATE
//输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和。
//#include <stdio.h>
//int main()
//{
//	int m = 0, n = 0, sum = 0, i = 0, j = 0, arr[100][100] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j]>0)
//			{
//				sum=sum+arr[i][j];
//			}	
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//输入10科成绩，换行显示输入的10科成绩。
//#include <stdio.h>
//int main()
//{
//	int i = 0, arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//输入10个整数，要求按输入时的逆序把这10个数打印出来。逆序输出，就是按照输入相反的顺序打印这10个数。
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 9; i >=0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//输入10个整数，分别统计输出正数、负数的个数。
//#include <stdio.h>
//int main()
//{
//	int i = 0, arr[10] = { 0 }, positive = 0, negative = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > 0)
//		{
//			positive++;
//		}
//		else if (arr[i] < 0)
//		{
//			negative++;
//		}
//		printf("positive:%d", positive);
//		printf("negative:%d", negative);
//	}
//	return 0;
//}


//输入数字N，然后输入N个数，计算这N个数的和。
#include <stdio.h>
int main()
{
	int n = 0, i = 0, tmp = 0, sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &tmp);
		sum += tmp;
	}
	printf("%d\n", sum);
	return 0;
}