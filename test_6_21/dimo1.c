#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("��ĵ��Խ���һ����֮�ڹػ��������룺������\nȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("sb ����ϧ���ʱ��!\n");
		goto again;
	}
	return 0;
}
//#include <stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//void menu()
//{
//	printf("-------------------------\n");
//	printf("|   1.play     0.exit   |\n");
//	printf("-------------------------\n");
//}
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;//��ʱ������������
//	ret = rand() % 100 + 1;//����1-100����
//	//printf("%d\n", ret);//�鿴���ɵ������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if(guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�����¶��ˣ�\n");
//			break;
//		}
//	}
//}
//	int main()
//{
//	int a = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("ѡ�����������ѡ��");
//			break;
//		}
//	} while (a);
//	return 0;
//}