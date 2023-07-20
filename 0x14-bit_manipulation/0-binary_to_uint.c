#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: point to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *m)
{
	int d;
	unsigned int f;

	f = 0;
	if (!m)
		return (0);
	for (d = 0; m[d] != '\0'; d++)
	{
		if (m[d] != '0' && m[d] != '1')
			return (0);
	}
	for (d = 0; m[d] != '\0'; d++)
	{
		f <<= 1;
		if (m[d] == '1')
			f += 1;
	}
	return (f);
}
