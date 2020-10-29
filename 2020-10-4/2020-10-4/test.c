#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] =  "Hello World";
	memset(arr1, '2', 6);
	printf("%s", arr1);
	return 0;
}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int a = 0;
//	char arr1[] = "bit";
//	char arr2[20] = "#######";
//	strcpy(arr2, arr1);
// 	printf("%s\n", arr2);
//	a=strlen(arr2);
//	printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("请输入两个数:>");
//	scanf("%d %d", &a, &b);
//	sum = Add(a, b);
//	printf("两个值的和为%d",sum);
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}