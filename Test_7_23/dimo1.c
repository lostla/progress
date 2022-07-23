#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"

void menu()
{
	printf("**********************\n");
	printf("**��ӭʹ�����������**\n");
	printf("** 1.play    0.exit **\n");
	printf("**********************\n");
}



void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while (1)
	{
		//�����
		Play(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = Is_win(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//������
		Player(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = Is_win(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n\n\n");
	}
	else if (ret = '#')
	{
		printf("����Ӯ\n\n\n");
	}
	else
	{
		printf("ƽ��\n\n\n");
	}

}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ӭʹ��������\n\n");
			game();
			break;
		case 0:
			printf("\n�����˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
