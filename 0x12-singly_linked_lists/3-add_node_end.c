#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node_end - adds a new node at the end of a linked list
 *@head: double pointer to the  list
 *@str: string to add in the new node
 *
 *Return: address of the new element,else, NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *t = *head;
	unsigned int _len = 0;

	while (str[_len])
		_len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->_len = _len;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (t->next)
		t = t->next;

	t->next = n;

	return (n);
}
