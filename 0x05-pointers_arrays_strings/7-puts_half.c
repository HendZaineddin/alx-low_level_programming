#include "main.h"
/**
 * puts_half - a function that prints half of a string.
 * @str: the string.
 */

void puts_half(char *str)
{
	int i, f = 0;

	for (i = 0; *(str + i) != '\0'; i++)
		;

	if (i % 2 == 0)
		f = i / 2;
	else
		f = (i - 1) / 2;

	for (; str[f] != '\0'; f++)
	{
	_putchar(str[f + 1]);
	}
	_putchar('\n');
}
