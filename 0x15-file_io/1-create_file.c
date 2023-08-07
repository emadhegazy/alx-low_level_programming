#include "main.h"

/**
 * create_file - this functon is to Create a file.
 *
 * @filename: is a pointer to the name of the file to create.
 *
 * @text_content: is a pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fdd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fdd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fdd, text_content, len);

	if (fdd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

