#include "main.h"

/**
 * print_last_digit - displays the last digit of a number
 * @n: the given number
 * Return: the last digit numer
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
