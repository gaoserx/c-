#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//将数字变成0的操作
int ChangeNumberFor0(int num)
{
	int count = 0;
	while (num)
	{
		if (0 == num % 2)
		{
			num /= 2;
			count++;
		}
		

		else
		{
			num -= 1;
			count++;
		}
			
	}
	return count;
}
int main()
{
	int num;
	printf("请输入一个非负整数：");
	scanf("%d", &num);
	printf("所需步骤为：%d", ChangeNumberFor0(num));
	return 0;
}