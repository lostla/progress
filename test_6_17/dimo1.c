#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>




////求闰年两种写法
//int main()
//{
//	int a = 0;
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			a++;
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			a++;
//		}*/
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			a++;
//		}
//	}
//	printf("\n共有：%d年\n", a);
//	return 0;
//}
//
////求两数最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	while (a % b)       //取模是否为0，直接使用
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("最大公约数是：%d\n", b);
//	return 0;
//}
//
//三数排序题
//输入需用空格隔开
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//
//	if (a < b)
//	{
//		int d = a;
//		a = b;
//		b = d;
//     }
//	if (a < c)
//	{
//		int d = a;
//		a = c;
//		c = d;
//	}
//	if (b < c)
//	{
//		int d = b;
//		b = c;
//		c = d;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//
//
//
//
//动态字符题
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//
//int main()
//{
//	char arr1[] = "This is a C program !";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right =sizeof(arr1)/sizeof(arr1[0])-2;
// //int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//停留1秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}