#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����strcmp()��ģ��ʵ��my_strcmp()

int my_strcmp(char* arr1, char* arr2)
{
	while (*(arr1++) == *(arr2++))
	{
		//���ַ�����ȷ���0
		if (*(arr1) == '\0')
		{
			return 0;
		}
		//ǰ��С�ں��߷���-1
		else if (arr1 < arr2)
		{
			return -1;
		}
		//ǰ�ߴ��ں��߷���1
		else
		{
			return 1;
		}
	}
}

int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "adcx";
	printf("%d", my_strcmp(arr1, arr2));
	return 0;
}