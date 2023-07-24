#include "main.h"

/**
 * clear_bit - set the value of the bit to 0 at a given index.
 *
 * @n: num  of m
 * @index: starting from 0 of the bit that you want to set
 *
 * Return: 1 if it worked, or -1 if the error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int md;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	md = ~(1 << index);
	*n = *n & md;

	return (1);
}
