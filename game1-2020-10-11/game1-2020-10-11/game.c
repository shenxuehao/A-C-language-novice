#define _CRT_SECURE_NO_DEPRECATE
#include "game.h"
void InitBoard(char board[ROW][COL], int row, int col)//ROW和COL是在game.h里定义的，也要引头文件
{
	/*int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", board[i][j] );
		}
		printf("\n");
	}*/
	int i = 0; 
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' '; 
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		//1.打印一行的数据
		for (j = 0; j < col; j++)//和列绑定起来了
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
			printf("|");
			}
		}
		printf("\n");
		//打印分割行
			if (i < row - 1)//最后一行的分割符不用打印  
			{
				for (j = 0; j < col; j++)
				{
					printf("---");
					if (j < col-1)
					printf("|");
				}
		}
			printf("\n");
	}
}


void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走\n");
	while (1)
	{
		printf("请输入要下的坐标:>");
		scanf("%d%d", &x, &y);
		//判断xy坐标的合法性
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标已经被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
}


void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走\n"); 
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//棋盘没有满
			}
		}
	}
	return 1;//棋盘满了
}   //返回1表示棋盘满了，返回0表示棋盘没有满


char Iswin(char board[ROW][COL], int row, char col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')//判断三行
		{
			return board[i][1];//如果返回的是*，玩家赢，如果返回的是#，电脑赢，因为*是玩家下的，#是电脑下的
		} 
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[2][i] == board[1][i] && board[1][i] != ' ')//判断三列
		{
			return board[0][i];
		}
	}
		if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[1][1] != ' ')//判断对角线
		{
			return board[1][1];
		}
		if (board[0][2] == board[1][1] && board[2][0] == board[1][1] && board[1][1] != ' ')//判断对角线
		{
			return board[1][1];
		}
		//判断是否平局，没有人赢，棋盘又满了
		if (1 == IsFull(board, ROW, COL))
		{
			return 'Q';
		}
		else
		{
			return 'C';
		}
}