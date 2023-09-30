#include "main.h"
/**
 * get_bit - a function that returns the value of a bit.
 * @n: an interger.
 * @index: index.
 * Return: value or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bits;
	int value;

	bits = (sizeof(n) * 8) - 1;

	if (index > bits)
	{
		return (-1);
	}
	else

	value = n << index ? 1 : 0;
	return (value);
}
