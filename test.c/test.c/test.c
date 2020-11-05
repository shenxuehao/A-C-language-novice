#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int Fib(int n)
{
	if (n <= 2)
		return 1;
	if (n > 2)
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int n, ret;
	printf("请输入n:>");
	scanf("%d", &n);
	ret=Fib(n);
	printf("第%d个斐波那契数为%d",n,ret);
	return 0;
}





int Fac1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int Fac2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n*Fac2(n - 1);//Fac(n)=nFac(n-1)
}
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	printf("请输入n:>");
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}


//#include <stdio.h>
//int my_strlen(char* str) //返回的长度为整数 所以用int,
//str里面存的是bit的第一个字符的地址，
//是一个指针解引用一下指针就能找到b了
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//指针+1
//	}
//	return count;
//} //此方法需要额外创建变量
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//	return 0;
//} //先递后归
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr是数组，数组传参，
//	//传过去的不是整个数组，而是第一个元素的地址，是个指针。
//	printf("len=%d\n", len);
//	return 0;
//}
