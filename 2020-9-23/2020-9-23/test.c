#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int a = 0;
	int* p = &a;
	*p = 20;
	printf("a=%d\n", a);
	return 0;
}
//int b;
//int main()
//{
//	int a;
//	printf("今晚冲吗？(1/0)几点？\n");
//	scanf("%d\n%d", &a,&b);
//	if (a == 1,b<=9)
//	{
//		printf("冲!\n");
//	}
//	if (a==0)
//	{
//		printf("告辞！\n");
//		
//	}
//	return 0;
//}
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入a和b的值:>");
//	scanf("%d\n%d", &a,&b);
//	int max = MAX(a, b);
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//


//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("%d\n", a);
//	return 0;
//}
//extern int Add(int, int);
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int sum = 0;
//	printf("请输入x的值:>");
//	scanf("%d", &x);
//	printf("请输入y的值:>");
//	scanf("%d", &y);
//	sum=Add(x, y);
//	printf("x+y的值为%d\n", sum);
//	return 0;
//}







//int main()
//{
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//const int a = 50;
//int main()
//{
//	int a = 10;
//	int b;
//	b = a++;
//	printf("%d,%d\n", a,b);
//	return 0;
//}





 
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("请输入a的值:>");
//	scanf("%d", &a);
//	printf("请输入b的值:>");
//	scanf("%d", &b);
//	sum = Add(a, b);
//	printf("和为%d", sum);
//	return 0;
//}