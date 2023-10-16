#include "main.h"
#include <stdio.h>

/**
 * _atoi - a function that convert a string to an integer.
 * The number in the string can be preceded by an infinite number of characters
 * You need to take into account all the - and + signs before the number
 * If there are no numbers in the string, the function must return 0
 * You are not allowed to use long
 * You are not allowed to declare new variables of “type” array
 * You are not allowed to hard-code special values
 * @s: the pointer to convert
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int j = 0;
	int k = 1;
	int z = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			k *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			z = 1;
			j = (j * 10) + (s[i] - '0');
			i++;
		}
		if (z == 1)
		{
			break;
		}
		i++;
	}
	j *= k;
	return (j);
}
