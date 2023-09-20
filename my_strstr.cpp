#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<assert.h>

//����strstr()������ģ��ʵ��my_strstr()

char* my_strstr(const char* dest,const char* target)
{
	assert(dest && target);
	const char* s2 = target;
	const char* s1 = dest;
	const char* ret = s1;
	while (*ret)
	{
		//��֤ÿ��ѭ������ʧ�ܺ�ָ����Իص�����ʱ�ĺ�һλ�ü�������
		s1 = ret;
		//ÿ��ѭ������ʧ�ܺ�ָ����Իص��Ӵ��׵�ַ
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