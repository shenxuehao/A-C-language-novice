#define _CRT_SECURE_NO_DEPRECATE
//��һ�������������У���С�������򣬽�һ��������������뵽�����У���֤����������������Ȼ������
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



//���⣺һ��Լ��3.156��107s��Ҫ�������������䣬��ʾ������϶����롣
//#include <stdio.h>
//int main()
//{
//	long long age = 0;
//	scanf("%lld", &age);
//	printf("%lld", age * 31560000);
//	return 0;
//}


//��֪һ������y=f(x)����x < 0ʱ��y = 1����x = 0ʱ��y = 0����x > 0ʱ��y = -1��   



//С���ֵİ�������ͳ��һ�°༶��һ���ж�������Ҫ����ҳ��������ɼ������ģ���ѧ�����ƽ���ֵ���60�Ľ�����ҳ���С�������̰�����������һ���ж���ͬѧ���мҳ���
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

//KiKi��֪��һ��n�׷����Ƿ�Ϊ�����Ǿ������������ж��������Ǿ������Խ������µ�Ԫ�ض�Ϊ0�ľ������Խ���Ϊ�Ӿ�������Ͻ������½ǵ����ߡ�
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



//С���ֵ���ʦBoBo��֪���༶��˭����ѧ�ɼ���ߣ����̰���ʵ�֡�
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


//С���������һ��1!+2!+3!+...+n!��
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


//С���ֵİ༶������һ�����п��ԣ�����һ����3�ſ�Ŀ����ѧ�����ģ�Ӣ�С���ֵİ����ξ�����û��ͨ�����˵�ͬѧ�ҳ���һ�μҳ��ᣬ���˵ı�׼������ƽ���ֲ�����60�֣����������������æ��һ��С���ֻ᲻�ᱻ�мҳ���
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



//����n��������һ������x��С�������n���������ж�x���ּ��Σ����̰���ʵ�֡�
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

//KiKi��ѧ��Ŭ��ѧϰ������ƻ�����Ҫ��ĩ�����ˣ�BoBo��ʦ���������ܳɼ������ĸ����֣����£�
//�ܳɼ� = ʵ��ɼ� * 20 % +���ñ��ֳɼ� * 10 % +���̿��˳ɼ� * 20 % +��ĩ�ϻ����Գɼ� * 50 % ����������KiKi�ĸ���ɼ��������KiKi���ܳɼ���
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("%.1f", a*0.2 + b*0.1 + c*0.2 + d*0.5);
//	return 0;
//}



//2020�������ˣ�KiKiҪ������nλ������˵n�顱Happy new year!Good luck!����ף���

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


//KiKi֪���˴�һ���ƱȽ���Ҫ�γ̵ķ�����������������ƻ�����������Ӣ����̰����ҵ������е���߷֡�

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


//KiKi֪����ʲô��������ֻ�ܱ�1����������������������������֪��������λ�����У��ж��ٸ�������
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