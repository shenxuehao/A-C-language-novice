#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

//#include <stdio.h>
//void BubbleSort(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (j = sz; j > 1; j--)
//	{
//		for (i = sz-1; i > sz-(j-1); i--)
//		{
//			if (arr[i-1] > arr[i])
//			{
//				arr[i - 1] = arr[i - 1] ^ arr[i];
//				arr[i] = arr[i - 1] ^ arr[i];
//				arr[i - 1] = arr[i - 1] ^ arr[i];
//			}
//		}
//	}
//	
//	
//}
//int main()
//{
//	int arr[10] = { 1, 6, 5, 4, 1, 3, 5, 1, 5, 3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr,sz);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%d ",arr[j]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//void print(char* str)
//{
//	printf("hehe:%s",str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	(*p)("haha");
//}
//int main()
//{
//	test(print);
//	return 0;
//}