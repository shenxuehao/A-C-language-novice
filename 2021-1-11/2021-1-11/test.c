#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	float money = 0.0, price = 0.0;
	int month = 0, date = 0, flag = 0;
	scanf("%f %d %d %d", &money, &month, &date, &flag);
	if ((month == 11) && (date == 11))
	{
		if (flag = 0)
		{
			if (0.7*money >= 0)
			{
				printf("%.2f", 0.7*money);
			}
			else
			{
				printf("0");
			}
		}
		if (flag = 1)
		{
			if (0.7*money - 50 >= 0)
			{
				printf("%.2f", 0.7*money - 50);
			}
			else
			{
				printf("0");
			}
		}
	}
	if ((month == 12) && (date == 12))
	{
		if (flag = 0)
		{
			if (0.8*money >= 0)
			{
				printf("%.2f", 0.8*money);
			}
			else
			{
				printf("0");
			}
		}
		if (flag = 1)
		{
			if (0.8*money - 50 >= 0)
			{
				printf("%.2f", 0.8*money - 50);
			}
			else
			{
				printf("0");
			}
		}
	}
	return 0;
}
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%x %o", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	float sum = 0;
//	int arr[5] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		sum = sum + arr[i];
//	}
//	printf("%.1f", sum/5);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	printf("Name    Age    Gender\n");
//	for (i = 0; i < 21; i++)
//	{
//		printf("-");
//	}
//	printf("\n");
//	printf("Jack    18     man\n");
//	return 0;
//}

//int main()
//{
//	printf("I lost my cellphone!");
//}

//int main()
//{
//	int n = 0, h = 0, m = 0;
//	scanf("%d %d %d", &n, &h, &m);
//	if ((m % h) < h && (m % h) > 0)
//	{
//		printf("%d", n - (m / h + 1));
//	}
//	else
//		printf("%d", n - (m / h));
//}

//int main()
//{
//	float a = 0, b = 0, c = 0;
//	scanf("%f %f %f", &a, &b, &c);
//	float ave = (a + b + c) / 3.0;
//	float sum = a + b + c;
//	printf("%.2f %.2f", sum, ave);
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d %d %d", a / 3600, (a - (a / 3600) * 3600) / 60, a - ((a - ((a / 3600) * 3600)) / 60) * 60 - ((a / 3600) * 3600));
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	if (a + b < 100)
//	{
//		printf("%d", a + b);
//	}
//	if (a + b >= 100)
//	{
//		if (((a + b) % 100) < 10)
//		{
//			printf("%d", (a + b) % 10);
//		}
//		else
//		printf("%d", (a + b) % 100);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	for (a = 10000; a < 99999; a++)
//	{
//		if (a == (a / 10)*(a % 10) + (a / 100)*(a % 100) + (a / 1000)*(a % 1000) + (a / 10000)*(a % 10000))
//			printf("%d ", a);
//	}
//	return 0;
//}