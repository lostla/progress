#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>




//��ӡ�˷��ھ���
int main()
{
	int a = 0;
	for (a = 1; a <= 9; a++)
	{
		int b = 0;
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%-2d ", a, b, a * b);
		}
		//%-2d�������   %2d���Ҷ���
		printf("\n");
	}
	return 0;
}

////100-200֮��������
//int main()
//{
//	int a = 0;
//	int count = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		int b = 0;
//		//sqrt-��ƽ������ѧ�⺯��
//		for (b = 2; b <= sqrt(a); b++)
//		{
//			if (a % b == 0)
//			{
//				break;
//			}
//		}
//		if (b > sqrt(a))
//		{
//			count++;
//			printf("%d ", a);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}