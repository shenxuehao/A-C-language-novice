#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	srand((unsigned int)time(NULL));
	for (i = 0; i < 10; i++)
	{
		arr[i] = rand() % 101;
	}
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = 0;;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	
}