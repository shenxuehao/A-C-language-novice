#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 10000; i++)
	{
		//判断i是否为自幂数
		//第一步：计算i的位数n
		//第二步：n位数，计算i的每一位的n次方之和
		//比较
	}
	return 0;
}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	//2 22 222 2222 22222
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;//第一次0*10+2，第二次2*10+2=22，22*10+2=222
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//}

//#include <stdio.h>
//int my_pow(int x,int y)
//{
//	int sum1 = 1;
//	int j = 0;
//	for (j = 0; j < y; j++)
//	{
//		sum1 = sum1*x;
//	}
//	return sum1;
//}
//
//int sum(int a,int n)
//{
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//	for (i = 0; i < n; i++)
//	{
//		tmp = my_pow(10, i);
//		sum = sum +a*tmp ;
//	}
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	int ret = { 0 };
//	int i = 0;
//	int Final = 0;
//	printf("input a:>");
//	scanf("%d", &a);
//	for (i = 1; i <= 5; i++)
//	{
//		ret = sum(a, i);
//		Final = Final + ret;
//	}
//	printf("%d\n",Final);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void nixu(char* str)
//{
//	assert(str);//保证指针的有效性，断言函数
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;// str + len - 1为最后一个字符的地址
//	while (left<=right)//相等就是指向同一个元素，不用逆序
//	{
//	char tmp=*left;//*left就是第一个元素
//	*left = *right;
//	*right = tmp;
//	left++;
//	right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);//但是scanf遇到空格不再读取
//	gets(arr);//gets为读取一行放到arr里
//	nixu(arr);
//	printf("%s", arr);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 }; 
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d，%d\n",*pulPtr,*(pulPtr + 3));
//	return 0;
//}