#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����쳲���������
int Fibo(int n)
{
	if (n <= 2)
		return 1;
	else 
	{
		int a = 1;
		int b = 1;
		int c;
		for (int i = 3; i <= n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}

int main()
{
	int n;
	printf("�����������ѯ�ڼ���쳲���������");
	scanf("%d", &n);
	printf("��%d��쳲��������ǣ�%d", n, Fibo(n));
	return 0;
}