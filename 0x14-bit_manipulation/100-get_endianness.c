#include "main.h"
/**
 * get_endiannes - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int m;
	char *d;

	m = 1;
	d = (char *)&i;

	return (*d);
}
