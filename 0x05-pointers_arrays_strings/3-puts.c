#include "main.h"
/**
 * _puts - e a function that prints a string, followed by a new line.
 * @str: the string.
 */

void _puts(char *str)
{
	int c;

		for (c = 0; *str != '\0' ; c++)
		{
		_putchar(*str);
		str++;
		}
	_putchar('\n');
}
