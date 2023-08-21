#include "main.h"
/**
 * _puts - e a function that prints a string, followed by a new line.
 * @str: the string.
 */

void _puts(char *str)
{
	int c;

	for (c = 0; c > 0; c++)
	{
		str++;

		if (*str == '\0')
		{
			_putchar('\n');
			break;
		}
		else
			_putchar(*str);
	}

}
