#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

//参照strcat()函数，模拟实现my_strcat()

char* my_strcat(char* destionation, const char* str)
{
	assert(destionation && str);
	char* ret = destionation;
	while (*ret != '\0')
	{
		ret++;
	}
	while (*(ret++) = *(str++));
	return destionation;
}

int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	
	printf("%s", my_strcat(arr1, arr2));
	return 0;
}