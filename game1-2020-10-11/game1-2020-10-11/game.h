#define ROW 3
#define COL 3
#include <stdio.h> //game.c引了这个game.h，也就把"#include <stdio.h>"也引用了
#include <stdlib.h>
#include <time.h>
//函数声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL],int row,int col);//声明
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char Iswin();//告诉我们四种状态1.玩家赢了*2.电脑赢了#3.游戏继续Q4.游戏结束C,所以要返回char的类型
int IsFull(char board[ROW][COL], int row, int col);