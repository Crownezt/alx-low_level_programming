#include <stdio.h>
/**
 * main - Write a program that prints all possible
 * combinations of single-digit numbers.
 *
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function (every other
 * function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar four times maximum in your code
 * You are not allowed to use any variable of type char
 *
 * Return: 0 upon success
 */

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		if (i == 0)
			putchar(i + '0');
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
