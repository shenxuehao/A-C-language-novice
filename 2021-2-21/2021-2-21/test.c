#define _CRT_SECURE_NO_DEPRECATE
//KiKi想知道这学期他的学习情况，BoBo老师告诉他这学期挂的科目累计的学分，根据所挂学分，判断KiKi学习情况，10分以上：很危险(Danger++)，4~9分：危险(Danger)，0~3:Good。
//#include <stdio.h>
//int main()
//{
//	int score = 0;
//	while (scanf("%d", &score) != EOF)
//	{
//		if (score >= 10)
//		{
//			printf("Danger++");
//		}
//		else if ((score >= 4) && (score <= 9))
//		{
//			printf("Danger");
//		}
//		else
//		{
//			printf("Good");
//		}
//	}
//	return 0;
//}

//KiKi访问网站，得到HTTP状态码，但他不知道什么含义，BoBo老师告诉他常见HTTP状态码：200（OK，请求已成功），202（Accepted，服务器已接受请求，但尚未处理。）400（Bad Request，请求参数有误），403（Forbidden，被禁止），404（Not Found，请求失败），500（Internal Server Error，服务器内部错误），502（Bad Gateway，错误网关）。
//#include <stdio.h>
//int main()
//{
//	int score = 0;
//	while (scanf("%d", &score) != EOF)
//	{
//		if (score >= 10)
//		{
//			printf("Danger++");
//		}
//		else if ((score >= 4) && (score <= 9))
//		{
//			printf("Danger");
//		}
//		else
//		{
//			printf("Good");
//		}
//	}
//	return 0;
//}


//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用数字组成的数字三角形图案。
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			for (j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//公务员面试现场打分。有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩。
//#include <stdio.h>
//int main()
//{
//	int score[7] = { 0 }, i = 0, sum = 0, max = 0, min = 100;
//	double aver = 0.0;
//	for (i = 0; i<7; i++)
//	{
//		scanf("%d ", &score[i]);
//		if (score[i]>max)
//			max = score[i];
//		if (score[i] < min)
//			min = score[i];
//			sum = sum + score[i];
//	}
//	aver = (sum - max - min) / 5.0;
//		printf("%.2lf", aver);
//	return 0;
//}


// 有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	int m = 0;//要插入的数据
//	//输入数据
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &m);
//	//处理
//	for (i = n; i>0; i--)
//	{
//		if (arr[i - 1]> m)
//		{
//			arr[i] = arr[i - 1];
//		}
//		else
//		{
//			arr[i] = m;
//			break;
//		}
//	}
//	//如果插入数字小于所有的数字
//	if (i == 0)
//	{
//		arr[i] = m;
//	}
//	//打印
//	for (i = 0; i<n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}