#define _CRT_SECURE_NO_DEPRECATE
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的K形图案
//#include <stdio.h>
//int main()
//{
//	int n = 0, j = 0, i = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n + 1; i++)
//		{
//			for (j = 0; j < n - i + 1; j++)
//			{
//				printf("* ");
//			}
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < i + 2; j++)
//			{
//				printf("* ");
//			}
//			for (j = 0; j < n - i; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的箭形图案。
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i <= n; i++)
//		{
//			for (j = 0; j < 2 * (n - i); j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < i + 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < 2 * i + 2; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < n - i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的反斜线形图案。
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)//第i行
//		{
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			for (j = 0; j < n - i - 1; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//多组输入，一个整数（2~20），表示输出的行数，也表示组成正斜线的“*”的数量。
#include <stdio.h>
int main()
{
	int n = 0, j = 0, i = 0;
	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i < n; i++)//n行
		{
			for (j = 0; j < n - i - 1; j++)
			{
				printf(" ");
			}
			printf("*");
			for (j = 0; j < i; j++)
			{
				printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}

// KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的X形图案。
