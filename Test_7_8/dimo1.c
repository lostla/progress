#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#########";
//	strcpy(arr2, arr1);//�ַ�����������
//	printf("%s", arr2);
//	return 0;
//}

//int main()
//{
//	char arr[] = "Hello world!";
//	memset(arr, '*', 5);
//	//***** world
//	printf("%s", arr);
//	return 0;
//}

//int getmax(int x, int y)
//{
//	if (x < y)
//		return y;
//	else
//		return x;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	int max=getmax(a, b);
//	printf("%d", max);
//	return 0;
//}


////��ʵ�δ����βε�ʱ��
////�β���ʵ��ʵ�ε�һ����ʱ����
////�޸��ββ���ı�ʵ��
//////������������
//void swap(int*pa,int*pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	//a bΪʵ��
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//////��ӡ����
////ֻ�ܱ�1����������������Ϊ����
//int is_prime(int n)
//{
//	int c = 0;
//	for (c = 2; c < n; c++)
//	{
//		if (n % c == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


int is_leap_year(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (1 == is_leap_year(year))
		{
			printf("%d ", year);
		}
	}
	return 0;
}

