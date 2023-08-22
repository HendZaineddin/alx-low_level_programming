#include "main.h"
/**
 * puts_half - a function that prints half of a string.
 * @str: the string.
 */

void puts_half(char *str)
{
	int i, g;

	for (i = 0; *(str + i) != '\0'; i++)
		;
	for (g = 0; g > i / 2 ; g++)
		;
	for (g = i / 2; *(str + g) != '\0'; g++)
	{
		_putchar(str[g]);
		if (i % 2 != 0)
		_putchar(str[i - 1]);

	}
	_putchar('\n');
}
