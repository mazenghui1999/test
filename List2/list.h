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
SListNode* BuySlistNode(STLDateType x);//��̬����һ���ڵ�
void SListPrint(list plist);   //�������ӡ
void SListPushBack(list* plist, STLDateType x);  //���
void SListPushFront(list* plist, STLDateType x); //ǰ��
void SListPopBack(list* plist);       // ��ɾ
void SListPopFront(list* plist);    // ǰɾ
SListNode* SListFind(list plist, STLDateType x);  //����
void SListInsertAfter(list pos, STLDateType x);  //����
void SListEraseAfter(list pos);    //ɾ��
void SListDestory(list plist);  //����

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
	// 1.�գ�ֻ��һ���ڵ㣻
	// 2.���������ϵĽڵ㣻
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