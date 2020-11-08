#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>//求字符串 1.strlen() 2.递归，模拟实现strlen，计数器方式 3.my_strlen
int my_strlen(char* str)//用char*是因为传过来的是首元素地址，str指针指向了字符串起始位置
{//假设有个指针end指向\0
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;//指针减去指针
}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);//数组的首元素地址放进去，求一个长度出来，返回一个整型放到lem变量里面去
	printf("%d\n", len);
	return 0; 
}
//#include <stdio.h>
//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[0] - &arr[9]);
//	printf("%d\n", &arr[9] - &ch[0]);//按整形讨论还是按照字符讨论，指针减去指针一定是指向同一块空间的
//	//1>d:\test\2020-10-20\2020-10-20\test.c(8): warning C4133: “-”: 从“char *”到“int *”的类型不兼容
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];//取出第十个元素的地址
//	for (i = 0; i < sz/2; i++)
//	{
//		printf("%d ", *p);
//		p -= 2;//向后跳两个整型
//	}
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;//数组名就是首元素地址
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;//向后跳一个整型
//	}
//	return 0;
//}



//#include <stdio.h>
//int* test()
//{
//	int arr[10] = { 0 };
//	return arr;
//}
//
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;//返回的是临时变量，存在问题
//}
//
//


//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;//a是首元素地址,p里面存的就是首元素地址
//	for (i = 0; i <= 12; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}