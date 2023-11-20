#include "lists.h"

/**
 *sum_listint - calculates the sum of all the data in a linked list
 *@head: first node in the linked list
 *
 *Return: the number of nodes
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temp = head;

	while (temp)
	{
		total += temp->n;
		temp = temp->next;
	}

	return (sum);
}
