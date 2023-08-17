#include "main.h"
/**
 * print_square -  a function that prints a square, followed by a new line.
 * @size:  is the size of the square
 */

void print_square(int size)
{
	int h, m;

		for (h = 1; h <= size; h++)
		{
		for (m = 1; m <= size; m++)
		_putchar('#');
		_putchar('\n');
		}
}
