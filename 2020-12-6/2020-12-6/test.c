#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int x, i;
	for (x = 1; x < 50; x++)
	{
		for (i = 2; i < x; i++)
		{
			if (x%i == 0)
			break;
		}
		if (i >= x)
		printf("%d ", x);
	}
return 0;
}
