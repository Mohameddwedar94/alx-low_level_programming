#include "main.h"
/**
 * _strlen - returns the lenth of a string
 * @s: the string whose lenth to check 
 *
 *Return: integer lenght of string
 */
int _strlen(char *s)
{	
	int i = 0;
	
	if (!s)
		return (0);
	
		while (*s++)
			i++;
		return (i);
}

/**
 * create_file - creates a file 
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on success 0 on failure
 */
int creat_file(const char *filename, char *text_content);
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);
	
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUN, S_IRUSR | S_TWUSR);
	if (fd == -1)
		return (-1)
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
