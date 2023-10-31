#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of chars
 * @size: size
 * @c: the char
 * Return: Returns pointer, Null if error
 */

char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i;

	b = malloc(sizeof(char) * size);
	if (size == 0 || b == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		b[i] = c;
	return (b);
}
