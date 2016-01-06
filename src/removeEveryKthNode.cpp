/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
	int num;
	struct node *next;
};
void del(struct node *head, int n)
{
	struct node *temp1 = head;
	int i;
	for (i = 0; i <= n - 2; i++)
		temp1 = temp1->next;
	struct node *temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);
}

struct node * removeEveryKthNode(struct node *head, int K) {
	int count = 1;
	struct node *p, *q;
	p = head;
	if (head == NULL)
	{
		return NULL;
	}
	else if (K == 1 || K == 0 || K<0)
		return NULL;
	else
	{
		while (p->next != NULL)
		{
			q = p;
			p = p->next;
			count = count + 1;
			if (count%K == 0)
			{
				q->next = p->next;
			}
		}
		return head;
	}
}