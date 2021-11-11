#pragma once
#include <stdio.h>
#include <stdlib.h>


typedef int SListDataType;
 typedef struct SListNode
{
	int data;
	struct SListNode* next;
}SListNode;

 void SListPushBack(SListNode** pphead, SListDataType x);
 void SListPopBack(SListNode** pphead);
 /*void SListPushFront(SListNode** pphead, SListDataType x);
 void SListPopFront(SListNode** pphead);*/
 void SListPrint(SListNode* phead);
 SListNode* BuySListNode(SListDataType x);




