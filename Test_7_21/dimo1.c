#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//	{
//		return n* Fac2(n - 1);	
//	}
//		
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d", ret);
//	return 0;
//}

//斐波那契数列
//1 1 2 3 5 8 13 21 34 55 ...

//int Fib(int n)
//{
//	if (n < 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}//程序运行缓慢 效率低

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD--测试驱动开发
//	ret = Fib(n);
//	printf("ret=%d", ret);
//	return  0;
//}


