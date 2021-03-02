#define _CRT_SECURE_NO_DEPRECATE
//KiKi现在得到一个包含n*m个数的整数序列，现在他需要把这n*m个数按顺序规划成一个n行m列的矩阵并输出，请你帮他完成这个任务。
//#include <stdio.h>
//int main()
//{
//	int i = 0, j=0,m = 0, n = 0, arr[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//KiKi想从n行m列的方阵队列中找到身高最高的人的位置，请你帮助他完成这个任务。
//#include <stdio.h>
//int main()
//{
//	int n = 0, m = 0, i = 0, j = 0, max = 0, x = 0, y = 0, arr[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (max < arr[i][j])
//			{
//				max = arr[i][j];
//				x = i;
//				y = j;
//			}
//		}
//	}
//	printf("%d %d", x+1, y+1);
//	return 0;
//}



//KiKi得到了两个n行m列的矩阵，他想知道两个矩阵是否相等，请你回答他。(当两个矩阵对应数组元素都相等时两个矩阵相等)。
//#include <stdio.h>
//int main()
//{
//	int m = 0, n = 0, arr1[10][10] = { 0 }, arr2[10][10] = { 10 }, i = 0, j = 0, count = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	if (count == m*n)
//	{
//		printf("Yes");
//	}
//	else
//	{
//		printf("No");
//	}
//	return 0;
//}



//KiKi想知道一个n阶方矩是否为上三角矩阵，请帮他编程判定。上三角矩阵即主对角线以下的元素都为0的矩阵，主对角线为从矩阵的左上角至右下角的连线。
//#include <stdio.h>
//int main()
//{
//	int i = 0, j = 0, n = 0, arr[10][10] = { 0 }, count = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				
//				count++;
//				break;
//			}
//		}
//	}
//	if (count == 0)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}

//KiKi有一个矩阵，他想知道转置后的矩阵（将矩阵的行列互换得到的新矩阵称为转置矩阵），请编程帮他解答。
//#include <stdio.h>
//int main()
//{
//	int i = 0,j = 0, arr1[10][10] = { 0 }, arr2[10][10] = { 0 }, n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr1[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//KiKi有一个矩阵，他想知道经过k次行变换或列变换后得到的矩阵。请编程帮他解答。
//#include <stdio.h>
//int main()
//{
//	int n = 0, m = 0, arr[10][10] = { 10 }, i = 0, j = 0, k = 0, a = 0, b = 0, tmp = 0;
//	char t = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	scanf("%d", &k); 
//	
//	while (k)
//	{	
//		getchar();
//		scanf("%c %d %d", &t, &a, &b);
//		if (t == 'r')
//		{
//			for (i = 0; i < m; i++)
//			{
//				tmp = arr[a-1][i];
//				arr[a - 1][i] = arr[b - 1][i];
//				arr[b - 1][i] = tmp;
//			}
//		}
//		if (t == 'c')
//		{
//			for (i = 0; i < n; i++)
//			{
//				tmp = arr[i][a - 1];
//				arr[i][a - 1] = arr[i][b - 1];
//				arr[i][b - 1] = tmp;
//			}
//		}
//		k--;
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//KiKi知道什么叫杨辉三角之后对杨辉三角产生了浓厚的兴趣，他想知道杨辉三角的前n行，请编程帮他解答。杨辉三角，本质上是二项式(a+b)的n次方展开后各项的系数排成的三角形。其性质包括：每行的端点数为1， 一个数也为1；每个数等于它左上方和上方的两数之和。
#include <stdio.h>
int main()
{
	int n = 0, i = 0, j = 0, arr[30][30] = { 0 };
	scanf("%d", &n);
	arr[0][0] = 1;
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if ((j == 0) || (i == j))
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr[i][j]!=0)
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}