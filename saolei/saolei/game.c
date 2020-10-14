#define _CRT_SECURE_NO_DEPRECATE
#include "game.h"
void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)//从小圈开始打印，第一圈不打印
	{
		printf("%d ", i);//行号
		for (j = 1; j <= col; j++)
		{
			
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count =  EASY_COUNT;
	//雷要布置好多次，所以要循环
	while (count)
	{
		int x = rand() % row + 1;//范围为1-9,模9为0-8，+1就变1-9
		int y = rand() % col + 1;
		if (board[x][y] == '0');//因为初始化的时候放的就是字符'0'
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_minecount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x - 1][y + 1] + mine[x][y + 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<col*row - EASY_COUNT)
	{
		printf("请输入排雷坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法
			//踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，炸死了\n");
				Displayboard(mine, row, col);
				break;//while循环，跳出break
			}
			else//不是雷
			{
				//计算xy坐标周围有几个雷
				int count = get_minecount(mine, x, y);
				show[x][y] = count + '0';
				Displayboard(show, row, col);
				win++;	
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入!\n");
		}
	}
	if (win = col*row - EASY_COUNT)
	{
		printf("恭喜你，扫雷成功"); 
		Displayboard(mine, row, col);
	}
}