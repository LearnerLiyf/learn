#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct Datalist
{
	int* p;
	int size;
	int capacity;

}DL;

void Initiallist(DL* ps);
void Seqlistpopback(DL* ps, int i);
void Printseqlist(DL* ps);
void Seqlistpushback(DL* ps);
void Addcapacity(DL* ps);
void Checkseqlist(DL* ps, int i);
void Seqlistpophead(DL* ps, int i);
void Seqlistpushhead(DL* ps);
void Seqlistpopmid(DL* ps, int i, int j);
void Seqlistpushmid(DL* ps, int i);
