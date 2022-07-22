#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


////冒泡排序函数
//void sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每趟冒泡排序
//		int flag = 1;//假设这一趟数据有序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本次排序数据不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 5,3,1,6,8,4,10,7,9,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



