#include "main.h"
/**
 * print_square -  a function that prints a square, followed by a new line.
 * @size:  is the size of the square
 */

void print_square(int size)
{
for (; size >= 1; size--)
_putchar('#');
if (size <= 0)
_putchar('\n');
}
