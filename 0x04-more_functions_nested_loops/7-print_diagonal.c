#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed.
 */

void print_diagonal(int n)
{
	for (; n >= 1; n--)
	{
	if (n <= 0)
	_putchar('\n');
	_putchar(92);
	_putchar('\n');
	}
}
