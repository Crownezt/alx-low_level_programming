#include "main.h"
#include <stdio.h>

/**
 * print_array -  a function that prints n elements of an
 * array of integers, followed by a new line.
 * where n is the number of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order
 * as they are stored in the array
 * You are allowed to use printf
 *
 * @a: array of int
 * @n: number of element in the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(",");
		}
	}
		printf("\n");

}
