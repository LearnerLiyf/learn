#include<stdio.h>
#include<stdlib.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

//��ת����
struct ListNode* reverseList(struct ListNode* head) {
	struct ListNode* pre = head;
	struct ListNode* oldhead = head;
	if (pre == NULL)
		return NULL;
	else if (pre->next == NULL)
		return pre;
	else
	{
		struct ListNode* cur = pre->next;
		struct ListNode* next = cur->next;
		while (next != NULL)
		{
			cur->next = pre;
			pre = cur;
			cur = next;
			next = next->next;
		}
		cur->next = pre;
		oldhead->next = NULL;
		return cur;
	}
}
//���������ǿ�����l1��l2�����������Ǹ��������������λλ������ʼλ�á����ǵ�ÿ���ڵ�ֻ�洢һλ���֡�����������ӻ᷵��һ���µ�����
//
//���Լ���������� 0 ֮�⣬���������ֶ��������㿪ͷ��
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	l1 = reverseList(l1);
	l2 = reverseList(l2);
	struct ListNode* l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	l3->val = 0;
	l3->next = NULL;
	struct ListNode* cur = l3;
	struct ListNode* sel = l3;
	int a = 0;
	while (l1 != NULL && l2 != NULL) {
		cur->val = (a + l2->val + l1->val) % 10;
		a = (a + l2->val + l1->val) / 10;
		l1 = l1->next;
		l2 = l2->next;
		cur->next = (struct ListNode*)malloc(sizeof(struct ListNode));
		cur->next->val = 0;
		cur->next->next = NULL;
		cur = cur->next;


	}



	while (l1 != NULL) {

		cur->val = (l1->val + a) % 10;
		a = (l1->val + a) / 10;
		l1 = l1->next;
		cur->next = (struct ListNode*)malloc(sizeof(struct ListNode));
		cur->next->val = 0;
		cur->next->next = NULL;
		cur = cur->next;
	}
	while (l2 != NULL) {
		cur->val = (l2->val + a) % 10;
		a = (l2->val + a) / 10;
		l2 = l2->next;
		cur->next = (struct ListNode*)malloc(sizeof(struct ListNode));
		cur->next->val = 0;
		cur->next->next = NULL;
		cur = cur->next;
	}
	if (l1 == NULL && l2 == NULL && a == 1)
	{
		cur->val = a;
		cur->next = (struct ListNode*)malloc(sizeof(struct ListNode));
		cur->next->val = 0;
		cur->next->next = NULL;
		cur = cur->next;
	}
	if (sel->next != NULL)
	{
		while (sel->next->next != NULL)
		{
			sel = sel->next;
		}
		free(cur);
		sel->next = NULL;
		l3 = reverseList(l3);
		return l3;
	}
	else
		return l3;
}