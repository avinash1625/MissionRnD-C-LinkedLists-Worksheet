/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	if (head == NULL || head->next == NULL)
		return head;
	else{
		int temp;
		struct node *var = head;
		while (head->next != NULL)//&&head != NULL)
		{
			if (head->num > head->next->num)
			{
				temp = head->num;
				head->num = head->next->num;
				head->next->num = temp;
				sortLinkedList(var);
			}
			head = head->next;
		}
		return var;
	}
}
