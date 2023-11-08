#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print the opcodes of current source code
 * @a: address of main function
 * @num_byte: number of bytes to print
 *
 * Return: void
 */
void print_opcodes(char *a, int num_byte)
{
	int i;

	/* iterate through argc and covert each to hexa for opcode */
	for (i = 0; i < num_byte; i++)
	{
		printf("%.2hhx", a[i]);
		{
			if (i < num_byte - 1)
				printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - print opcode of main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: opcode of main function
 */
int main(int argc, char *argv[])
{

	int num_byte;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_byte = atoi(argv[1]);

	if (num_byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)&main, num_byte);

	return (0);
}
