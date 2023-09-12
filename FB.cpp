#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//Fizz Buzz
void FB(int n )
{
	for (int i = 1; i < n + 1; i++)
	{
		if (0 == i % 3 && 0 == i % 5)
			printf("FizzBuzz\t");
		else if (0 == i % 3)
			printf("Fizz\t");
		else if (0 == i % 5)
			printf("Buzz\t");
		else
			printf("%d\t",i);
	}
}

int main()
{
	int num;
	printf("请输入一个整数：");
	scanf("%d", &num);
	FB(num);
	return 0;
}