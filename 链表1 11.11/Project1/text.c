#include "Á´±í.h"





int main() {
	
	SListNode* pList = NULL;
	SListPushBack(&pList, 2);
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);
	SListPushBack(&pList, 5);
	SListPrint(pList);

	return 0;
}