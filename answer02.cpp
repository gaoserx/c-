#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//计算斐波那契数列
int Fibo(int n)
{
	if (n <= 2)
		return 1;
	else 
	{
		int a = 1;
		int b = 1;
		int c;
		for (int i = 3; i <= n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}

int main()
{
	int n;
	printf("请输入你想查询第几个斐波那契数：");
	scanf("%d", &n);
	printf("第%d个斐波那契数是：%d", n, Fibo(n));
	return 0;
}