#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{ 
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch + 32);
		getchar();//����������\n
	}
	return 0;
	//int ch = getchar();
	//ch = ch + 32;
	//putchar(ch);
	//return 0;����һ���ַ�
}

//int main()
//{
//	int n = 0;
//	while (n)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", a % 10);
//	printf("%d", (a / 10) % 10);
//	printf("%d", (a / 100) % 10);
//	printf("%d", (a / 1000) % 10);
//	return 0;
//}