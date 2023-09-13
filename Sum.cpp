#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//找出两数之和的下标
int* Point(int arr[], int sz,int point[], int target)
{
	int j, i;
	for (i = 0; i < sz; i++)
	{
		for (j = i + 1; i < sz; j++)
		{
			if (arr[i] + arr[j] == target)
			{
				point[0] = i;
				point[1] = j;
				return point;
			}
		}
	}

}
int main()
{
	int arr[] = { 2,7,11,15 };
	int sz = sizeof(arr);
	int point[2];
	int target = 9;
	Point(arr, sz, point, target);
	printf("下标为%d和%d的数和等于%d", point[0], point[1], target);
	return 0;
}