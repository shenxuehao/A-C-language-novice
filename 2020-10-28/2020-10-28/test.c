#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	//strcpy
	//字符串拷贝
	char arr1[] = "#############";
	char arr2[] = "bit";
	strcpy(arr1, arr2);//char *strcpy( char *strDestination, const char *strSource );Destination目的地、Source源头
	printf("%s\n", arr2);
	return 0;
}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	printf("i的地址为  %p\n", &i);
//	printf("arr的地址为%p\n", arr);
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//实现1!+2!+3!+4!......+n!
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int sum = 1;
//	int n = 0;
//	int j = 0;
//	int ret = 0;
//	int count = 0;
//	printf("请输入n的值:>");
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		count = j;
//		sum = 1;
//		for (i = 1; i <= j; i++)
//		{
//			sum = sum*i;
//		}
//		ret = sum + ret;
//	}
//	printf("ret=%d\n", ret);
//	//printf("sum=%d\n", sum);
//	return 0;
//}