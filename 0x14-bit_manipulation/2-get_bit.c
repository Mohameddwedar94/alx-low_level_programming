#include "main.h"

/**
 * get_bit - returns the value of the bit to a given index.
 * @n: checking bits
 * @index: thats to check bit
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int dwe, md;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	dwe = 1 << index;
	md = n & dwe;
	if (md == dwe)
		return (1);

	return (0);
