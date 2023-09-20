#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//反转字符串

char* invertstr(char* arr,int sz)
{
	char* left = arr;//左地址值
	char* right = arr + sz-1;//右地址值
	char temp = '0';
	int i;
	for (i = 0; i < sz / 2; i++)
	{
		temp = *left;
		*left = *right;
		 *right= temp;
		 left++;
		 right--;
	}
	return arr;
}

int main()
{
	char arr1[] = "123456";
	int sz = sizeof(arr1) / sizeof(arr1[0]) - 1;
	printf("%s", invertstr(arr1,sz));
	return 0;
}