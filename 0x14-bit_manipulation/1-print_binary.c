#include "main.h"
/**
 * print_binary - a function that prints the binary.
 * @n: decimal number.
 */

void print_binary(unsigned long int n)
{
	int bits, num;
	char c;

	bits = sizeof(n) * 8;
	num = bits - 1;
	while (num >= 0)
	{
		c = ((n >> num) & 1) ? '1' : '0';
		_putchar(c);
		num--;
	}
}
