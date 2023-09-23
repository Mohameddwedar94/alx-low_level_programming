#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 *
 * @n: the first number
 *
 * @m: the second number
 *
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int chg, dwe;
	unsigned int d, f;

	d = 0;
	dwe = 1;
	chg = n ^ m;
	for (f = 0; f < (sizeof(unsigned long int) * 8); f++)
	{
		if (dwe == (chg & dwe))
			d++;
		dwe <<= 1;
	}

	return (d);
}
