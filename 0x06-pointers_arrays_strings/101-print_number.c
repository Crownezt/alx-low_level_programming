#include "main.h"

/**
 * print_number - a function that prints an integer.
 * You can only use _putchar function to print
 * You are not allowed to use long
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values - check the code
 * @n: The int to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int val = n;

	if (n < 0)
	{
		_putchar('-');
		val = -val;
	}
	if ((val / 10) > 0)
		print_number(val / 10);
	_putchar((val % 10) + '0');
}
