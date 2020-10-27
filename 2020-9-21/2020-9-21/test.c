#define _CRT_SECURE_NO_DEPRECAT
#include <stdio.h>
#include <string.h>
int main()
{
	int a, b, max;
	printf("请输入a的值：");
	scanf("%d", &a);
	printf("请输入a的值：");
	scanf("%d", &b);
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	printf("较大值为:%d", max);
	return 0;
}
//#include <stdio.h>
//int main()
//{
//	int a = 5 / 2;
//	printf("%d\n", a);
//	int b = 5 % 2;
//	printf("%d\n", b);
//	return 0;
//}
////int main()
////{
////	int i = 0;
////	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
////	while (i < 10)
////	{
////		printf("%d\n", arr[i]);
//		i++;
//	}
//	/*printf("%d\n",arr[4]);*/
//	return 0;
//}
//int main()
//{
//	int input;
//	printf("加入比特\n");
//	printf("你会好好学习吗?（1/0）>:\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("月入百万\n");
//	else
//		printf("回家卖红薯\n");
//	return 0;
//}
//int main()
//{
//	printf("%d\n", '\1232');
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//} //答案是13

//int main()
//{
//	printf("%s\n", "\"");  
//}