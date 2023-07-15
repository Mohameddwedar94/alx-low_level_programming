#include "main.h"

/**
 * _strlen - finds the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *dr)
{
	size_t m;

	for (m = 0; dr[m]; m++)
		;
	return (m);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int mado;
	ssize_t dwe;

	if (filename == NULL)
		return (-1);
	mado = open(filename, O_WRONLY | O_APPEND);
	if (mado == -1)
		return (-1);
	if (text_content != NULL)
		dwe = write(mado, text_content, _strlen(text_content));
	close(mado);
	if (dwe == -1)
		return (-1);
	return (1);
}