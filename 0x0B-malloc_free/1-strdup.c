#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to duplicated string
 * @str: the string
 * Return: NULL if error, else returns string
 */

char *_strdup(char *str)
{
	char *a;
	int b = 0;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[b] != '\0')
		b++;
	a = malloc((b + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < b; i++)
		a[i] = str[i];
	return (a);

}
