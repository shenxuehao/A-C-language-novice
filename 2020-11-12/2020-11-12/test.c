#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	printf("������n�ĸ���:>");
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
		printf("�������");
	}
}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		//�ж��Ƿ�Ϊˮ�ɻ���
//		//1.����i��λ��n
//		int n = 1;
//		int tmp = i;
//		int sum = 0;//sumһ��Ҫ������ѭ�����棬ÿ����һ��i��sum��Ӧ�ô�0��ʼ
//		//while (i /= 10)//����ô�����ѭ��������ѭ���ڲ�����
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//����123/10 n++
//		//12/10 n++
//		//1/10
//		//2.����i��ÿһλ��n�η�֮��sum
//		tmp = i;
//		while (tmp)
//		{
//			sum+=(int)pow(tmp % 10, n);//�õ����λ//pow����double,sum������
//			tmp /= 10;//123/=10����12
//		}
//		//3.�ж�
//		if (i == sum)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}