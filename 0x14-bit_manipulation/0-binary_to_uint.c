#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: point to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int d;
	unsigned int f;

	f = 0;
	if (!b)
		return (0);
	for (d = 0; b[d] != '\0'; d++)
	{
		if (b[d] != '0' && b[d] != '1')
			return (0);
	}
	for (d = 0; b[d] != '\0'; d++)
	{
		f <<= 1;
		if (b[d] == '1')
			f += 1;
	}
	return (f);
}
