#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
//int my_strlen(char* str)//传过来的是字符串的首地址，拿指针解锁
//{
//	int count = 0;
//	while (*str!='\0')//说明是个有效的字符
//	{
//		count++;
//		str++;//找下一个字符
//	}
//	return count;
//}
//void reverse_string(char arr[],int sz)//或者char* arr
//{
//	int left = 0;
//	int right = sz ;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

void reverse_string();

int main()
{
	char arr[] = "abcdef";//"fedcba"//a b c d e f \0
	int sz = sizeof(arr) / sizeof(arr[0]) - 2;
	reverse_string(arr,sz);
	printf("%s\n", arr);
	return 0;
}


//void excel(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入n: >");
//	scanf("%d", &n);
//	excel(n);
//	return 0;
//}


//int Fun(int n)
//{
//	if (n == 5)
//	{
//		return 2;
//	}
//		else
//		return 2 * Fun(n + 1);
//}