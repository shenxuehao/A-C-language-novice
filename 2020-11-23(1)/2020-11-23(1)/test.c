#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int fact(int num)
{
	int sum2 = 1;
	do
	{
		sum2 = sum2 * num ;
		num--;
	} while (num > 0);
	return sum2;
}
int main()
{
	int n = 0;
	int num;
	int sum = 0;
	int sum1 = 0;
	printf("������n\n");
	scanf("%d", &n);
	num = n;//��ʱ����������n��ֵ
	do
	{
		sum1=fact(num);
		sum = sum1 + sum;
		num--;
	} while (num > 0);
	printf("%d\n", sum);
	return 0;
}