#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//1-3

int main()
{
	
	int upper, lower, fahr, celsius ,step;
	upper = 300;//max
	lower = 0;
	step = 20;
	fahr = lower;//start
	printf("fahr\tcelsius\n");
	printf("%3d\t%3d\n",1,-17);
	while (fahr <= upper)
	{
		fahr += step;
		celsius = (fahr - 32) * 5 / 9;
		printf("%3d\t%3d\n", fahr, celsius);
	}
	return 0;
}