#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//参照memmove()函数，模拟实现my_memmove()
void my_memmove(void* dest, const void* source, size_t sz)
{
	char* ret = (char*)dest;
	char* target = (char*)source;
	if (ret > target)
	{
		while(sz--)
		{
			*(ret + sz) = *(target + sz);
		}
	}
	else
	{
		while(sz--)
		{
			*ret++ = *target++;
		}
	}
}

int main()
{
	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
	my_memmove(arr1 + 3, arr1 + 1,16);
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr1[i]);
	}
	
	return 0;
}