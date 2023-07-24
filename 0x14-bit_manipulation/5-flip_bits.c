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
	unsigned long int differnce, result;
	unsigned int f, d;

	f = 0;
	result = 1;
	differnce = n ^ m;
	for (d = 0; d < (sizeof(unsigned long int) * 8); d++)
	{
		if (result == (differnce & result))
			d++;
		result <<= 1;
	}

	return (f);
}
