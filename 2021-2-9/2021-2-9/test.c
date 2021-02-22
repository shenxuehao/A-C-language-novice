#define _CRT_SECURE_NO_DEPRECATE
////KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的线段图案。
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的正方形图案。
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, j = 0;;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//
//	}
//	return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的直角三角形图案。
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//针对每行输入，输出用“*”组成的对应长度的翻转直角三角形，每个“*”后面有一个空格。
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的带空格直角三角形图案。
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, j = 0, k = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n - i-1; j++)
//			{
//				printf("  ");
//			}
//			for (k = 0; k <= i; k++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的金字塔图案。
//#include <stdio.h>
//int main()
//{
//	int i = 0, n = 0, j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)//每一行
//		{
//			for (j = 0; j < n - i - 1; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的翻转金字塔图案。
//#include <stdio.h>
//int main()
//{
//	int n = 0; int i = 0; int j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < n - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的菱形图案。
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n+1 ; i++)
//		{
//			for (j = 0; j < n - i ; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (i = 0; i <= n ; i++)
//		{
//			for (j = 0; j < i + 1; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < n - i ; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//方法二
#include <stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		//上
		for (i = 0; i < n; i++)
		{
			//一行
			int j = 0;
			for (j = 0; j < n - i; j++)
			{
				printf(" ");
			}
			for (j = 0; j <= i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		for (i = 0; i <= n; i++)
		{
			//一行
			int j = 0;
			for (j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (j = 0; j <= n - i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}