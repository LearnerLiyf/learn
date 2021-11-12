#include "Á´±í.h"





int main() {
	
	SListNode* pList = NULL;
	SListPushBack(&pList, 2);
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);
	SListPushBack(&pList, 5);
	SListPopFront(&pList);
	SListPushFront(&pList, 10);
	SListPrint(pList);
	SListNode* pos = SListFind(pList, 3);
	if (pos)
	{
		pos->data = 30;
	}
	SListPrint(pList);
	return 0;
}