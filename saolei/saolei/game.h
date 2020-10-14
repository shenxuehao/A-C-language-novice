#include <stdio.h>
#include <string.h>
#include <time.h>

#define ROW 9
#define COL 9 //没有分号

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

void Initboard(char board[ROWS][COLS], int rows, int cols, char set);
void Displayboard(char board[ROWS][COLS], int row, int col);
//mine传过来的一直是ROWS行和COLS列，传过来的是什么数组，就用什么数组来接收
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);