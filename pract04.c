#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//1-4
//fahr = 5 * (celsius - 32.0) / 9
#define UPPER 100
#define LOWER 0
#define STEP 5

double invertcelsius(double celsius)
{
	return 9.0 * celsius / 5.0 + 32.0;
}

int main()
{
	double i = 0;
	printf("celsius\tfahr\n");
	printf("%6.2lf\t%6.2lf\n", 1.0, invertcelsius(1.0));
	for (i = -20; i < UPPER; i += STEP)
	{
		printf("%6.2lf\t%6.2lf\n", i, invertcelsius(i));
	}

	return 0;
}