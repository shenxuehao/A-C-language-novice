#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int i = 0;
	while (1)
	{
		printf("NTR %d\n",i);
		i++;
	}

	return 0;
}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[40] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < i-1	; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}