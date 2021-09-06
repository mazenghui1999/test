#ifndef _LIST_H_
#define  _LIST_H_

#include "common.h"
typedef int STLDateType;
typedef struct SListNode
{
	STLDateType data;
	struct  SListNode* next;
}SListNode;

typedef SListNode* list;

void InitSList(list* plsit);
SListNode* BuySlistNode(STLDateType x);//动态申请一个节点
void SListPrint(list plist);   //单链表打印
void SListPushBack(list* plist, STLDateType x);  //后插
void SListPushFront(list* plist, STLDateType x); //前插
void SListPopBack(list* plist);       // 后删
void SListPopFront(list* plist);    // 前删
SListNode* SListFind(list plist, STLDateType x);  //查找
void SListInsertAfter(list pos, STLDateType x);  //插入
void SListEraseAfter(list pos);    //删除
void SListDestory(list plist);  //销毁

void InitSList(list* plist)
{
	*plist = NULL;
}
SListNode* BuySlistNode(STLDateType x)
{
	SListNode* node = (SListNode*)malloc(sizeof(SListNode));
	assert(node != NULL);

	node->data = x;
	node->next = NULL;

	return node;
}

void SListPrint(list plist)
{
	//assert(plist != NULL);
	SListNode* cur = plist;
	while (cur != NULL)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SListPushBack(list* plist, STLDateType x)
{
	list newnode = BuySlistNode(x);
	if (*plist == NULL)
	{
		*plist = newnode;
	}
	else
	{
		list tail = *plist;
		while (tail->next!=NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
void SListPushFront(list* plist, STLDateType x)
{
	assert(plist);
	SListNode* newnode = BuySlistNode(x);

	if (*plist == NULL)
	{
		*plist = newnode;
	}
	else
	{
		newnode->next = *plist;
		*plist = newnode;
	}
}

void SListPopBack(list* plist)
{
	SListNode* prev = NULL;
	SListNode* tail = *plist;
	// 1.空，只有一个节点；
	// 2.两个及以上的节点；
	if (tail == NULL || tail->next == NULL)
	{
		free(tail);
		*plist = NULL;
	}
	else
	{
		while (tail->next)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;

		prev->next = NULL;
	}
}
void SListPopFront(list* plist)
{
	SListNode* first = *plist;
	if (first == NULL)
	{
		return;
	}
	else if (first->next == NULL)
	{
		free(first);
		*plist = NULL;
	}
	else
	{

		SListNode* next = first->next;
		free(first);
		*plist = next;
	}
}

SListNode* SListFind(list plist, STLDateType x)
{
	SListNode* cur = plist;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
     }
	return NULL;
}

void SListInsertAfter(list pos, STLDateType x)
{
	assert(pos);
	list next = pos->next;
	list newnode = BuySlistNode(x);
	pos->next = newnode;
	newnode->next = next;
}

void SListEraseAfter(list pos)
{
	assert(pos);
	list next = pos->next;

	if (next != NULL)
	{
		list nextnext = next->next;
		free(next);
		pos->next = nextnext;
	}
}

void SListDestory(list plist)
{
	list p = NULL;
	while (plist != NULL)
	{
		p = plist;
		plist = p->next;
		free(p);
	}
}
#endif 