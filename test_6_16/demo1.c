#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//���ֲ����㷨
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	printf("��Ҫ�ҵ��ǣ�");
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
			printf("�ҵ��ˣ��±���%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���");
	}
	return 0;
}



////1!+2!+3!+...+10!ֵ
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



//����n�Ľ׳�
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