#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: is the number of times the character _ should be printed.
 *
 */

void print_line(int n)
{
for (; n > 0; n--)
putchar('_');
putchar('\n');
if (n <= 0)
putchar('\n');
}
