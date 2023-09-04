#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check97 - checks for the correct number of arguments
 * @dwe: number of arguments
 *
 * Return: void
 */
void check97(int dwe)
{
	if (dwe != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check98 - checks that file_from exists and can be read
 *
 * @check: checks if true of false
 *
 * @file: file_from name
 *
 * @md_from: file descriptor of file_from, or -1
 * @md_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check98(ssize_t check, char *file, int md_from, int md_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (md_from != -1)
			close(md_from);
		if (md_to != -1)
			close(md_to);
		exit(98);
	}
}

/**
 * check99 - checks that file_to was created and/or can be written to
 * @check: checks if true of false
 * @file: file_to name
 * @md_from: file descriptor of file_from, or -1
 * @md_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check99(ssize_t check, char *file, int md_from, int md_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (md_from != -1)
			close(md_from);
		if (md_to != -1)
			close(md_to);
		exit(99);
	}
}

/**
 * check100 - checks that file descriptors were closed properly
 * @check: checks if true or false
 * @md: file descriptor
 *
 * Return: void
 */
void check100(int check, int md)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close md %d\n", md);
		exit(100);
	}
}
/**
 * main - opies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int md_from, md_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	check97(argc);
	md_from = open(argv[1], O_RDONLY);
	check98((ssize_t)md_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	md_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check99((ssize_t)md_to, argv[2], md_from, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(fd_from, buffer, 1024);
		check98(lenr, argv[1], md_from, md_to);
		lenw = write(md_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		check99(lenw, argv[2], md_from, md_to);
	}
	close_to = close(md_to);
	close_from = close(md_from);
	check100(close_to, md_to);
	check100(close_from, md_from);
	return (0);
}
