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
//	printf("�������(1/0)���㣿\n");
//	scanf("%d\n%d", &a,&b);
//	if (a == 1,b<=9)
//	{
//		printf("��!\n");
//	}
//	if (a==0)
//	{
//		printf("��ǣ�\n");
//		
//	}
//	return 0;
//}
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������a��b��ֵ:>");
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
//	printf("������x��ֵ:>");
//	scanf("%d", &x);
//	printf("������y��ֵ:>");
//	scanf("%d", &y);
//	sum=Add(x, y);
//	printf("x+y��ֵΪ%d\n", sum);
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
//	printf("������a��ֵ:>");
//	scanf("%d", &a);
//	printf("������b��ֵ:>");
//	scanf("%d", &b);
//	sum = Add(a, b);
//	printf("��Ϊ%d", sum);
//	return 0;
//}