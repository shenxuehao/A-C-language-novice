#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("hehe\n");
	}
	return 0;
}
//int main()
//{
//	int i=0 ;
//	int j=0 ;
//	for ( ; i <=9; i++)
//	{
//		for ( ; j <=9; j++)
//		{
//			printf("haha\n");
//		}	
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	scanf("%d", &ch);
//	printf("%c\n", ch);
//	return 0;
//}









//int main()
//{
//	int ret ;
//	char ch;
//	char password[10] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", &password);
//	while (ch=getchar() != '\n')
//		printf("请确认密码(Y/N):>");
//		ret = getchar();
//		//scanf("%s", &ret);
//		if (ret == 'Y')
//			printf("确认成功\n");
//		else
//			printf("确认失败\n");
//	return 0;
//}
//




//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!= EOF)
//	putchar(ch);
//	return 0;
//}