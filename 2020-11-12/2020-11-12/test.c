#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	printf("请输入n的个数:>");
	scanf("%d", &n);
	if (n % 2)
	{
		for (i = 1; i <= n / 2 + 1; i++)
		{
			int j = 0;
			int k = 0;
			for (j = 1; j <= n / 2 + 1 - i; j++)
			{
				printf(" ");
			}
			for (k = 0; k < (2 * i - 1); k++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (i = n / 2 + 2; i <= n; i++)
		{
			int j = 0;
			for (j = 0; j < i - n / 2 - 1; j++)
			{
				printf(" ");
			}
			for (j = 2 * n - 2 * i + 1; j > 0; j--)
			{
				printf("*");
			}
			printf("\n");
		}
		
	}
	else
	{
		printf("输入错误");
	}
}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		//判断是否为水仙花数
//		//1.计算i的位数n
//		int n = 1;
//		int tmp = i;
//		int sum = 0;//sum一定要创建在循环里面，每计算一个i，sum都应该从0开始
//		//while (i /= 10)//但这么做会把循环变量在循环内部改了
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//比如123/10 n++
//		//12/10 n++
//		//1/10
//		//2.计算i的每一位的n次方之和sum
//		tmp = i;
//		while (tmp)
//		{
//			sum+=(int)pow(tmp % 10, n);//得到最低位//pow返回double,sum是整型
//			tmp /= 10;//123/=10就是12
//		}
//		//3.判断
//		if (i == sum)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}