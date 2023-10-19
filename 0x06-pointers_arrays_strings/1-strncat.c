#include "main.h"
#include <stdio.h>

/**
 * _strncat - a function that concatenates two strings.
 * The _strncat function is similar to the _strcat function,
 * except that it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: the string that to append to
 * @src: the string to append
 * @n: the number of byte to append to dest
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dlen = 0;

	while (dest[i++])
		dlen++;
	for (i = 0; src[i] && i < n; i++)
		dest[dlen++] = src[i];
	return (dest);
}

