#define _CRT_SECURE_NO_DEPRECAT
#include <stdio.h>
#include <string.h>
int main()
{
	int a, b, max;
	printf("������a��ֵ��");
	scanf("%d", &a);
	printf("������a��ֵ��");
	scanf("%d", &b);
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	printf("�ϴ�ֵΪ:%d", max);
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
//	printf("�������\n");
//	printf("���ú�ѧϰ��?��1/0��>:\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("�������\n");
//	else
//		printf("�ؼ�������\n");
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
//} //����13

//int main()
//{
//	printf("%s\n", "\"");  
//}