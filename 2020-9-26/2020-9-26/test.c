#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}
//int main()
//{
//	int i = 0;
//	while (i<=10)
//	{
//		i++;
//		if (i == 5)
//		continue;
//		printf("%d\n",i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i < 9999)
//	{
//			printf("fuck! %d\n",i);
//			i++;
//    }
//	return 0;
//}
//int main()
//{
//	int day;
//	printf("请输入星期:>");
// 	scanf("%d", &day);
// 	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	}
//	return 0;
//	}
//#include <stdio.h>
//int main()
//{
//	int a;
//	int b;
//	printf("请输入一个数\n");
//	scanf("%d", &a);
//	b = a % 2;
//	if (b == 0)
//		printf("a为偶数");
//	else
//		printf("a为奇数");
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i%2==1)
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
