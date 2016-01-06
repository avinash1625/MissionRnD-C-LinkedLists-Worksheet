/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	int count[3] = { 0 };
	struct node *p, *q;
	p = head;
	q = head;
	printf("\n");
	while (q->next != NULL)
	{
		if (q->data == 0)
			count[0]++;
		else if (q->data == 1)
			count[1]++;
		else
			count[2]++;
		q = q->next;
	}
	count[q->data]++;
	while (count[0] > 0)
	{
		p->data = 0;
		p = p->next;
		count[0]--;
	}
	while (count[1] > 0)
	{
		p->data = 1;
		p = p->next;
		count[1]--;
	}
	while (count[2] > 0)
	{
		p->data = 2;
		p = p->next;
		count[2]--;
	}
	p = NULL;
}