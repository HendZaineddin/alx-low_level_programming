#include "main.h"
/**
 * puts2 - a function that prints every other character of a string.
 * @str: the string of numbers.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
