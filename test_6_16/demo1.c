#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//1!+2!+3!+...+10!Öµ
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	//for (i = 1; i <= 10; i++)
	//{
	//	ret = ret * i;
	//	sum = sum + ret;

	//}
	//printf("%d\n", sum);
	return 0;
}
//¼ÆËãnµÄ½×³Ë
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int x = 1;
//	scanf("%d", &n);
//	for (a = 1; a <= n; a++)
//	{
//		x = x * a;
//	}
//	printf("%d\n", x);
//	return 0;
//}