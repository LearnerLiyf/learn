#include "list.h"




void test()
{
	DL list;
	Initiallist(&list);
	Seqlistpopback(&list, 1);
	Seqlistpopback(&list, 2);
	Seqlistpushback(&list);
	Seqlistpushback(&list);
	Seqlistpushback(&list);
	Seqlistpopback(&list, 4);
	Seqlistpopback(&list, 5);
	Seqlistpopback(&list, 6);
	Seqlistpopback(&list, 7);
	Seqlistpopback(&list, 8);
	Seqlistpopback(&list, 9);
	Seqlistpopback(&list, 10);
	Printseqlist(&list);
	Checkseqlist(&list, 5);
	Checkseqlist(&list, 20);
	Seqlistpophead(&list, 10);
	Seqlistpophead(&list, 20);
	Seqlistpophead(&list, 30);
	Printseqlist(&list);
	Seqlistpushhead(&list);
	Seqlistpushhead(&list);
	Seqlistpushhead(&list);
	Printseqlist(&list);
	Seqlistpopmid(&list, 3, 5);
	Seqlistpopmid(&list, 30, 7);
	Seqlistpushmid(&list, 5);
	Seqlistpushmid(&list, 5);
	Printseqlist(&list);
}



int main()
{
	test();


	return 0;
}