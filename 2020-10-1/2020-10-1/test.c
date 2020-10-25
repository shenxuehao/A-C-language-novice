#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	for (i = 100; i <= 200; i++)
	{
		for (n = 2; n < i; n++)
		{
			if (i%n != 0)
				break; 
			printf("%d", i);
		}
	}
	return 0;
}






//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//			{
//				printf("%d ", i);
//				count++;
//			}
//	}
//	printf("\n一共有%d个\n", count);
//	return 0;
//}





//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	printf("请输入m和n:>");
//	scanf("%d\n%d", &m, &n);
//	while (r=m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("最大公约数为%d\n",n);
//	return 0;
//}






//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}