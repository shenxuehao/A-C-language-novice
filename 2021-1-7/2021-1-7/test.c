#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int b = 10;
	printf("%d", (++b) + (++b) + (++b));
}

//int main()
//{
//	int k = 0, i = 0, j = 0;
//	for (i = 1, j = 10; i <= j; i++, j--)
//		k = i + j;
//	printf("%d\n", k);
//	return 0;
//}