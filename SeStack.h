#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef int ElemType;
#define STACK_INIT_SIZE 10 //存储空间的初始化分配
#define STACK_INCREMENT 10 //增量

typedef struct SeStack
{
	ElemType* top;
	int stacksize;
	ElemType* base;
}SS;

SS* init_stack(SS* s);

void push(SS* s, ElemType e);


ElemType get_top(SS* s);
