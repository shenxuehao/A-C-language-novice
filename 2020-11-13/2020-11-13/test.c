#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int num = 0;
	int empty = 0;
	int money = 20;
	scanf("%d", &money);
	while (money > 0 )
	{
		num++;
		money--;
		empty++;
		if (empty >= 2)
		{
			num++;
			empty-=2;
			empty++;
		}
		
	}
	printf("%d", num);
	return 0;
}

//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//要偶数，所以干脆设置line为上半部分的行数
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}