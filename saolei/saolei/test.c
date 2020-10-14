#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("********************\n");
	printf("*******1.play*******\n");
	printf("*******0.exit*******\n");
	printf("********************\n");
}
void game()
{
	//雷的信息存储,一个数组存放雷的信息，另一个数组存放排查出来的雷的信息
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//2.排查出的雷的信息
	char show[ROWS][COLS] = { 0 };//这个要打印出来
	//初始化
	Initboard(mine, ROWS, COLS, '0');//传参的时候实参不用写mine[][]，只要写数组名，形参必须写[][]！！一维数组可以省略个数
	Initboard(show, ROWS, COLS, '*'); //为了防止mine和show搞混
	//打印棋盘
	//Displayboard(mine, ROW, COL);//外面的一圈不用打印出来
	Displayboard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	// Displayboard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);//在mine里面找信息，放到show数组里去
}

void test()
{
	int input = 0;
	srand((unsigned)time(NULL));//unsigned为强制类型转换
	do//玩过一把不过瘾，再玩一把
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入无效，请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}