#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
//void Change2()
//{
//	int a,b,c = 0;
//	int* pa = &a;
//	int* pb = &b;
//	c = *pa;
//	*pa = *pb;
//	*pb = c;
//}

//
//int main()
//{
//	int a = 0;
//	int* pa = &a; //pa里面存的a的地址
//	*pa = 20; //解引用操作，通过pa里的地址找到他所指向的内容
//	printf("a=%d", a);
//	return 0;
//}


//void Change1(int x, int y)
//{
//	int a,b,c = 0;
//	int* p = &a;
//	int* q = &b;
//	c = *p;
//	*p = *q;
//	*q = c;
//}
//
void Change2(int* pa, int* pb)
{
	int c = 0;
	c = *pa;
	*pa = *pb;
	*pb = c;
}


int main()
{
	int x = 0;
	int y = 0;
	printf("请输入x和y:>");
	scanf("%d\n%d", &x, &y);
	printf("x=%d y=%d\n",x,y);
	Change2(&x, &y);
	printf("x=%d y=%d\n", x,y);
	return 0;
}





//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
////timt_t
//
//void menu()
//{
//	printf("##### 要来一把嘛?#####\n");
//	printf("#####1.整  0.告辞#####\n");
//	printf("#####   请选择   #####\n");
//	return;
//}
//
//
//
//void game()
//{
//	int a = 0;
//	int ret = 0;
//	ret = rand()%100+1;
//	while (1)
//	{
//	printf("请输入:>");
//	scanf("%d", &a);
//		if (a > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (a < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//	return;
//}
//
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("整不整？");
//		scanf("%d", &input);
//		if (input == 1)
//		{
//			game();
//		}
//		else if (input == 0)
//		{
//			printf("退出游戏\n");
//			break;
//		}
//		else 
//		{
//			printf("无效输入\n");
//		}
//	} while (input);
//
//	return 0;
//}
//
//
