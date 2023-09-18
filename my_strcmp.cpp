#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//参照strcmp()，模拟实现my_strcmp()

int my_strcmp(char* arr1, char* arr2)
{
	while (*(arr1++) == *(arr2++))
	{
		//两字符串相等返回0
		if (*(arr1) == '\0')
		{
			return 0;
		}
		//前者小于后者返回-1
		else if (arr1 < arr2)
		{
			return -1;
		}
		//前者大于后者返回1
		else
		{
			return 1;
		}
	}
}

int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "adcx";
	printf("%d", my_strcmp(arr1, arr2));
	return 0;
}