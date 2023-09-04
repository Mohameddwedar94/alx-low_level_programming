#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and print it to POSIX stdout.
 *
 * @filename: A pointer to the name of the file.
 *
 * @letters: The number of letters the
 *           function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t m, f, d;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	m = open(filename, O_RDONLY);
	f = read(o, buffer, letters);
	d = write(STDOUT_FILENO, buffer, r);

	if (m == -1 || f == -1 || d == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (d);
}
