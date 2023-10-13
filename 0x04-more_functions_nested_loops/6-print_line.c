#include "main.h"

/**
 * print_line -  a function that draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 * Return: a straight line or a new line if n is 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');

}
