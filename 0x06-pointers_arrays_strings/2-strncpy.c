#include "main.h"
#include <stdio.h>

/**
 * _strncat - a function that concatenates two strings.
 * The _strncat function is similar to the _strcat function,
 * except that it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: the buffr storing copy of the string
 * @src: the string
 * @n: the max number of byte to copy from file
 * Return: a pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int slen = 0;

	while (src[i++])
		slen++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = slen; i < n; i++)
		dest[i] = '\0';
	return (dest);

}
