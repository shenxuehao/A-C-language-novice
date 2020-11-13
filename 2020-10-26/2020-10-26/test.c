#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int Pow(int k, int a)//计算k的n次方
{
	if (a == 0)
	{
		return 1;
	}
	else if (a > 0)
	{
		return k*Pow(k, a - 1);
	}
	else
	{
		printf("输入错误\n");
	}
}
int Sum(int count,int* arr)
{
	int sum = 0;
	int i = 0;
	for (i = 0; i<count; i++)
	{
		sum = Pow(arr[i], count) + sum;
	}
	return sum;
}
int Judge_num(int num)//判断输入的数字有几位
{
	int count = 1;
	while (num > 9)
	{
		num = num / 10;
		count++;
	}
	return count;
}

int main()
{
	int num = 0;
	printf("请输入要判断的数:>");
	scanf("%d", &num);
	int i = 0;
	int n = 0;
	int k = 0;
	int test = 0;
	int arr[10] = { 0 };
	int count = Judge_num(num);
	test = num;
	while (test)
	{
		arr[i++] = test % 10;
		test /= 10;
	}
	//for (i = 0; i < count; i++)
	//{
	//	int a = i + 1;
	//	//arr[i] = num % ( Pow(10,a));
	//	arr[i] = num % (Pow(10, a));
	//	num
	//}
	
	if (num == Sum(count,arr))
	{
		printf("是水仙花数\n");
	}
	else
	{
		printf("不是水仙花数\n");
	}
	return 0;
}


//#include <stdio.h>
//double Pow(int n, int k)//因为有1.0所以要写成double类型
//{//n^k=n*n^(k-1>
//	if (k < 0)
//	{
//		return (1.0 / Pow(n, -k ));
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Pow(n , k-1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入n和k的值:>");
//	scanf("%d", &n);
//	getchar();
//	scanf("%d", &k);
//	double ret = Pow(n, k);
//	printf("ret=%lf\n", ret);
//	return 0;
//}

//#include <stdio.h>
////DigitSum(1729)
////DigitSum(172)+9=DigitSum(172)+1729%10
////DigitSum(17)+172%10+1729%10
////DigitSum(1)+17%10+172%10+1729%10
////1 + 17 % 10 + 172 % 10 + 1729 % 10
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	printf("输入一个数:>\n");
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret=%d", ret);
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//int my_strlen(char arr[])
//{
//	int count = 0;
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		i++;
//		count++;
//	}
//	return count;
//}
//void reverse_string(char* arr)
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	reverse_string(arr + 1);//首元素地址+1就是第二个元素的地址
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}