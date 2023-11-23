#include "lists.h"

/**
 *print_listint- calculates the sum of all the data in a linked list
 *@h: pointer to the linked list to print
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
