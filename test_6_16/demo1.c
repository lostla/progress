#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//二分查找算法
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	printf("您要找的是：");
	scanf("%d", &k);
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}
	return 0;
}



////1!+2!+3!+...+10!值
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	//for (i = 1; i <= 10; i++)
//	//{
//	//	ret = ret * i;
//	//	sum = sum + ret;
//
//	//}
//	//printf("%d\n", sum);
//	return 0;
//}



//计算n的阶乘
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