#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//一维数组的动态求和
int* runningSum(int nums[], int sz)
{
	int sum[20] = {};
	for (int i = 0; i < sz; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			sum[i] += nums[j];
		}
	}
	return sum;
}

int main()
{
	int sums[] = {3,5,1,6,3,8,1};
	int sz = sizeof(sums) / sizeof(sums[0]);
	printf("动态求和结果为：");
	for (int i = 0; i < sz; i++)
	{
		printf("%d\n",runningSum(sums, sz)[i]);
	}
	return 0;
}