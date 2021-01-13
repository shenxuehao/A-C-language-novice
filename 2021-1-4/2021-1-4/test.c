#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int weight = 0, height = 0;
	float bmi = 0.0;
	scanf("%d %d", &weight, &height);
	float height1 = height / 100.0;
	bmi = ((float)weight / height1) / height1;
	printf("%.2f", bmi);
	return 0;
}

//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", a / b, a%b);
//	return 0;
//}

//int main()
//{
//	int a = 40, c = 212;
//	printf("%d",(-8 + 22)*a - 10 + c/2);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	scanf("%c", &ch);
//	printf("%d", ch);
//	return 0;
//}