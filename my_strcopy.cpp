#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����strcopy()�������ܣ�ģ�½���һ��my_strcopy()����

void my_strcopy(char target[], char destionation[])
{
	int i = 0;
	while (target[i] != '\0')
	{
		destionation[i] = target[i];
		i++;
	}
}


int main()
{
	char arr1[] = "hello world";
	char arr2[20] = "";
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i;
	my_strcopy(arr1, arr2);
	for (i = 0; i < sz; i++)
	{
		printf("%c", arr2[i]);
	}
	return 0;
}