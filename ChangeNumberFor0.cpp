#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�����ֱ��0�Ĳ���
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
	printf("������һ���Ǹ�������");
	scanf("%d", &num);
	printf("���貽��Ϊ��%d", ChangeNumberFor0(num));
	return 0;
}