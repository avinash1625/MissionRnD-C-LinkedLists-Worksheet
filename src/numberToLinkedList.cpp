/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *head = NULL, *temp = NULL;
	int d;
	if (N < 0)
		N = -N;
	if (N == 0){
		head = (struct node *)malloc(sizeof(struct node));
		head->num = N;
		head->next = NULL;
	}
	while (N!=0)
	{
		d = N % 10;
		N = N / 10;
		temp = (struct node *)malloc(sizeof(struct node));
		temp->num = d;
		temp->next = NULL;
		if (head == NULL)
			head = temp;
		else{
			temp->next = head;
			head = temp;
		}

	}
	return head;
}