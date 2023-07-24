#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 *
 * @n: the first number
 *
 * @m: the second number
 *
 * Return: the number of the bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int df, res;
	unsigned int m, d;

	m = 0;
	res = 1;
	df = n ^ m;
	for (d = 0; d < (sizeof(unsigned long int) * 8); d++)
	{
		if (res == (df & res))
			m++;
		res <<= 1;
	}

	return (m);
}
