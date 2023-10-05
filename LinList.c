#define _CRT_SECURE_NO_WARNINGS 1

#include "LinList.h"

//initialize linkedlist
LL* initLink(int num)
{
	LL* p = NULL;
	LL* temp = (LL*)malloc(sizeof(LL));
	if (temp)
		p = temp;
	int i;
	for (i = 0; i < num; i++)
	{
		LL *a = (LL*)malloc(sizeof(LL));
		a->data = 0;
		a->next = NULL;
		temp->next = a;
		temp = a;

	}
}

//insert a linkedlist
LL* insertlink(LL* p, DATATYPE data, int dest)
{
	assert(p);
	LL* temp = p;
	int i;
	for (i = 1; i < dest; i++)
	{
		temp = temp->next;
		if (!temp)
		{
			printf("%s", strerror(errno));
			return p;
		}
	}
	LL* t = (LL*)malloc(sizeof(LL));
	t->next = temp->next;
	t->data = data;
	temp->next = t;
	return p;
}

//delete a linkedlist
LL* dellink(LL* p, int dest)
{
	assert(p);
	int i;
	LL* temp = p;
	for (i = 0; i < dest; i++)
	{
		temp = temp->next;
		if (!temp)
		{
			printf("%s", strerror(errno));
			return p;
		}
	}
	LL* t = temp->next;
	temp->next = temp->next->next;
	free(t);
	t = NULL;
	return p;
}

//find a linkedlist
int findlink(LL* p, DATATYPE data)
{
	assert(p);
	LL* temp = p;
	int i = 0;
	while (temp)
	{
		temp = temp->next;
		i++;
		if (data == temp->data)
			return i;
	}
	return 0;
}


//change a linked list
LL* chanlink(LL* p, DATATYPE data, int dest)
{
	assert(p);
	int i;
	LL* temp = p;
	for (i = 1; i < dest; i++)
	{
		temp = temp->next;
		if(!temp)
		{
			printf("%s", strerror(errno));
			return p;
		}
	}
	temp->next->data = data;
	return p;
}