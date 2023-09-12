#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//ц╟ещеепР
void BubbleSort(int arr[],int sz)
{
	for (int i = 0; i < sz; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
			

	}
}

int main()
{
	int arr[] = { 23,12,54,2,4,7,87,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d\t", arr[i]);

	}

	return 0;
}