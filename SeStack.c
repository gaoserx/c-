#define _CRT_SECURE_NO_WARNINGS 1

#include "SeStack.h"

SS* init_stack(SS* s)
{
	ElemType* temp = (ElemType*)malloc(STACK_INIT_SIZE * sizeof(ElemType));
	if (!temp)
	{
		exit(0);
	}
	s->base = temp;
	s->top = s->base;
	s->stacksize = STACK_INIT_SIZE;
	return s;
}

void push(SS* s, ElemType e)
{
	if ((s->top - s->base) == s->stacksize)
	{
		s->base = (ElemType*)realloc(s->base, (STACK_INCREMENT + s->stacksize) * sizeof(ElemType));
		if (!(s->base))
		{
			exit(0);
		}
		s->stacksize += STACK_INCREMENT;
	}
	*((s->top)++) = e;
}

ElemType pop(SS* s)
{
	if (s->top == s->base)
	{
		printf("¿ÕÕ»");
		return 0;
	}
	return * (--(s->top));
}

ElemType get_top(SS* s)
{
	if (s->top == s->base)
	{
		printf("¿ÕÕ»");
		return 0;
	}
	return *(s->top);
}