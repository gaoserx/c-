#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�Լ�����strlen()������һ�������ַ������ȵĺ���
int my_strlen1(char arr[])
{
	//�����׵�ֵַ-���һ�������ֵַ
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

	printf("���ַ�������Ϊ��%d\n", my_strlen2(a));
	return 0;
}