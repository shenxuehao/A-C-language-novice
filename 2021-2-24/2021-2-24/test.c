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
//输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
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


//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序。
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


//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，序
//列中未被删除数字的前后位置没有发生改变。
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


//输入n个整数的序列，要求对这个序列进行去重操作。所谓去重，是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置。
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


////输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
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