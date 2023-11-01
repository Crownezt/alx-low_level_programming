#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new lin
 * If you rename the program, it will print the new name,
 * without having to compile it again
 * You should not remove the path before the name of the program
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0 upon success
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
