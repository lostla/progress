#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 11;
//	//00000000000000000000000000001011
//	a = a | (1 << 2);
//	//00000000000000000000000000000100
//	printf("%d\n", a);//15
//	//00000000000000000000000000001111
//	a = a & (~(1 << 2));//11
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//int a = 3.14;  //err
//	//printf("%d\n", a);//3
//	int a = (int)3.14;
//	printf("%d\n", a);//3
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	max = (a > b ? a : b);//Ӧ��
//	////if (a > 5)
//	////	b = 3;
//	////else
//	////	b = -3;
//	//b = (a > 5 ? 3: -3);//��Ŀ������
//	return 0;
//}

////�����ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//ʹ��struct Stu���ʹ���ѧ������s1����ʼ��
//	struct Stu s1 = { "����",20,"2022010222" };
//	struct Stu* ps = &s1;
//
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//�ṹ��ָ��->��Ա��
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	//��ַ������.��Ա��
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	//�ṹ�����.��Ա��
//	return 0;
//}

//�����������ڣ���ӡ���Ϊc
int main()
{
	char a = 0xB6;
	short b = 0xB600;
	int c = 0xB6000000;
	if (a == 0xB6)
		printf("a");
	if (b == 0xB600)
		printf("b");
	if (c == 0xB6000000)
		printf("c");
	return 0;
}

//int main()
//{
//	
//	return 0;
//}
