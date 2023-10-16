#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers
 * @a: the first int to be swapped
 * @b: the second int to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
