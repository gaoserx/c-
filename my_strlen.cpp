#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//自己仿照strlen()函数做一个计算字符串长度的函数
int my_strlen1(char arr[])
{
	//数组首地址值-最后一个数组地址值
	char* left = arr;
	char* right = arr;
	while (*right != 0)
	{
		right++;
	}
	return right - left;
}

int my_strlen2(char arr[])
{
	int i = 0;
	int count = 0;
	while (arr[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}

int main()
{
	char a[] = "hello";

	printf("该字符串长度为：%d\n", my_strlen2(a));
	return 0;
}