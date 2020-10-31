#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	//创建数组，存放整形，10个
	int arr[10] = { 1, 2, 3 };//不完全初始化,剩下的元素默认初始化为0
	char arr2[5] = "ab";//第三个元素放的是"\0" //{ a, b };(这样不行)
	char arr3[5] = { 'a', 'b' };
	char arr4[5] = { 'a', 98 };//里面依然是ab	
	char arr5[] = "abcdef";//没有指定大小的时候，必须要初始化，
	//它会根据初始化的内容来确定数组有几个元素 共7个元素 还有个"\0"
	printf("%d\n", sizeof(arr5));//计算arr4所占空间的大小，放了7个元素，每个元素是个char 7*1=7
	printf("%d\n", strlen(arr5));//字符串长度
	//int n = 5;
	//char ch[n];//error 必须为常量
	return 0;
}














//#include <stdio.h>
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;//测试第三个斐波那契数的计算次数
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else if (n > 2)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	
//} //太慢了
//#include <stdio.h>
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--; //比如求第4个 1+1=2,1+2=3，一共两次
//	}
//	return c;
//}
//
//
//int main()
//{
//	int n;
//	int ret;
//	printf("请输入n:>");
//	scanf("%d", &n);
//	if (n<=0)
//	{
//		printf("输入错误\n");
//	}
//	if (n > 0)
//	{
//		ret = Fib(n);
//		printf("%d\n", ret);
//	}
//	return 0;	
//}