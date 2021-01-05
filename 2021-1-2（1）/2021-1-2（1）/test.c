#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int jinzhi(int a);
int main()
{
	int d = 0; 
	scanf("%d", &d);
	jinzhi(d);
}
int jinzhi(int a)
{
	int i = 0;
	int b[20] = { 0 };
	while (a > 0)
	{
		b[i] = a % 2;
		printf("%d", b[i]);
		i++;
		a = a / 2;
	}
	return 0;
}

