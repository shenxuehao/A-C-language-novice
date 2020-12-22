#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int x, y;
	scanf("%d", &x);
	if (x < 0)
	{
		printf("y=0");
	}
	if (x < 5 && x>=0)
	{
		y = 6 * x;
		printf("%d\n", y);
	}
	if (x<10 && x>=5)
	{
		printf("y=8");
	}
	if (x >= 10)
	{
		y = 2 * x - 5;
		printf("%d\n", y);
	}
	return 0;
}