#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if (i == j)//对角线元素
			{
				arr[i][j] = 1;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (((j != 0) && (i != j)) && (i >= j))
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}

		}

	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i >= j)
			{
				printf("%-3d ", arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}



//#include <stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	//11001000
//	unsigned char b = 100;
//	//01100100
//	unsigned char c = 0;
//	c = a + b;//整型提升
//	//a和b相加的时候会发生整型提升，高位补符号位
//	//00000000000000000000000011001000-a
//	//00000000000000000000000001100100-b
//	//00000000000000000000000100101100-a+b（不往c里面放）
//	//                        00101100-c
//	printf("%d %d", a + b, c);//这里打印的是十进制有符号的补码，高位是0，是正数的补码
//	return 0;//以%d打印，c又是char类型的变量，再整型提升，c也是无符号的，高位补0，即0000000000000000000000000000101100
//}//300 44    



//#include <stdio.h>
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////1.从左边开始找一个偶数从右边开始找一个奇数
////2.把他们交换
//void move(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)//left < right的条件是让交换停下来
//	{
//		while ((left < right)&&(arr[left] % 2 == 1))//从左边找偶数//加上(left < right)的条件是防止left一直加加越界了
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))//从右边找奇数
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			arr[left] = arr[left] ^ arr[right];
//			arr[right] = arr[left] ^ arr[right];
//			arr[left] = arr[left] ^ arr[right];
//		}
//	}
//	
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int arr[] = { 1, 1, 3, 3, 5, 5, 7, 7, 9, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//	return 0;
//}