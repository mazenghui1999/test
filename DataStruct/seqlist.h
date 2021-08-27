#ifndef _SEQ_LIST_H
#define _SEQ_LIST_H

#include "common.h"

#define ElemType  int 

typedef struct Seqlist
{
	ElemType *base;
	size_t  capacity;
	size_t  size;
}Seqlist;

//��������
void SeqlistInit(Seqlist* pst,size_t space);
void SeqlistPushBack(Seqlist *pst, ElemType v);
void SeqlistShow(Seqlist *pst);
void SeqlistDestory(Seqlist *pst);
void SeqlistClear(Seqlist *pst);
void SeqlistDelete(Seqlist *pst, size_t space);
ElemType  SeqlistFind(Seqlist *pst, size_t pos);
ElemType  SeqlistFindData(Seqlist *pst, ElemType v);
void SeqlistErase(Seqlist *pst, ElemType v);
void SeqlistReverse(Seqlist *pst);
void SeqlistSort(Seqlist *pst);


//����ʵ��
void SeqlistInit(Seqlist* pst,size_t space)//��ʼ��
{
	assert(pst->base != 0);
	pst->capacity = space;
	pst->base = (ElemType*)malloc(sizeof(ElemType)*pst->capacity);  //���ٿռ�
	assert(pst->base != 0);
	memset(pst->base, 0,sizeof(ElemType)*pst->capacity);       //��ʼ��
	pst->size = 0;

}
void SeqlistPushBack(Seqlist *pst, ElemType v)
{
	assert(pst->base != NULL);
	//������� 
	if (pst->size < pst->capacity)
	{
		pst->base[pst->size++] = v;
	}
	else
	{
		printf("˳��������ռ䲻��\n");
		return;
	}
}
void SeqlistShow(Seqlist *pst)
{
	assert(pst->base != NULL);
	for (size_t i = 0; i < pst->size; ++i)
	{
		printf("%d  ", pst->base[i]);
	}
	printf("\n");
}
void SeqlistDestory(Seqlist *pst)
{

	free(pst->base);
	pst->base = NULL;
	pst->capacity = pst->size = 0;
}

void SeqlistClear(Seqlist *pst)
{
	assert(pst->base != NULL);
	pst->size = 0;
}
void SeqlistDelete(Seqlist *pst, size_t space)
{
	assert(pst->base != NULL);
	if (space<0 || space>=pst->size)
	{
		printf("ɾ��λ�ò��ԣ�\n");
	}
	else
	{
		for (size_t i = space; i < pst->size-1; ++i)
		{
			pst->base[i] = pst->base[i + 1];
		}
		pst->size--;
	}
}
ElemType SeqlistFind(Seqlist *pst, size_t pos)
{
	assert(pst->base != NULL);
	assert(pos >= 0 && pos < pst->size);
	return pst->base[pos];
}
ElemType SeqlistFindData(Seqlist *pst, ElemType v)
{
	assert(pst->base != NULL);
	for (size_t i = 0; i < pst->size; ++i)
	{
		if (pst->base[i] == v)
		{
			return i;
		}
	}
	return -1;
}
void SeqlistErase(Seqlist *pst, ElemType v)
{
	ElemType pos;
	pos = SeqlistFindData(pst, v);
	if (pos == -1)
	{
		printf("���ݲ����ڣ�\n");
	}
	else
	{
		SeqlistDelete(pst, pos);
	}
}
void SeqlistReverse(Seqlist *pst)
{
	assert(pst->base != NULL);
	size_t left = 0;
	size_t right = pst->size-1;
	while (left < right)
	{
		swap(&(pst->base[left]), &(pst->base[right]));
		left++;
		right--;
	}
}
void SeqlistSort(Seqlist *pst)
//ð������  ������ϰ
{
	for (int i = 0; i < pst->size - 1; ++i)
	{
		for (int j = 0; j < pst->size - i - 1; ++j)
		{
			if (pst->base[j]>pst->base[j + 1])
			{
				swap(&(pst->base[j]), &(pst->base[j + 1]));
			}
		}
	}
}

#endif