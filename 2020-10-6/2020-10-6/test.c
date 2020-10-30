#define _CRT_SECURE_NO_DEPRECATE
//写一个函数，实现一个整形有序数组的二分查找，找到了返回下标，找不到返回-1
#include <stdio.h>
//F10逐过程 //F11逐语句 
binary_search(int arr[], int k, int sz) //形参名字可以和实参相同
{	//算法的实现 
	//数组在传参的时候，传的不是整个数组，而是传的数组的第一个元素的地址，
	//如果全部传过去的话，会造成空间的浪费
	//本质上，这里的arr是一个指针，而指针在32位系统中的占有4个字节，64位系统中占有8个字节，
	//而arr[0]为第一个元素，为整形，大小也是4
	int left, right, mid, i;
	left = 0;
	right = sz - 1;
	while (left <= right) //left=right的时候也可以被查找
	{
		mid = (left + right) / 2;//这句话不能放到外面，要不然的话会只查找一次   
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;

}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz); //binary_search意思是二分查找，并且接收返回值
	if (ret == -1)
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到了，下表是%d\n",ret);
	}//先写函数怎么用，再写函数怎么实现
	return 0;
}


////打印出所有的闰年
//#include <stdio.h>
//int is_leap_year(int a)
//{
//	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
//		return 1;
//}
//int main()
//{
//	int t,i;
//	int year;
//	int count = 0;
//	for (year = 1000; year < 2000; year++)
//	{
//		//printf("请输入年份:>");
//		//scanf("%d", &year);
//		t = is_leap_year(year);
//		if (t == 1)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//	}
//	printf("总共有%d个\n", count);
//	return 0;
//}






////写一个函数可以判断一个数是不是素数
//#include <stdio.h>
//#include <math.h>
//int is_prime(int x) //是素数返回1 不是素数返回0
//{
//	int i = 0;
//	for (i = 2; i < sqrt(x); i++)
//	{
//		if (x%i == 0)
//			return 0;
//	}
//	return 1;
//}
//		//if (x>i&&x%i == 0)
//		//	break;
//		//if (x == i)
//		//	return 1;
//int main()
//{
//	int a, t;
//	int k = 1;
//	do
//	{
//		printf("请输入一个数:>");
//		{
//			scanf("%d", &a);
//		}
//		t = is_prime(a);
//		if (t == 1)
//			printf("%d为素数\n", a);
//		else
//		{
//			printf("%d不为素数\n", a);
//		}
//		printf("继续吗(1/0):>" );
//	again:
//		scanf("%d", &k);
//		if (k == 0)
//		{
//			printf("退出游戏\n");
//			break;
//		}
//		if (k != 0&&k != 1)
//		{
//			printf("请重新输入\n");
//			goto again;
//		}
//	} while (k==1);
//	return 0;
//}
