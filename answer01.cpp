#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//计算两个整数的和
int Add(int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	int num1, num2;
	scanf("%d%d", &num1, &num2);
	//打印出结果
	printf("两数之和为：%d\n", Add(num1, num2));
	return 0;
}