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
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)//��СȦ��ʼ��ӡ����һȦ����ӡ
	{
		printf("%d ", i);//�к�
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
	//��Ҫ���úö�Σ�����Ҫѭ��
	while (count)
	{
		int x = rand() % row + 1;//��ΧΪ1-9,ģ9Ϊ0-8��+1�ͱ�1-9
		int y = rand() % col + 1;
		if (board[x][y] == '0');//��Ϊ��ʼ����ʱ��ŵľ����ַ�'0'
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
		printf("��������������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			//����
			if (mine[x][y] == '1')
			{
				printf("���ź���ը����\n");
				Displayboard(mine, row, col);
				break;//whileѭ��������break
			}
			else//������
			{
				//����xy������Χ�м�����
				int count = get_minecount(mine, x, y);
				show[x][y] = count + '0';
				Displayboard(show, row, col);
				win++;	
			}
		}
		else
		{
			printf("��������Ƿ�������������!\n");
		}
	}
	if (win = col*row - EASY_COUNT)
	{
		printf("��ϲ�㣬ɨ�׳ɹ�"); 
		Displayboard(mine, row, col);
	}
}