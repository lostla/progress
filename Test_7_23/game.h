#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void Play(char board[ROW][COL], int row, int col);
void Player(char board[ROW][COL], int row, int col);


//�ж�����״̬
//���Ӯ  '*'
//����Ӯ  '#'
//ƽ��    'Q'
//����    'C'

char Is_win(char board[ROW][COL], int row, int col);
