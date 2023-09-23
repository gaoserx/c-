#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Flexible array
//练习结构体的创建

struct Person
{
	int age;
	char name[0];
};

int main()
{
	//创建动态内存
	struct Person *p = (struct Person*)malloc(sizeof(struct Person) + (6 * sizeof(char)));
	p->age = 19;
	strcpy(p->name, "hello");
	printf("%s\n", p->name);

	//扩充动态内存
	struct Person* temp = (struct Person*)realloc(p, sizeof(struct Person) + (13 * sizeof(char)));
	if (temp != NULL)
	{
		p = temp;
		strcat(p->name, " world");
	}
	else
	{
		printf("%s", errno);
	}
	printf("%s\n", p->name);
	free(p);
	p = NULL;
	return 0;
}