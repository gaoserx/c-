#define _CRT_SECURE_NO_WARNINGS 1

#include "CLinkedList.h"


CLL* init_CLinkedList(CLL** p)
{
	CLL* temp = (CLL*)malloc(sizeof(CLL));
	if (!temp)
	{
		printf("%s", strerror(errno));
		
	}
	*p = temp;
	(*p)->next = *p;
}

CLL* insert_CLinkedList(CLL* p, int dest, DATATYPE data)
{
	assert(p);
	CLL* target = NULL;
	CLL* temp = NULL;
	if (1 == dest)//����λ��Ϊͷ�ڵ�ʱ�����⴦��
	{
		temp = (CLL*)malloc(sizeof(CLL));
		p = temp;
		if (!temp)
		{
			printf("%s", strerror(errno));
		}
		for (target = p; target->next != p; target = target->next);//�ҵ�ѭ���������βָ��
		temp->next = p;//�½ڵ�ָ��ͷ�ڵ�
		target->next = temp;//β�ڵ�ָ���½��ڵ�
		temp->data = data;
		
		return p;
	}
	else
	{
		int i;
		target = p;
		temp = (CLL*)malloc(sizeof(CLL));
		if (!temp)
		{
			printf("%s", strerror(errno));
		}
		p = temp->next;
		for (i = 2; i < dest; i++)
		{
			if (target->next == p)
			{
				printf("����λ�ó�������");
			}
			target = target->next;
		}
		temp->next = target->next;
		target->next = temp;
		temp->data = data;
		return p;
	}
}

CLL* insert_CLinkedList(CLL* p, int dest)
{
	assert(p);
	CLL* temp = NULL;
	CLL* target = NULL;

	if (dest < 1)
	{
		printf("��Чλ��");
		return p;
	}
	if (1 == dest)
	{
		for (target = p; target->next != p; target = target->next)
		{
			;
		}
		temp = p;
		target->next = p->next;
		free(temp);
		temp = NULL;
		p = target->next;
		return p;
	}
	else
	{
		int i;
		temp = p->next;
		for (i = 2; i < dest; i++)
		{
			if (temp->next == p)
			{
				printf("��Чλ��");
					return p;
			}
			temp = temp->next;
		}
		target = temp->next;
		temp->next = temp->next->next;
		free(target);
		target = NULL;
		return p;
	}
}

CLL* find_CLinkedList(CLL* p, DATATYPE data)
{
	assert(p);
	CLL* temp = p->next;
	for (temp; temp->data != data && temp != p; temp = temp->next)
	{
		;
	}
	if (temp->data == data)
	{
		return temp;
	}
	else
	{
		printf("δ�ҵ�������λ��");
		return NULL;
	}
	
}

void clear_CLinkedList(CLL** p)
{
	assert(*p);
	CLL* cur = NULL;
	CLL* temp = (*p)->next;
	while (temp != (*p))
	{
		cur = temp->next;
		free(temp);
		temp = cur;
	}
	free((*p));
	p = NULL;

}