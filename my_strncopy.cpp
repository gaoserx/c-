#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

//参照strncopy()函数，模拟实现my_strncopy()
char* my_strncopy(char* destionation,const char* source,int size)
{
	assert(destionation && source);
	char* ret = destionation;
	int i;
	for(i = 0;i<size;i++)
	{
		if (*source != '\0')
		{
			*(ret++) = *(source++);
		}
		else
		{
			*(ret++) = '\0';
		}
	}
	return destionation;

}

int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	printf("%s", my_strncopy(arr1, arr2, 2));
	return 0;
}