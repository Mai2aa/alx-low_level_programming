#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - read a textfile and print it to the POSIX
 * @filename: a pointer to the string in file
 * @letters: the number of chars read and printed
 * Return: the number of read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);
	free(buffer);
	close(fd);
	return (w);
}
