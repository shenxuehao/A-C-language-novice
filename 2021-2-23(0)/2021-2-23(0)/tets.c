#define _CRT_SECURE_NO_DEPRECATE
//����NxM���󣬾���Ԫ�ؾ�Ϊ�������������д������Ԫ��֮�͡�
//#include <stdio.h>
//int main()
//{
//	int m = 0, n = 0, sum = 0, i = 0, j = 0, arr[100][100] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j]>0)
//			{
//				sum=sum+arr[i][j];
//			}	
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//����10�Ƴɼ���������ʾ�����10�Ƴɼ���
//#include <stdio.h>
//int main()
//{
//	int i = 0, arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//����10��������Ҫ������ʱ���������10������ӡ������������������ǰ��������෴��˳���ӡ��10������
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 9; i >=0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//����10���������ֱ�ͳ����������������ĸ�����
//#include <stdio.h>
//int main()
//{
//	int i = 0, arr[10] = { 0 }, positive = 0, negative = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > 0)
//		{
//			positive++;
//		}
//		else if (arr[i] < 0)
//		{
//			negative++;
//		}
//		printf("positive:%d", positive);
//		printf("negative:%d", negative);
//	}
//	return 0;
//}


//��������N��Ȼ������N������������N�����ĺ͡�
#include <stdio.h>
int main()
{
	int n = 0, i = 0, tmp = 0, sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &tmp);
		sum += tmp;
	}
	printf("%d\n", sum);
	return 0;
}