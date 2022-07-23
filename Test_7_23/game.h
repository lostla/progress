#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void Play(char board[ROW][COL], int row, int col);
void Player(char board[ROW][COL], int row, int col);


//判断四种状态
//玩家赢  '*'
//电脑赢  '#'
//平局    'Q'
//继续    'C'

char Is_win(char board[ROW][COL], int row, int col);
