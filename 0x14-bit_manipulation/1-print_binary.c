#include "main.h"
/**
 * _power - calculate (base and power)
 * @base: base of the exponet
 * @pow: power of the exponet
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int dwe;
	unsigned int m;

	dwe = 1;
	for (m = 1; m <= pow; m++)
		dwe *= base;
	return (dwe);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dar, result;
	char mado;

	mado = 0;
	dar = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dar != 0)
	{
		result = n & dar;
		if (result == dar)
		{
			mado = 1;
			_putchar('1');

		}
		else if (mado == 1 || dar == 1)
		{
			_putchar('0');
		}
		dar >>= 1;
	}
}
