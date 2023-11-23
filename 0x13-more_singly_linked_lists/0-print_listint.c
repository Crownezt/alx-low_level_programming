#include "lists.h"

/**
 *sum_listint - calculates the sum of all the data in a linked list
 *@head: first node in the linked list
 *
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
