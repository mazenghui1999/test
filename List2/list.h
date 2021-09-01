#ifndef _LIST_H_
#define  _LIST_H_

#include "common.h"
typedef struct ListNode
{
	
	int data;
	struct ListNode* next;
}ListNode;

typedef ListNode* list;

void Initlist(list* plist)
{
	*plist = NULL;
}

void CreateList(list* plist)
{
	*plist = (ListNode*)malloc(sizeof(ListNode));
	assert(*plist != NULL);
	(*plist)->data = 1;
	(*plist)->next = NULL;

	ListNode *p = *plist;
	for (int i = 2; i <= 10; ++i)
	{
		ListNode *s = (ListNode*)malloc(sizeof(ListNode));
		assert(s!= NULL);
		s->data = i;
		s->next = NULL;

		//Á´½Ó
		p->next = s;
		p = s;
	}
}
void ShowList(list plist)
{
	ListNode *p = plist;
	while (p!= NULL)
	{
		printf("%d  ", p->data);
		p = p->next;
	}
	printf("over\n");
}

#endif // !_LIST_H_
