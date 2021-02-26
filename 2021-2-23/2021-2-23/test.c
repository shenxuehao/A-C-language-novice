#define _CRT_SECURE_NO_DEPRECATE
//今年是2019年，KiKi想知道1~2019中有多少个包含数字9的数。包含数字的数是指有某一位是“9”的数，例如“2019”、“199”等。
//#include <stdio.h>
//int main()
//{
//	int i = 0, j = 0, count = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		j = i;
//		while (j)
//		if (j % 10 == 9)
//		{
//			count++;
//			break;
//		}
//		else
//		{
//			j /= 10;
//		}
//		
//	}
//	printf("%d ", count);
//	return 0;
//}

//任意输入一个正整数N，统计1~N之间奇数的个数和偶数的个数，并输出。
//#include <stdio.h>
//int main()
//{
//	int n = 0, even = 0, odd = 0, i = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 == 0)
//		{
//			even++;
//		}
//		else
//		{
//			odd++;
//		}
//	}
//	printf("%d %d\n", odd, even);
//	return 0;
//}


//输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。
//#include <stdio.h>
//int main()
//{
//	double max = 0.0, min = 100.0, aver = 0.0, tmp = 0.0,sum = 0.0;
//	int n = 0, i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lf", &tmp);
//		if (max < tmp)
//		{
//			max = tmp;
//		}
//		if (min > tmp)
//		{
//			min = tmp;
//		}
//		sum += tmp;
//		
//	}
//	printf("%.2f %.2f %.2f\n", max, min, sum / n);
//	return 0;
//}

//BMI指数（即身体质量指数）是用体重公斤数除以身高米数平方得出的数字，
//是目前国际上常用的衡量人体胖瘦程度以及是否健康的一个标准。
//例如：一个人的身高为1.75米，体重为68千克，他的BMI=68/(1.75^2)=22.2（千克/米^2）。
//当BMI指数为18.5～23.9时属正常，否则表示身体存在健康风险。编程判断人体健康情况。
//#include <stdio.h>
//int main()
//{
//	double height = 0, weight = 0;
//	scanf("%lf %lf", &height, &weight);
//	double bmi = weight / (height*height);
//	if ((bmi >= 18.5) && (bmi <= 23.9))
//	{
//		printf("Normal");
//	}
//	else
//	{
//		printf("Abnormal");
//	}
//	return 0;
//}



//假设你们社团要竞选社长，有两名候选人分别是A和B，社团每名同学必须并且只能投一票，最终得票多的人为社长.
//#include <stdio.h>
//int main()
//{
//	char arr[100] = { 0 };
//	int count_a = 0, count_b = 0;
//	char ch = 0;
//	while (((ch = getchar()) != '0') && (ch != EOF))
//	{
//		if (ch == 'A')
//		{
//			count_a++;
//		}
//		if (ch == 'B')
//		{
//			count_b++;
//		}
//		getchar();
//	}
//	if (count_a > count_b)
//	{
//		printf("A");
//	}
//	else if (count_a < count_b)
//	{
//		printf("B");
//	}
//	else
//	{
//		printf("E");
//	}
//	return 0;
//}


//题目有多组输入数据，每一行输入两个整数（范围（1 ~231-1），用空格分隔。
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		if (a > b)
//		{
//			printf("%d>%d\n", a, b);
//		}
//		else if (a < b)
//		{
//			printf("%d<%d\n", a, b);
//		}
//		else
//		{
//			printf("%d=%d\n", a, b);
//		}
//	}
//	return 0;
//}

//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
//#include <stdio.h>
//int main()
//{
//	int n = 0, tmp = 0, i = 0, j = 0;
//	int arr[60] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &tmp);
//	for (i = 0; i < n; i++)
//	{
//		if ((arr[i]<tmp) && (arr[i + 1]>tmp))
//		{
//			for (j = n-1; j > i; j--)
//			{
//				arr[j+1] = arr[j];
//			}
//			arr[i + 1] = tmp;
//			break;
//		}
//		else if (tmp < arr[0])//输进去的就是最小的
//		{
//			for (j = n - 1; j >= 0; j--)
//			{
//				arr[j + 1] = arr[j];
//			}
//			arr[0] = tmp;
//		}
//		else if (tmp > arr[n - 1])//输进去的是最大的
//		{
//			arr[n] = tmp;
//		}
//	}
//	for (i = 0; i <= n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//用户登录网站，通常需要注册，一般需要输入两遍密码。请编程判断输入的两次密码是否一致，一致输出“same”，不一致输出“different”
#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100] = { 0 };
	char s2[100] = { 0 };
	scanf("%s %s", s1, s2);
	if (strcmp(s1, s2) == 0)
	{
		printf("same\n");
	}
	else
	{
		printf("different\n");
	}
	return 0;
}