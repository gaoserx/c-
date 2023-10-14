#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int find(const char* str1, size_t size1, const char* str2, size_t size2)
{
	int i, j;
	i = j = 0;
	while (i < size1 && j < size2)
	{
		if (str1[i++] == str2[j++])
		{
			;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	if (j == size2)
	{
		return i - j + 1;
	}
	return -1;
}

int main()
{
	char* s1 = "abcddddbas";
	char* s2 = "ddb";
	size_t sz1 = strlen(s1);
	size_t sz2 = strlen(s2);
	printf("%d", find(s1, sz1, s2, sz2));
}