#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//printf("%d", sizeof(int*));
//	int a = 0x11223344;
//	//int* pa = &a;
//	char* pc = &a;//         a->11223344
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//	*pc = 0;//               a->11223300
//	return 0;
//}

//int main()
//{
//	int* p;//δ��ʼ����Ұָ��  ERR
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i <= 12; i++)
//	{
//		*p = 1;
//		p++;
//	}
//	//i>9������Խ���ΪҰָ��  ERR
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;//������������a���٣��ڴ�黹
//}             //ָ���ַ�ѹ黹ϵͳ   ERR  
//
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);//Ұָ��
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int* p = &a;//��ʼ��
//	int* pa = NULL;//��ʼ��Ϊ0������ʼ��Ϊ��ָ��
//	*p = 20;
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen - ���ַ�������
//	//�ݹ� - ģ��ʵ��
//	char arr[] = "bit";
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa ����ָ��
//	int*** pppa = &ppa;//pppa ����ָ�� .....
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	int arr[10] = { 0 };
	int* arr2[3] = { &a,&b,&c };//ָ������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr2[i]));
	}
	return 0;
}
