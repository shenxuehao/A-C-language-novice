#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int i;
	char arr1[] =  "2398444863" ;
	char arr2[] =  "0000000000" ;
	for (i = 1; i <= 3; i++)
	{
		printf("请输入十位数的密码:>");
		scanf("%s", &arr2);
		if (strcmp(arr2, arr1)==0)
		{
			printf("密码正确\n");
			break;
		}
		else
		printf("密码错误\n");
	}
	return 0;
}




















//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	//welcom to bit!!!!
//	char arr1[] = "welcom to NanJing Agriculture University";
//	char arr2[] = "                                                                      ";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[1])-2;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//	    arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(5);//毫秒
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr1);
//	return 0;
//}









//int main()
//{
//	int k ;
//	printf("请输入k:>");
//	scanf("%d", &k);
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13, 16, 19, 25, 26, 30, 65, 92, 112, 159, 168, 199 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//元素个数
//	int left = 0; //左下标
//	int right = sz - 1;//右下标
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//		if (left>right)
//		{
//			printf("找不到\n");
//		}
//		return 0;
//}
