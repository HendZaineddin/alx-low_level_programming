#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed.
 */

void print_diagonal(int n)
{
int H, K;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (H = 1; H <= n; H++)
{
for (K = 1; K <= H; K++)
{
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}
}
