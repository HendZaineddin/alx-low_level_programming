#include "main.h"
/**
 * print_square -  a function that prints a square, followed by a new line.
 * @size:  is the size of the square
 */

void print_square(int size)
{
	int H, M;

		for (H = 1; H <= size; H++)
		{
		for (M = 1; M <= size; M++)
		_putchar('#');
		_putchar('\n');
		}
}
