#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
//С�����Ͽ���Ҫ��n��̨�ף���Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻��������ף���ô��һ���ж������߷���
int f(int n)
{
	if ((n == 0) || (n == 1))
		return 1;
	else
		return f(n - 1) + f(n - 2);
}
int main()
{
	int n = 0;
	int sum = 0;
	while (scanf("%d", &n) != EOF)
	{
		sum = f(n);
		printf("%d\n", sum);
	}
	return 0;
}


////С����ϲ�����֣�����ϲ��0��1�������ڵõ���һ���������ÿλ�������0��1�����ĳһλ���������Ͱ������1�������ż������ô�Ͱ������0������ش������õ������Ƕ��١�
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a = 0, n = 0, sum = 0, i = 0, num1 = 0, num2 = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		a = n;
//		while (n)//���һ����λ��
//		{
//			sum++;
//			n /= 10;
//		}
//		//�ж�ÿһλ����ż�Բ������滻
//		for (i = 1; i <= sum; i++)
//		{
//			num1 = pow(10, i);
//			num2 = pow(10, i - 1);
//			if (((a % num1)/num2) % 2 == 0)//�ж�ĳһλ����ż��
//			{
//				//��Ϊż
//				a = a - ((a % num1) / num2)*num2;
//			}
//			else
//			{
//				//��Ϊ����
//				a = a - (((a % num1) / num2) - 1)*num2;
//			}
//		}
//		printf("%d\n", a);
//	}
//	return 0;
//}

////�������������Ĺ������빫����֮��
//int main()
//{
//	long long a = 0, b = 0, num1 = 0, num2 = 0, i = 0, a1 = 0, b1 = 0;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		a1 = a;
//		b1 = b;
//			while (1)
//			{
//				if (a > b)
//				{
//					a = a - b;
//					if (a == b)
//					{
//						num1 = a;
//						break;
//					}
//				}
//				else if (a < b)
//				{
//					b = b - a;
//					if (a == b)
//					{
//						num1 = a;
//						break;
//					}
//
//				}
//				else
//				{
//					num1 = a;
//					break;
//				}	
//			}
//			if (num1 > 0)
//			num2 = (a1 / num1)*b1;
//			printf("%lld\n", num1 + num2);
//	}
//	return 0;
//}