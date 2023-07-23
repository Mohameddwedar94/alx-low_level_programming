#include "main.h"

/**
 * _strlen - find the length of a string
 * @str: pointer to a string
 *
 * Return: length of a string
 */
size_t _strlen(char *str)
{
	size_t m;

	for (m = 0; str[m]; m++)
		;
	return (m);
}

/**
 * append_text_to_file - appends a text at the end of the file.
 * @filename: name of  file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int madof;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	madof = open(filename, O_WRONLY | O_APPEND);
	if (madof == -1)
		return (-1);
	if (text_content != NULL)
		len = write(madof, text_content, _strlen(text_content));
	close(madof);
	if (len == -1)
		return (-1);
	return (1);
}
