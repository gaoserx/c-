#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ʹ���м��������������
void swap(int* num1, int* num2)
{
	int k = 0;
	int* tmp = &k;
	*tmp = *num1;
	*num1 = *num2;
	*num2 = *tmp;

}
//���ö����������������
//ʹ�üӼ��ķ���
void swap1(int* num1, int* num2)
{
	*num1 = *num1 + *num2;
	*num2 = *num1 - *num2;
	*num1 = *num1 - *num2;

}

//ʹ�����������ķ���
void swap2(int* num1, int* num2)
{
	*num1 = *num1 ^ *num2;
	*num2 = *num1 ^ *num2;
	*num1 = *num1 ^ *num2;
}

int main()
{
	int num1, num2;
	scanf("%d%d", &num1, &num2);
	int* a = &num1;
	int* b = &num2;
	//swap(a, b);
	//swap1(a,b);
	swap2(a, b);
	printf("������%d%d\n", num1, num2);
	return 0;

}