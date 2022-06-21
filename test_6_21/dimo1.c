#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<time.h>
#include<stdlib.h>

void menu()
{
	printf("-------------------------\n");
	printf("|   1.play     0.exit   |\n");
	printf("-------------------------\n");
}

void game()
{
	int ret = 0;
	int guess = 0;//用时间戳生成随机数
	ret = rand() % 100 + 1;//生成1-100数字
	//printf("%d\n", ret);//查看生成的随机数
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if(guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜您，猜对了！\n");
			break;
		}
	}
}
	int main()
{
	int a = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误，请重新选择。");
			break;
		}
	} while (a);
	return 0;
}