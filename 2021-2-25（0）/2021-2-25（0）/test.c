#define _CRT_SECURE_NO_DEPRECATE
//С���ֱȽ����裬��������˯����Ȼ����ȥѧϰ����֪�����ڵ�ʱ�̣��Լ��Լ�Ҫ˯��ʱ�������趨һ
//�����ӽ�����ѧϰ��������̫���ˣ���֪��Ӧ�ð������趨���ĸ�ʱ�̣������������(ֻ����ʱ��
//�֣�����������)
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



//С����ѧУ��ѧ¥�ĵ���ǰ���˺ܶ��ˣ�����ǰ����n�����ڵȵ��ݡ�����ÿ�ο��Գ���12�ˣ�ÿ��������Ҫ��ʱ��Ϊ4���ӣ�����Ҫ2���ӣ�����Ҫ2���ӣ��������С���ּ��㻹��Ҫ���ٷ��Ӳ��ܳ˵��ݵ���¥�ϡ����������������1�㣩
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//		printf("%d\n", (n / 12) * 4 + 2);
//	return 0;
//}


//С��������ڿ���ѧϰ����������������������Լ������С����������������Ȼ���������������������Լ������С������֮�ͣ�������������������⡣
//#include <stdio.h>
//int main()
//{
//	long long a = 0, b = 0,x=0,y=0,num1=0,num2=0;//����int���͵ı�������������ֿ��ܻ����
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



//С����ϲ�����֣�����ϲ��0��1�������ڵõ���һ���������ÿλ�������0��1�����ĳһλ���������Ͱ������1�������ż������ô�Ͱ������0������ش������õ������Ƕ��١�
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


//С�����Ͽ���Ҫ��n��̨�ף���Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻��������ף���ô��һ���ж�
//�����߷���

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




//��ʦ����С����һ�����������У�Ҫ��С���ְ��������ȥ�غ󰴴�С�������򡣵�����ʦ����������̫���ˣ�С����û�취���ĵ�ȥ�ز����������������
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


//����ף���ĸ��70����֮�ʣ���ʦ��С���ֳ���һ�����⡣��Ҷ�֪��China��Ӣ����д��CHN����ô
//����һ���ַ���s������Ҫ������ͳ��s���Ӵ���CHN���ĸ�����
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



//С���ֻ��4������������������ҵ���������
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


//С��������ٷ��Ƴɼ������뽫�ɼ�ת���ɵȼ��ơ�ת������Ϊ��90-100Ϊ��A����80-89Ϊ��B����70-79
//Ϊ��C����60 - 69Ϊ��D����59����Ϊ��E�����������ĳɼ�����0 - 100֮�䣬�����F����
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


//�ض�����
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




//С�����������Ƴɼ������̰���������Ƴɼ��ּܷ�ƽ���֡�
//#include <stdio.h>
//int main()
//{
//	double a = 0, b = 0, c = 0;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	printf("%.2lf %.2lf", a + b + c, (a + b + c) / 3.0);
//	return 0;
//}

//����һ���������У�KiKi������е��ظ�������ȥ��������ȥ�غ�����д�С�������������
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