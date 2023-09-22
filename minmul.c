#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//×îÐ¡Å¼±¶Êý

int minmul(int n)
{
	if (n < 0)
	{
		return -1;
	}
	else
	{
		int i;
		for (i = 1; i <= n; i++)
		{
			if (2 * i == 2 * n || 2 * i == n)
			{
				return 2 * i;
			}
		}
		return 2 * n;
	}
}

int main()
{
	printf("%d", minmul(6));
}

