#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: the string to determine the length
 * Return: the length of the given string
 */

size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
		len++;
	return (len);
}
