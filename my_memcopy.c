#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//参照memcpy()函数，模拟实现my_memcpy()

void my_memcpy(void* dest, const void* source, size_t sz)
{
	char* ret = (char*) dest;
	char* target = (char*)source;
	while (sz--)
	{
		*ret++ = *target++;

	}
}

int main()
{
	char arr1[20];
	const char* arr2 = "abcd";
	my_memcpy(arr1, arr2, sizeof(arr2));
	printf("%s", arr1);
	return 0;
}