#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�������������ĺ�
int Add(int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	int num1, num2;
	scanf("%d%d", &num1, &num2);
	//��ӡ�����
	printf("����֮��Ϊ��%d\n", Add(num1, num2));
	return 0;
}