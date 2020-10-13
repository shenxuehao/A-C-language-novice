#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
#include "game.h"
//测试三子棋
void game()
{
	char ret = 0;//用来接收四种结果
	//数组，存放玩家和电脑走出的棋盘信息
	char board[ROW][COL] = {0};//可以在game.h中进行改动
	InitBoard(board, ROW, COL);//因为InitBoard是game里的代码，可以在.h中声明，在.c中进行实现,
	//初始化棋盘，本质上是初始化数组
 	DisplayBoard(board, ROW, COL);//打印棋盘
	//下棋
	while (1)
 	{
		PlayerMove(board, ROW, COL);//玩家下棋
		DisplayBoard(board, ROW, COL);
		//判断玩家是否获胜
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑下棋
		DisplayBoard(board, ROW, COL);
		//判断电脑是否获胜 //每一步都可能会出结果
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}

}
void menu()
{
	printf("**********************\n");
	printf("****1.play  0.exit****\n");
	printf("**********************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//参数为空指针，返回类型写成unsigned int
	do//1.玩一把不过瘾，继续玩
	{
		menu();//2.打印一个菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入不合法，请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
