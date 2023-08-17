#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: is the number of times the character _ should be printed.
 *
 */

void print_line(int n)
{
if (n <= 0)
putchar('\n');
else
while (n >= 0)
putchar('_');
putchar('\n');
n++;
}
