#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, j = 0, a = 0, b = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n % 2 == 0)//��Ϊż��
//		{
//			a = n / 2;
//			for (i = 0; i < a; i++)
//			{
//				for (j = 0; j < i; j++)
//				{
//					printf(" ");
//				}
//				printf("*");
//				for (j = 0; j < n - 2 * i-2; j++)
//				{
//					printf(" ");
//				}
//				printf("*");
//				for (j = 0; j < i; j++)
//				{
//					printf(" ");
//				}
//				printf("\n");
//			}
//			for (i = 0; i < a; i++)
//			{
//				for (j = 0; j < a - 1 - i; j++)
//				{
//					printf(" ");
//				}
//				printf("*");
//				for (j = 0; j < 2 * i; j++)
//				{
//					printf(" ");
//				}
//				printf("*");
//				for (j = 0; j < a - 1 - i; j++)
//				{
//					printf(" ");
//				}
//				printf("\n");
//			}
//		}
//		else//nΪ����
//		{
//			b = n / 2;
//			for (i = 0; i < b ; i++)
//			{
//				for (j = 0; j < i; j++)
//				{
//					printf(" ");
//				}
//				printf("*");
//				for (j = 0; j < n - 2 * i-2; j++)
//				{
//					printf(" ");
//				}
//				printf("*");
//				for (j = 0; j < i; j++)
//				{
//					printf(" ");
//				}
//				printf("\n");
//			}
//			for (i = 0; i < n / 2; i++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			for (i = 0; i < n / 2; i++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//			for (i = 0; i < b; i++)
//			{
//
//				for (j = 0; j < b - 1 - i; j++)
//				{
//					printf(" ");
//				}
//				printf("*");
//				for (j = 0; j < 2 * i + 1; j++)
//				{
//					printf(" ");
//				}
//				printf("*");
//				for (j = 0; j < a - 1 - i; j++)
//				{
//					printf(" ");
//				}
//				printf("\n");
//			}
//
//		}
//	}
//	return 0;
//}


//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵġ����ġ�������ͼ����
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)//��i��
//		{
//			if ((i == 0) || (i == n - 1))
//			{
//				for (j = 0; j < n; j++)
//				{
//					printf("* ");
//				}
//				printf("\n");
//			}
//			else
//			{
//				printf("*");
//				for (j = 0; j < 2 * (n - 2) + 1; j++)
//				{
//					printf(" ");
//				}
//				printf("* ");
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}



//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵġ����ġ�������ͼ����
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			if (i == 0)
//			{
//				printf("*");
//				for (j = 0; j < 2 * n - 1; j++)
//				{
//					printf(" ");
//				}
//				printf("\n");
//			}
//			else if (i == n - 1)
//			{
//				for (j = 0; j < n; j++)
//				{
//					printf("* ");
//				}
//				printf("\n");
//			}
//			else
//			{
//				printf("*");
//				for (j = 0; j < 2 * i - 1; j++)
//				{
//					printf(" ");
//				}
//				printf("*");
//				for (j = 0; j < 2 * n - 2 * i + 1; j++)
//				{
//					printf(" ");
//				}
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}


#include <stdio.h>
int main()
{
	char arr[100] = { 0 };
	int i = 0, count_a = 0, count_b = 0, ch = 0;
	while (((ch = getchar()) != '0') && ch != EOF)
	{
		if (ch == 'A')
		{
			count_a++;
		}
		if (ch == 'B')
		{
			count_b++;
		}
		i++;
		getchar();
	}
	if (count_a > count_b)
	{
		printf("A");
	}
	else if (count_a < count_b)
	{
		printf("B");
	}
	else
	{
		printf("E");
	}
	return 0;
}