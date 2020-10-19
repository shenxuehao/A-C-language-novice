#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//int main()
//{
//	int r = 0, h = 0;
//	double P = 3.1415926, V = 0, S = 0;
//	printf("请输入底面半径:\n");
//	scanf("%d", &r);
//	printf("请输入高:\n");
//	scanf("%d", &h);
//	V = P*r*r*h;
//	S = 2 * P*r*r*h + 2 * P*r*h;
//	printf("%0.2f\n%0.2f\n",V,S);
//	return 0;
//}
#include<stdio.h>
int main()
{
	double r = 0, h = 0, s = 0, v = 0,P=3.14;
	printf("请输入圆柱体的底面半径r和高h\n");
	scanf("%lf\n%lf", &r,&h);
	s = 2 * r * r * P * h + 2 * P * r * h;
	v = P * r * r *h;
	printf("该圆柱体的表面积和体积为%0.2f\n%0.2f\n",s,v);
	return 0;
}