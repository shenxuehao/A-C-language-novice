#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
//æÿ’ÛΩªªª
int main()
{
	int arr[10][10] = { 0 };
	int i = 0, j = 0, x = 0;
	int n = 0, m = 0;
	int k = 0;
	char t = 0;
	int a = 0, b = 0;
	int tmp = 0;
	char ch1 = 'c';
	char ch2 = 'r';
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d", &k);
	for (x = 0; x < k; x++)
	{
		scanf("%c %d %d", &t, &a, &b);
		if (t == ch1)
		{
			for (i = 0; i < n; i++)
			{
				tmp = arr[a][i];
				arr[a][i] = arr[b][i];
				arr[b][i] = tmp;
			}
		}
		if (t == ch2)
		{
			for (j = 0; j < m; j++)
			{
				tmp = arr[j][b];
				arr[j][b] = arr[j][a];
				arr[j][a] = tmp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//#include <stdio.h>
////æÿ’ÛΩªªª
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0, j = 0;
//	int n = 0, m = 0;
//	int k = 0;
//	char t = 0;
//	int a = 0, b = 0;
//	int tmp = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d ", &arr[i][j]);
//		}
//		scanf("\n");
//	}
//	scanf("%c %d %d", &k, &a, &b);
//	if ('t' == 'r')
//	{
//		for (i = 0; i < n; i++)
//		{
//			tmp = arr[a][i];
//			arr[a][i] = arr[b][i];
//			arr[b][i] = tmp;
//		}
//	}
//	if ('t' == 'c')
//	{
//		for (j = 0; j < m; j++)
//		{
//			tmp = arr[j][b];
//			arr[j][b] = arr[j][a];
//			arr[j][a] = tmp;
//		}
//	}
//	for (j = 0; j < m; j++)
//	{
//		for (i = 0; i < n; i++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}