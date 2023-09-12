#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//使用中间变量交换两个数
void swap(int* num1, int* num2)
{
	int k = 0;
	int* tmp = &k;
	*tmp = *num1;
	*num1 = *num2;
	*num2 = *tmp;

}
//不用额外变量交换两个数
//使用加减的方法
void swap1(int* num1, int* num2)
{
	*num1 = *num1 + *num2;
	*num2 = *num1 - *num2;
	*num1 = *num1 - *num2;

}

//使用异或运算符的方法
void swap2(int* num1, int* num2)
{
	*num1 = *num1 ^ *num2;
	*num2 = *num1 ^ *num2;
	*num1 = *num1 ^ *num2;
}

int main()
{
	int num1, num2;
	scanf("%d%d", &num1, &num2);
	int* a = &num1;
	int* b = &num2;
	//swap(a, b);
	//swap1(a,b);
	swap2(a, b);
	printf("交换后：%d%d\n", num1, num2);
	return 0;

}