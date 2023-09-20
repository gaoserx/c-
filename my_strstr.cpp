#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<assert.h>

//依据strstr()函数，模拟实现my_strstr()

char* my_strstr(const char* dest,const char* target)
{
	assert(dest && target);
	const char* s2 = target;
	const char* s1 = dest;
	const char* ret = s1;
	while (*ret)
	{
		//保证每次循环查找失败后，指针可以回到查找时的后一位置继续查找
		s1 = ret;
		//每次循环查找失败后，指针可以回到子串首地址
		s2 = target;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)ret;
		}
		ret++;
	}
	return NULL;
}

int main()
{
	char arr1[] = "abbbcde";
	char arr2[] = "cde";
	printf("%s", my_strstr(arr1, arr2));
	return 0;
}