#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse.
 * @s:  a string, in reverse.
 */

void print_rev(char *s)
{
int i, g;

for (i = 0; s[i] != '\0'; i++)
{

}

g = i - 1;
for ( ; g >= 0; g--)
{
_putchar(s[g]);
}
_putchar('\n');
}
