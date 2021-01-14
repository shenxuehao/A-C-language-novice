#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
int main()
{
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	printf("score1=%d,score2=%d,score3=%d", a, b, c);
	return 0;
}

//int main()
//{
//	double pi = 3.1415926;
//	double r = 0.0;
//	scanf("%lf", &r);
//	double V = (4.0 / 3)*pi*r*r*r;
//	printf("%.3f", V);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	double p = (a + b + c) / 2.0;
//	double len = a + b + c;
//	double area = sqrt(p*(p - a)*(p - b)*(p - c));
//	printf("circumference=%.2f area=%.2f", len, area);
//	return 0;
//}