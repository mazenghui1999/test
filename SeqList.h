#ifndef _SEQ_LIST_H_
#define _SEQ_LIST_H_

#include "0824.h"

#define  ElemType int 
typedef struct SeqList
{
	ElemType *base;
	size_t  capacity;
	size_t  size;
}SeqList;

//��������
void SeqListInit(SeqList *pst, size_t capacity);
void SeqListPushBack(SeqList *pst, ElemType v);
void ShowSeqList(SeqList *pst);
void SeqListPushFront(SeqList *pst, ElemType v);
void SeqListPopBack(SeqList *pst);
void SeqListPopFront(SeqList * pst);
//����ʵ��
void SeqListInit(SeqList *pst, size_t capacity)
{
	assert(pst->base != NULL);
	pst->capacity = capacity;
	pst->base = (ElemType*)malloc(sizeof(ElemType)*pst->capacity);  //���ٿռ�
	assert(pst->base != NULL);
	memset(pst->base, 0, sizeof(ElemType)*pst->capacity);   //�ռ��ʼ��
	pst->size = 0;
}

void SeqListPushBack(SeqList *pst, ElemType v)
{
	//�������
	if (pst->size < pst->capacity)
	{
		pst->base[pst->size++] = v;
	}
	else
	{
		printf("˳����������㣬%d���ܲ���\n", v);
		return;
	}

}

void ShowSeqList(SeqList *pst)
{
	assert(pst->base != NULL);
	for (size_t i = 0; i < (pst->size); ++i)
	{
		printf("%d ", pst->base[i]);
		printf("\n");
	}

}


void SeqListPushFront(SeqList *pst, ElemType v)
{
	if (pst->size >= pst->capacity)
	{
		printf("˳����������㣬%d���ܲ���\n", v);
		return;
	}
	else
	{
		for (int i = pst->size; i > 0; --i)
		{
			pst->base[i] = pst->base[i - 1];
		}
		pst->base[0] = v;
		pst->size++;
	}
}

void SeqListPopBack(SeqList *pst)
{
	if (pst->size == 0)
	{
		printf("˳����ѿգ�����ɾ��\n");
		return;
	}
	//ɾ������
	pst->size--;
}

void SeqListPopFront(SeqList * pst)//ͷɾ
{
	if (pst->size == 0)
	{
		printf("˳����ѿգ�����ɾ��\n");
		return;
	}

	for (int i = 0; i <pst->size-1; ++i)
	{
		pst->base[i] = pst->base[i +1];
	}
	pst->size--;
}
#endif