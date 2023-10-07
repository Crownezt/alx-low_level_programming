#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in
 * lowercase, and then in uppercase, followed by a new line.
 *
 * You can only use the putchar function (every other
 * function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar three times in your code
 *
 * Return: 0 upon success
 */

int main(void)
{
	char n = 'a';
	char m = 'A';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
