#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, tmp = 0, sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &tmp);
//		sum += tmp;
//	}
//	return 0;
//}
//����n���ɼ����������n���ɼ�����߷�������ͷ����Ĳ
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, max = 0, min = 10000, tmp = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &tmp);
//		if (tmp>max)
//		{
//			max = tmp;
//		}
//		if (tmp < min)
//		{
//			min = tmp;
//		}
//	}
//	printf("%d", max - min);
//	return 0;
//}


//����һ���������У��ж��Ƿ����������У�����ָ�����е�������С����������ߴӴ�С����
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, arr[50] = { 0 }, num = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 1; i < n-1; i++)
//	{
//		if (((arr[i]>arr[i - 1]) && (arr[i + 1] < arr[i])) || ((arr[i]<arr[i - 1]) && (arr[i + 1]>arr[i])))
//		{
//			printf("unsorted");
//			break;
//		}
//		else
//		{
//			num++;
//		}
//	}
//	if (num == n - 2)
//	{
//		printf("sorted");
//	}
//	return 0;
//}


//��һ���������У��������ظ�������������ɾ��ָ����ĳһ�����������ɾ��ָ������֮������У���
//����δ��ɾ�����ֵ�ǰ��λ��û�з����ı䡣
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, arr[51] = { 0 },del = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &del);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == del)
//		{
//			continue;
//		}
//		else
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}


//����n�����������У�Ҫ���������н���ȥ�ز�������νȥ�أ���ָ�����������ÿ���ظ����ֵ�������ֻ����������һ�γ��ֵ�λ�ã�ɾ������λ�á�
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0, j = 0, arr[1000] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 1; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				arr[i] = 0;
//			}
//		}
//	}
//	i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i]!=0)
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


////���������������е����У����������кϲ�Ϊһ���������в������
//#include <stdio.h>
//int main()
//{
//	int m = 0, n = 0, i = 0, j = 0, arr1[100] = { 0 }, arr2[100] = { 0 }, arr3[200] = { 0 }, k = 0, t = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	i = 0;
//	j = 0;
//	for (k = 0; k < n+m; k++)
//	{
//		if (arr1[i] == 0)
//		{
//			for (t = j + i; t < m + n; t++)
//			{
//				arr3[t] = arr2[j];
//				j++;
//			}
//		}
//		else if (arr2[j] == 0)
//		{
//			for (t = j + i ; t < m + n; t++)
//			{
//				arr3[t] = arr1[i];
//				i++;
//			}
//		}
//		else
//		{
//			if (arr2[j] <= arr1[i])
//			{
//				arr3[k] = arr2[j];
//				j++;
//			}
//			else
//			{
//				arr3[k] = arr1[i];
//				i++;
//			}
//		}
//			
//	}
//	for (i = 0; i < m + n; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}