#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//leetcode   1486.数组异或操作

int XOR(int n, int start)
{
	int xor = 0;
	int* nums = (int*)malloc(n * sizeof(int));
	if (nums == NULL)
	{
		printf("错误");
	}
	else
	{
		int i;
		for (i = 0; i < n; i++)
		{
			nums[i] = start + 2 * i;
			xor ^= nums[i];
		}
		free(nums);
		
	}
	return xor;

}

int main()
{
	printf("%d", XOR(1, 7));
	
	return 0;
}