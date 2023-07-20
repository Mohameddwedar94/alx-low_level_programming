#include "main.h"
/**
 * _power - calculate (base and power)
 * @base: base of the exponet
 * @pow: power of the exponet
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int number;
	unsigned int m;

	number = 1;
	for (m = 1; m <= pow; m++)
		number *= base;
	return (number);
}
/**
 * print_binary - prints a binary representation of an number
 * @n: number of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dwe, res;
	char md;

	md = 0;
	dwe = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dwe != 0)
	{
		res = n & dwe;
		if (res == dwe)
		{
			md = 1;
			_putchar('1');

		}
		else if (md == 1 || dwe == 1)
		{
			_putchar('0');
		}
		dwe >>= 1;
	}
}
