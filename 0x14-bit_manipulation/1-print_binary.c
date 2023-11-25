#include "main.h"
/**
 * _power - calculate (base and power)
 * @b: base of the exponet
 * @pow: power of the exponet
 * Return: value of b and power
 */
unsigned long int _power(unsigned int b, unsigned int pow)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= pow; i++)
		num *= b;
	return (num);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, res;
	char len;

	len = 0;
	i = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (i != 0)
	{
		res = n & i;
		if (res == i)
		{
			len = 1;
			_putchar('1');

		}
		else if (len == 1 || i == 1)
		{
			_putchar('0');
		}
		i >>= 1;
	}
}
