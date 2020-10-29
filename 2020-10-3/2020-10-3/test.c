#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}





//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	//shut down
//	while (1)
//	{
//		printf("请注意，你的电脑将在一分钟内关机，如果输入“我是猪”就取消关机\n请输入:>");
//		scanf("%s", &input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}





//#include <stdio.h>
//int main()
//{
//	printf("hello bite\n");
//	goto again;
//	printf("你好\n");
//again:
//	printf("hehe\n");
//	return 0;
//}