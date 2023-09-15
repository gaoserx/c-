#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//二分法查找
int Binsearch(int* arr, int sz,int target)
{
	int left, right;
	left = 0;
	right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < target)
			left = mid + 1;
		else if (arr[mid] > target)
			right = mid - 1;
		else
			return mid;
	}

}

int main()
{
	int arr[] = { 2,6,9,12,15,23,45,46,51,66 };
	int sz = sizeof(arr)/sizeof(arr[0]);
	int target = 51;
	int point = Binsearch(arr, sz, target);
	printf("%d", point);
	if (point >= 0)
		printf("目的值的下标为%d\n", point);
	else
		printf("未找到\n");
	
	return 0;
}

//#include <stdio.h>
//int main()
//{
//	char arr[] = "abcdfe";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s", *pc);
//	return 0;
//}