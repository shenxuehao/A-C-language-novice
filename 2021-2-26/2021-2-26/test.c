#define _CRT_SECURE_NO_DEPRECATE
//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
//#include <stdio.h>
//int main()
//{
//	int arr[60] = { 0 }, n = 0, tmp = 0, i = 0, j = 0;
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &tmp);
//	if (tmp <= arr[0])
//	{
//		for (j = n - 1; j >= 0; j--)
//		{
//			arr[j + 1] = arr[j];
//		}
//		arr[0] = tmp;
//	}
//	else if (tmp>arr[n - 1]) 
//	{
//		arr[n] = tmp;
//	}
//	else
//	{
//		for (i = 0; i<n; i++)
//		{
//			if (tmp<arr[i])
//			{
//				for (j = n - 1; j >= i; j--)
//				{
//					arr[j + 1] = arr[j];
//				}
//				arr[i] = tmp;
//				break;
//			}
//		}
//	}
//	
//	for (i = 0; i<n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



//问题：一年约有3.156×107s，要求输入您的年龄，显示该年龄合多少秒。
//#include <stdio.h>
//int main()
//{
//	long long age = 0;
//	scanf("%lld", &age);
//	printf("%lld", age * 31560000);
//	return 0;
//}


//已知一个函数y=f(x)，当x < 0时，y = 1；当x = 0时，y = 0；当x > 0时，y = -1。   



//小乐乐的班主任想统计一下班级里一共有多少人需要被请家长，三个成绩（语文，数学，外语）平均分低于60的将被请家长，小乐乐想编程帮助班主任算一下有多少同学被叫家长。
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, sum = 0, a = 0, b = 0, c = 0;
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d %d %d", &a, &b, &c);
//		if ((a + b + c)<180)
//		{
//			sum++;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//KiKi想知道一个n阶方矩是否为上三角矩阵，请帮他编程判定。上三角矩阵即主对角线以下的元素都为0的矩阵，主对角线为从矩阵的左上角至右下角的连线。
//#include <stdio.h>
//int main()
//{
//	int n = 0, arr[10][10] = { 0 }, i = 0, j = 0;
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
//				printf("NO\n");
//				return 0;
//			}
//		}
//	}
//	printf("YES\n");
//	return 0;
//}



//小乐乐的老师BoBo想知道班级中谁的数学成绩最高，请编程帮他实现。
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, max = 0, tmp = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &tmp);
//		if (tmp>max)
//		{
//			max = tmp;
//		}
//	}
//	printf("%d", max);
//	return 0;
//}


//小乐乐想计算一下1!+2!+3!+...+n!。
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, j = 0, num1 = 1, sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		num1 = 1;
//		for (j = 1; j <= i; j++)
//		{
//			num1 = num1*j;
//		}
//		sum += num1;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//小乐乐的班级进行了一次期中考试，考试一共有3门科目：数学，语文，英语，小乐乐的班主任决定给没有通过考核的同学家长开一次家长会，考核的标准是三科平均分不低于60分，所以现在想请你帮忙算一算小乐乐会不会被叫家长。
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a + b + c < 180)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}



//给定n个整数和一个整数x，小乐乐想从n个整数中判断x出现几次，请编程帮他实现。
//#include <stdio.h>
//int main()
//{
//	int n = 0, x = 0, i = 0, arr[100] = { 0 }, count = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	scanf("%d", &x);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == x)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//KiKi这学期努力学习程序设计基础，要期末考试了，BoBo老师告诉他，总成绩包括四个部分，如下：
//总成绩 = 实验成绩 * 20 % +课堂表现成绩 * 10 % +过程考核成绩 * 20 % +期末上机考试成绩 * 50 % ，现在输入KiKi的各项成绩，请计算KiKi的总成绩。
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("%.1f", a*0.2 + b*0.1 + c*0.2 + d*0.5);
//	return 0;
//}



//2020年来到了，KiKi要对他的n位好朋友说n遍”Happy new year!Good luck!”的祝福语。

//#include <stdio.h>
//
//int main()
//{
//	int n = 0, i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("Happy new year!Good luck!\n");
//	}
//	return 0;
//}


//KiKi知道了大一三科比较重要课程的分数，包括：程序设计基础，高数，英语，请编程帮他找到三科中的最高分。

//#include <stdio.h>
//int main()
//{
//	int a = 0, max = 0, i = 0;
//	for (i = 0; i<3; i++)
//	{
//		scanf("%d", &a);
//		if (a > max)
//		{
//			max = a;
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//KiKi知道了什么是质数（只能被1和他自身整除的数），他现在想知道所有三位整数中，有多少个质数。
#include <stdio.h>
#include <math.h>
int main()
{
	int  i = 0, k = 0, j = 0, count = 0;
	for (j = 100; j < 1000; j++)
	{
		
		k = (int)sqrt((double)j);
		for (i = 2; i <= k; i++)
		{
			if (j%i == 0)
			{
				break;
			}
		}
		if (i>k)
		{
			count++;
		}
		
	}
	printf("%d\n", count);
	return 0;
}