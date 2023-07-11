#include "main.h"

/**
 * read_textfile | reads text from a file and print it
 * @filename: name of the file to read
 * @letters: number of the bytes to read
 * Return: number bytes read/printed
 */
ssize_t read_textfile(const char *filename, size_t letters)

	int fd;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	
	fd = open(filename, o_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILEND, &buf[0],bytes);
	close(fd);
	return (bytes);
