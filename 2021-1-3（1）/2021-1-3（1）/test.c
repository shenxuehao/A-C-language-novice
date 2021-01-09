#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int ch1 = 0;
	int ch2 = 0;
	scanf("%d,%d", &ch1, &ch2);
	int tmp = 0;
	tmp = ch1;
	ch1 = ch2;
	ch2 = tmp;
	printf("a=%d,", ch1);
	printf("b=%d", ch2);
	return 0;
}