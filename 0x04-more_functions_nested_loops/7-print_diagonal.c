#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed.
 */

void print_diagonal(int n)
{
	int s, l;

	l = n;
		if (n <= 0)
		{
		_putchar('\n');
		}
		else
			for (; n > 0; n--)
			{
				for (s = l - n; s > 0; s--)
				{
				_putchar(' ');
				}
				_putchar(92);
				_putchar('\n');
			}
}
