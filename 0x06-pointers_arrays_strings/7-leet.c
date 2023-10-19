#include "main.h"
#include <stdio.h>

/**
 * leet - Write a function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * You can only use one if in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 *
 * @s: string to be encoded
 *
 * Return: the encoded value
 */

char *leet(char *s)
{
	int i, j;

	char val1[] = "aAeEoOtTlL";
	char val2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == val1[j])
			{
				s[i] = val2[j];
			}
		}
	}
	return (s);
}
