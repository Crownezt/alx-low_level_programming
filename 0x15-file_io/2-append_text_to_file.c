#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists else return -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int letters_num;
	int rwr;

	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);

	if (i == -1)
		return (-1);

	if (text_content)
	{
		for (letters_num = 0; text_content[letters_num]; letters_num++)
			;

		rwr = write(i, text_content, letters_num);

		if (rwr == -1)
			return (-1);
	}

	close(i);

	return (1);
}
