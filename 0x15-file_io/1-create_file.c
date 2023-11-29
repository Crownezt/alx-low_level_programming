#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success else return -1.
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	int letters_num;
	int rwr;

	if (!filename)
		return (-1);

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (i == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters_num = 0; text_content[letters_num]; letters_num++)
		;

	rwr = write(i, text_content, letters_num);

	if (rwr == -1)
		return (-1);

	close(i);

	return (1);
}
