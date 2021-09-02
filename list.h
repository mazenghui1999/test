#ifndef _LIST_H_
#define  _LIST_H_

#include "common.h"



/*typedef struct ListNode
{
	int data;
	struct ListNode* next;
}ListNode;

typedef ListNode* list;

void Initlist(list* plist);
void CreateListFront(list* plist);
void ShowList(list plist);

//头节点
void Initlist(list* plist)
{
	*plist = (ListNode*)malloc(sizeof(ListNode));
	assert(*plist != NULL);
	(*plist)->next = NULL;
}
void CreateListFront(list* plist)
{
	ListNode *p = *plist;
	for (int i = 1; i <= 10; ++i)
	{
		ListNode *s = (ListNode*)malloc(sizeof(ListNode));
		assert(s != NULL);
		s->data = i;
		s->next = NULL;
		
		p->next = s;
		p = s;
	}
}

void ShowList(list plist)
{
		ListNode *p = plist->next;
		while (p != NULL)
		{
			printf("%d  ", p->data);
			p = p->next;
		}
		printf("over\n");
}
/*void Initlist(list* plist)
{
	*plist = NULL;
}
*/
/*void CreateListBack(list* plist)
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

		//链接
		p->next = s;
		p = s;
	}
}*/

/*void CreateListFront(list* plist)
{
	*plist = (ListNode*)malloc(sizeof(ListNode));
	assert(*plist != NULL);
	(*plist)->data = 1;
	(*plist)->next = NULL;

//	ListNode *p = *plist;
	for (int i = 2; i <= 10; ++i)
	{
		ListNode *s = (ListNode*)malloc(sizeof(ListNode));
		assert(s != NULL);
		s->data = i;
		s->next = *plist;
		*plist = s;
	//	s->next = p;  //对p进行了更改而不是*plist
    //	p = s;
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
*/ 
#endif // !_LIST_H_
