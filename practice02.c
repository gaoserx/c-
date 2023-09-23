#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <assert.h>

//leetcode  852.山脉数组的封顶索引

int findmaxindex(int* arr,size_t sz)
{
	assert(arr);
	int i;

	int index = -1;
	for (i = 1; i < sz; i++)
	{
		if (arr[i-1] < arr[i])
		{

			index = i;
		}
	}
	return index;
}

int isoder(int* arr, int maxindex)
{
	assert(arr);
	int left = 0;
	for (left = 0; left < maxindex; left++)
	{
		if (arr[left] >= arr[left + 1])
		{
			return 0;
		}
	}
	return 1;
}

int isreverseoder(int* arr, int maxindex, size_t sz)
{
	assert(arr);
	size_t right = sz;
	int left = maxindex + 1;
	for (left; left < right; left++)
	{
		if (arr[left] <= arr[left + 1])
		{
			return 0;
		}
	}
	return 1;
}

int mounarr(int* arr,size_t sz)
{
	assert(arr);
	int max = findmaxindex(arr, sz);
	if (isoder(arr, max) && isreverseoder(arr, max, sz))
	{
		return max;
	}
	else
	{
		return -1;
	}
	return 0;
}

int main()
{
	int arr[] = {0,0,3,2};
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d", mounarr(arr,sz));


	return 0;
}