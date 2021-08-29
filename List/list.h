#ifndef _LIST_H_
#define _LIST_H_

#include "common.h"

#define Elemtype  int
#define space 3
typedef struct data
{
	Elemtype * base;
	size_t capacity;
	size_t size;
}Data;

void DataInit(Data *pst, Elemtype v);
void Datapush(Data *pst, Elemtype v);
void DataShow(Data *pst);
void DataDestory(Data *pst);

bool _IsFull(Data *pst);
bool _Inc(Data *pst);

bool _Inc(Data *pst)
{
	assert(pst->base != NULL);
	pst->base = (Elemtype*)realloc(pst->base, sizeof(Elemtype)*(pst->capacity + space));
	if (pst->base == NULL)
		return false;
	pst->capacity += space;
	return true;
}
bool _IsFull(Data *pst)
{
	return pst->size >= pst->capacity;
}
void DataInit(Data *pst, Elemtype v)
{
	assert(pst->base != NULL);
	pst->capacity = v;
	pst->base = (Elemtype*)malloc(sizeof(Elemtype)*pst->capacity);
	assert(pst->base != NULL);
	pst->size = 0;
}
void Datapush(Data *pst, Elemtype v)
{
	assert(pst->base != NULL);
	if (_IsFull(pst) && !_Inc(pst))
	{
		printf("²»ÄÜÐ´Èë\n");
		return;
	}
	else
	{
		pst->base[pst->size++] = v;
	}

}
void DataShow(Data *pst)
{
	assert(pst->base != NULL);
	for (size_t i = 0; i < pst->size; ++i)
	{
		printf("%d  ", pst->base[i]);
	}
	printf("\n");
}
void DataDestory(Data *pst)
{
	assert(pst->base != NULL);
	free(pst->base);
	pst->base = NULL;
	pst->capacity = pst->size = 0;

}

#endif