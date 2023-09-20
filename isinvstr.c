#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ÅÐ¶Ï×Ö·û´®ÊÇ·ñÎª»ØÎÄ×Ö·û´®
//Y-1  N-0

int isinvstr(const char* arr,int sz)
{
	const char* left = arr;
	const char* right = arr + sz - 1;
	int count = 0;
	int i = 0;
	while(*left++ == *right--)
	{
		i++;
		if (i==sz/2)
		{
			return 1;
		}
		
	}
	return 0;
}

int main()
{
	char arr1[] = "1212";
	int sz = sizeof(arr1) / sizeof(arr1[0]) - 1;
	printf("%d", isinvstr(arr1, sz));
	return 0;
}