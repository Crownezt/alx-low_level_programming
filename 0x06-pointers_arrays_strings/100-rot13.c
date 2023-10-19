#include "main.h"
#include <stdio.h>

/**
 * rot13 -  a function that encodes a string using rot13.
 * You can only use if statement once in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 * @s: the string to be encoded
 * Return: Always 0.
 */

char *rot13(char *s)
{
	int i, j;
	char val1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char val2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == val1[j])
			{
				s[i] = val2[j];
				break;
			}
		}
	}
	return (s);
}
