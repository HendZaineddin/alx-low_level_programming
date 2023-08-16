#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
int N, M, G;

for (N = 0; N <= 9; N++)
{
putchar('0');

for (M = 1; M <= 9; M++)
{
putchar(',');
putchar(' ');

G = N * M;
if (G <= 9)

putchar(' ');

else

putchar((G / 10) + '0');
putchar((G % 10) + '0');

}
putchar('\n');
}
}
