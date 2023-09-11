#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//查找整数数组最大、最小值

//找出最大值
int Max(int arr[], int sz)
{
	int max = arr[0];
	for (int i = 1; i < sz; i++)
	{

		if (max <= arr[i]) 
		{
			max = arr[i];
		}
	}
	return max;
}
//找出最小值
int Min(int arr[], int sz)
{
	int min = arr[0];
	for (int i = 1; i < sz; i++)
	{

		if (min >= arr[i]) {
			min = arr[i];
		}
	}
	return min;
}

//
//int main()
//{
//	int arr[] = {23,24,56,12,23,43,532,23,43,12,67};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("最大值：%d，最小值：%d", Max(arr, sz), Min(arr, sz));
//	return 0;
//}
