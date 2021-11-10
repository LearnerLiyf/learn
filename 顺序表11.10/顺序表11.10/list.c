#include "list.h"



void Addcapacity(DL* ps) {
	assert(NULL);
	if (ps->size = ps->capacity) {
		ps->p = malloc((ps->capacity + 2) * sizeof(int));
		ps->capacity += 2;
	}
}




void Initiallist(DL* ps)
{
	assert(ps != NULL);
	ps->p = (int)malloc(3 * sizeof(int));
	ps->size = 0;
	ps->capacity = 3;
}
void Seqlistpopback(DL* ps, int i) {
	void Addcapacity(DL* ps);
	ps->p[ps->size] = i;
	ps->size++;
}


void Seqlistpushback(DL* ps) {
	assert(ps != NULL);
	if (ps->size != 0)
		ps->size--;

}
void Printseqlist(DL* ps) {
	int a = 0;
	for (a = 0; a < ps->size; a++) {
		printf("%d ", ps->p[a]);
	}
	printf("\n");
}
void Checkseqlist(DL* ps, int i) {
	if (i <= ps->size)
		printf("已查到：%d\n", ps->p[i - 1]);
	else
		printf("没查到\n");
}


void Seqlistpophead(DL* ps, int i) {
	void Addcapacity(DL* ps);
	int size = 0;
	for (size = ps->size; size > 0; size--)
		ps->p[size] = ps->p[size - 1];
	ps->p[0] = i;
	ps->size++;
}


void Seqlistpushhead(DL* ps) {
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		ps->p[i] = ps->p[i + 1];

	}
	ps->size--;
}


void Seqlistpopmid(DL* ps, int i, int j)
{
	void Addcapacity(DL* ps);
	if (i > ps->size)
		return;
	for (int size = ps->size; size >= i; size--)
	{
		ps->p[size] = ps->p[size - 1];

	}
	ps->p[i - 1] = j;
	ps->size++;
}



void Seqlistpushmid(DL* ps, int i)
{
	if (i > ps->size)
		return;
	for (int j = i; j < ps->size; j++) {
		ps->p[j - 1] = ps->p[j];
	}
	ps->size--;
}

