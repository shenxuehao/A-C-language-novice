#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
//小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？
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


////小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少。
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a = 0, n = 0, sum = 0, i = 0, num1 = 0, num2 = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		a = n;
//		while (n)//求出一共几位数
//		{
//			sum++;
//			n /= 10;
//		}
//		//判断每一位的奇偶性并作出替换
//		for (i = 1; i <= sum; i++)
//		{
//			num1 = pow(10, i);
//			num2 = pow(10, i - 1);
//			if (((a % num1)/num2) % 2 == 0)//判断某一位的奇偶性
//			{
//				//若为偶
//				a = a - ((a % num1) / num2)*num2;
//			}
//			else
//			{
//				//若为奇数
//				a = a - (((a % num1) / num2) - 1)*num2;
//			}
//		}
//		printf("%d\n", a);
//	}
//	return 0;
//}

////求任意两个数的公倍数与公因数之和
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