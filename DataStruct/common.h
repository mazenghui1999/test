#ifndef _COMMON_H  //防止头文件多次引用
#define _COMMON_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <vld.h>
#include <stdbool.h>

#define ElemType  int 

void swap(ElemType*a, ElemType*b)
{
	ElemType tmp = *a;
	*a = *b;
	*b = tmp;
}
#endif