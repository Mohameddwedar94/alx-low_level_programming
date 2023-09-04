#include "main.h"

/**
 * _strlen - finds the length of a string
 *
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t m;

	for (m = 0; str[m]; m++)
		;
	return (m);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 *
 * @filename: name of the file
 *
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int md;
	ssize_t dwe;

	if (filename == NULL)
		return (-1);
	md = open(filename, O_WRONLY | O_APPEND);
	if (md == -1)
		return (-1);
	if (text_content != NULL)
		dwe = write(md, text_content, _strlen(text_content));
	close(md);
	if (dwe == -1)
		return (-1);
	return (1);
}
