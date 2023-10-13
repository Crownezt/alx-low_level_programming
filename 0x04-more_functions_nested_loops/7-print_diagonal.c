#include "main.h"
/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: n is the number of times the character \ should be printed
 * Return: a diagonal line of a new line in case of 0
 */

void print_diagonal(int n)
{
	int i;

	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= n; i++)
	{
	for (j = 1; j <= i; j++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
}
