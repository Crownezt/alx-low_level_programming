#include <stdio.h>
/**
 * main - Write a program that prints the alphabet
 * in lowercase, followed by a new line.
 * You can only use the putchar function (every other
 * function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 *
 * Return: 0 upon success
 */

int main(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{ putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
