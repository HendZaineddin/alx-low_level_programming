#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed.
 */

void print_diagonal(int n)
{
int h, k;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (h = 1; h <= n; h++)
{
for (k = 1; k <= h; k++)
{
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}
}
