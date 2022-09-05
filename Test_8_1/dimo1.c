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
//	max = (a > b ? a : b);//应用
//	////if (a > 5)
//	////	b = 3;
//	////else
//	////	b = -3;
//	//b = (a > 5 ? 3: -3);//三目操作符
//	return 0;
//}

////创建结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//使用struct Stu类型创建学生对象s1，初始化
//	struct Stu s1 = { "张三",20,"2022010222" };
//	struct Stu* ps = &s1;
//
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//结构体指针->成员名
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	//地址解引用.成员名
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	//结构体变量.成员名
//	return 0;
//}

//整形提升存在，打印结果为c
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
