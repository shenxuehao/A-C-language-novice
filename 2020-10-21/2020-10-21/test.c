#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int *pa = &a;
	//int *pb = &b;
	//int *pc = &c;
	//整型数组-存放整型
	//字符数组-存放字符
	//指针数组-存放指针
	//int arr[10];//arr为数组名
	int* arr2[3] = { &a, &b, &c };//指针数组，每一个元素都是int*的指针
	int i = 0;//借助数组，把a b c三个值打印出来
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", *arr2[i]);
	}
	return 0;
}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr+1);
//	printf("%p\n", &arr[0]+1);
//	return 0;
//}
//005CFEAC
//005CFEAC
//005CFEAC
//005CFEB0
//005CFED4
//005CFEB0