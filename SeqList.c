#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void SLInit(SL *sl)
{
	assert(sl);
	sl->data = NULL;
	sl->capacity = sl->length = 0;

}

void Check_Capacity(SL* sl)
{
	assert(sl);
	if (sl->length == sl->capacity)
	{
		int newcapacity = (sl->capacity == 0) ? 4 : 2 * sl->capacity;
		SLDataType* temp = (SLDataType*)realloc(sl->data, newcapacity * sizeof(SLDataType));
		if (!temp)
		{
			sl->data = temp;
			sl->capacity = newcapacity;
		}
	}
}

void LS_inserttail(SL* sl, SLDataType n)
{
	assert(sl);
	Check_Capacity(sl);
	sl->data[sl->length] = n;
	sl->length++;
}

void LS_inserthead(SL* sl, SLDataType n)
{
	assert(sl);
	Check_Capacity(sl);
	int i;
	for (i = sl->length - 1; i >= 0; i--)
	{
		sl->data[i + 1] = sl->data[i];
	}
	sl->data[0] = n;
	sl->length++;
}

void SL_insert(SL* sl, int dest, SLDataType n)
{
	assert(sl);
	if (dest < 0 || dest > sl->length)
		printf("%s", strerror(errno));
	Check_Capacity(sl);
	int i;
	for (i = sl->length - 1; i <= dest; i--)
	{
		sl->data[i + 1] = sl->data[i];
	}
	sl->data[dest] = n;
	sl->length++;
}

void SL_deletetail(SL* sl)
{
	assert(sl);
	assert(sl->length);
	Check_Capacity(sl);
	sl->length--;
}

void SL_deletehead(SL* sl)
{
	assert(sl);
	if (1 == sl->length)
		sl->length--;
	else
	{
		int i;
		for (i = 0; i < sl->length - 1; i++)
		{
			sl->data[i] = sl->data[i + 1];
		}
		sl->length--;
	}
}

void SL_deletet(SL* sl, int dest)
{
	assert(sl);
	if (dest < 0 || dest > sl->length)
		printf("%s", strerror(errno));
	int i;
	for (i = dest - 1; i < sl->length; i++)
	{
		sl->data[i] = sl->data[i + 1];
	}
	sl->length--;
}


