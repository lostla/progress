#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"

void menu()
{
	printf("**********************\n");
	printf("**欢迎使用三子棋程序**\n");
	printf("** 1.play    0.exit **\n");
	printf("**********************\n");
}



void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//下棋
	while (1)
	{
		//玩家走
		Play(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = Is_win(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑走
		Player(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = Is_win(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n\n\n");
	}
	else if (ret = '#')
	{
		printf("电脑赢\n\n\n");
	}
	else
	{
		printf("平局\n\n\n");
	}

}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("欢迎使用三子棋\n\n");
			game();
			break;
		case 0:
			printf("\n您已退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
