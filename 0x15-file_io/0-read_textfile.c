#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed else returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t nrd, nwr;
	char *buff;

	if (!filename)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	nrd = read(i, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);

	close(i);

	free(buff);

	return (nwr);
}
