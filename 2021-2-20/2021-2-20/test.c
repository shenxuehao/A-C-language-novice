#define _CRT_SECURE_NO_DEPRECATE
//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ�K��ͼ��
//#include <stdio.h>
//int main()
//{
//	int n = 0, j = 0, i = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n + 1; i++)
//		{
//			for (j = 0; j < n - i + 1; j++)
//			{
//				printf("* ");
//			}
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < i + 2; j++)
//			{
//				printf("* ");
//			}
//			for (j = 0; j < n - i; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵļ���ͼ����
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i <= n; i++)
//		{
//			for (j = 0; j < 2 * (n - i); j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < i + 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < 2 * i + 2; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < n - i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵķ�б����ͼ����
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)//��i��
//		{
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			for (j = 0; j < n - i - 1; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//�������룬һ��������2~20������ʾ�����������Ҳ��ʾ�����б�ߵġ�*����������
#include <stdio.h>
int main()
{
	int n = 0, j = 0, i = 0;
	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i < n; i++)//n��
		{
			for (j = 0; j < n - i - 1; j++)
			{
				printf(" ");
			}
			printf("*");
			for (j = 0; j < i; j++)
			{
				printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}

// KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ�X��ͼ����
