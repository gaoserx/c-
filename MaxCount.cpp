#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��пͻ����ʲ�����

int MaxCount(int arr[4][4])
{
	int Person[4] = {};
	for (int j = 0; j < 4; j++)
	{
		

		for (int i = 0; i < 4; i++)
		{
			Person[j] += arr[j][i];
		}
		printf("��%d���ͻ����ʲ�������%d\n",(j+1),Person[j]);
	}
	int max = Person[0];
	int count;
	for (int i = 1; i < 4; i++)
	{
		if (max < Person[i])
		{
			max = Person[i];
			count = i;
		}
	}
	printf("��%d���ͻ����ʲ��������%d\n", (count + 1), Person[count]);
	return Person[count];

}
int main()
{
	int arr[4][4] = { {3,1,2,4},{6,3,8},{1,2,9},{1,23} };
	printf("%d", MaxCount(arr));
	return 0;
}