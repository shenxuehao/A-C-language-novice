#define ROW 3
#define COL 3
#include <stdio.h> //game.c�������game.h��Ҳ�Ͱ�"#include <stdio.h>"Ҳ������
#include <stdlib.h>
#include <time.h>
//��������
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL],int row,int col);//����
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char Iswin();//������������״̬1.���Ӯ��*2.����Ӯ��#3.��Ϸ����Q4.��Ϸ����C,����Ҫ����char������
int IsFull(char board[ROW][COL], int row, int col);