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
	for (g = 0; g > i / 2; g++)
	{
		putchar(str[g]);
	}
}
