#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - creates a file
 * @filename: pointer to thname of file
 * @text_context: a pointer to a string
 * Return: 1 on success and -1 when fails
 */
int create_file(const char *filename, char *text_content)
{
	int file, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file, text_content, len);

	if (file == -1 || w == -1)
		return (-1);

	close(file);
	return (1);
}
