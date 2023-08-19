#include "main.h"
/**
 * print_square -  a function that prints a square, followed by a new line.
 * @size:  is the size of the square
 */

void print_square(int size)
{
	int s, l;

	l = size;
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	for (; size > 0; size--)
	{
	for (s = l; s > 0; s--)
	_putchar('#');
	_putchar('\n');
}
}
