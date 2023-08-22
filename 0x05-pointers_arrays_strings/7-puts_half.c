#include "main.h"
/**
 * puts_half - a function that prints half of a string.
 * @str: the string.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		;
	if (i % 2 != 0)
		_putchar(str[i - 1]);
	else

	for (i = ((i - 1) / 2) + 1; *(str + i) != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
