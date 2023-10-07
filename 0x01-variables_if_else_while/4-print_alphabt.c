#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in
 * lowercase, followed by a new line.
 *
 * Print all the letters except q and e
 * You can only use the putchar function (every other
 * function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 *
 * Return: 0 upon success
 */

int main(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
			n++;
		}
	}
	putchar('\n');
	return (0);
}
