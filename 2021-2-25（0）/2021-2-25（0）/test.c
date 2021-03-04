#define _CRT_SECURE_NO_DEPRECATE
//小乐乐比较懒惰，他现在想睡觉，然后再去学习。他知道现在的时刻，以及自己要睡的时长，想设定一
//个闹钟叫他起床学习，但是他太笨了，不知道应该把闹钟设定在哪个时刻，请你帮助他。(只考虑时和
//分，不考虑日期)
//#include <stdio.h>
//int main()
//{
//	int hour = 0, minute = 0, k = 0;
//	scanf("%d:%d %d", &hour, &minute, &k);
//	if ((minute + k % 60)<60)
//	printf("%02d:%02d\n", (hour + k / 60)%24, minute + k % 60);
//	else
//		printf("%02d:%02d\n", (hour + k / 60+1) % 24, minute + k % 60-60);
//	return 0;
//}



//小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//		printf("%d\n", (n / 12) * 4 + 2);
//	return 0;
//}


//小乐乐最近在课上学习了如何求两个正整数的最大公约数与最小公倍数，但是他竟然不会求两个正整数的最大公约数与最小公倍数之和，请你帮助他解决这个问题。
//#include <stdio.h>
//int main()
//{
//	long long a = 0, b = 0,x=0,y=0,num1=0,num2=0;//定义int类型的变量遇到大的数字可能会出错
//	scanf("%d %d", &a, &b);
//	x = a;
//	y = b;
//	while (x != y)
//	{
//		if (x > y)
//		{
//			x = x - y;
//		}
//		else if (x < y)
//		{
//			y = y - x;
//		}
//	}
//	num1 = x;
//	num2 = (a*b) / num1;
//	printf("%lld", num1 + num2);
//	return 0;
//}



//小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少。
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n = 0, arr[10] = { 0 }, num = 0, i = 1,tmp = 1,sum = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		num = n;
//		while (num)
//		{
//			arr[i] = num % 10;
//			num /= 10;
//			i++;
//		}
//		num = i-1;
//		for (i = 1; i <= num; i++)
//		{
//			if (arr[i] % 2 == 0)
//			{
//				arr[i] = 0;
//			}
//			else
//			{
//				arr[i] = 1;
//			}
//		}
//		i = 1;
//		while (i <= num)
//		{
//			sum += arr[i] * tmp;
//			i++;
//			tmp *= 10;
//		}
//		printf("%d\n", sum);
//	}
//	
//	return 0;
//}


//小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多
//少种走法？

//#include <stdio.h>
//
//int fib(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", fib(n));
//	return 0;
//}




//老师给了小乐乐一个正整数序列，要求小乐乐把这个序列去重后按从小到大排序。但是老师给出的序列太长了，小乐乐没办法耐心的去重并排序，请你帮助他。
//#include <stdio.h>
//int main()
//{
//	int n = 0, arr[100000] = { 0 },i=0,tmp = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &tmp);
//		arr[tmp] = tmp;
//	}
//	
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i]!=0)
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//在庆祝祖国母亲70华诞之际，老师给小乐乐出了一个问题。大家都知道China的英文缩写是CHN，那么
//给你一个字符串s，你需要做的是统计s中子串“CHN”的个数。
//#include <stdio.h>
//int main()
//{
//	int  n = 0, i = 0;
//	char arr[8000] = { 0 };
//	char* p = arr;
//	long long c = 0, ch = 0, chn = 0;//
//	scanf("%s", arr);
//	while (*p)
//	{
//		if (*p == 'C')
//		{
//			c++;
//
//		}
//		else if (*p == 'H')
//		{
//			ch += c;
//		}
//		else if (*p == 'N')
//		{
//			chn += ch;
//		}
//		p++;
//	}
//	printf("%lld\n", chn);
//	return 0;
//}



//小乐乐获得4个最大数，请帮他编程找到最大的数。
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0,max = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &n);
//		if (n>max)
//		{
//			max = n;
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//小乐乐输入百分制成绩，他想将成绩转换成等级制。转换规则为：90-100为’A’，80-89为’B’，70-79
//为’C’，60 - 69为’D’，59以下为’E’。如果输入的成绩不在0 - 100之间，输出’F’。
//#include <stdio.h>
//int main()
//{
//	int score = 0;
//	scanf("%d", &score);
//	if ((score <= 59) && (score >= 0))
//	{
//		printf("E\n");
//	}
//	else if ((score >59) && (score <=69))
//	{
//		printf("D\n");
//	}
//	else if ((score >69) && (score <= 79))
//	{
//		printf("C\n");
//	}
//	else if ((score >79) && (score <= 89))
//	{
//		printf("B\n");
//	}
//	else if ((score >89) && (score <= 100))
//	{
//		printf("A\n");
//	}
//	else
//	{
//		printf("F\n");
//	}
//	return 0;
//}


//特定函数
//#include <stdio.h>
//int max3(int x, int y, int z)
//{
//	int max = 0;
//	if (x > y)
//	{
//		max = x;
//		if (max < z)
//		{
//			max = z;
//		}
//	}
//	else
//	{
//		max = y;
//		if (max < z)
//		{
//			max = z;
//		}
//	}
//	return max;
//}
//int main()
//{
//	int x = 0, y = 0, z = 0, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	d = max3(a + b, b, c);
//	e = max3(a, b+c, c);
//	f = max3(a, b, b + c);
//	printf("%.2f\n",(d*1.0)/(e+f));
//	return 0;
//}




//小乐乐输入三科成绩，请编程帮他输出三科成绩总分及平均分。
//#include <stdio.h>
//int main()
//{
//	double a = 0, b = 0, c = 0;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	printf("%.2lf %.2lf", a + b + c, (a + b + c) / 3.0);
//	return 0;
//}

//给定一个整数序列，KiKi想把其中的重复的整数去掉，并将去重后的序列从小到达排序输出。
#include <stdio.h>
int main()
{
	int n = 0, arr[10000] = { 0 }, i = 0, tmp = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &tmp);
		arr[tmp] = tmp;
	}
	for (i = 0; i < 10000; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}