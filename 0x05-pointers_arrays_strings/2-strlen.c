#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: the string.
 * Return: R.
 */

int _strlen(char *s)
{
	int R;

	for (R = 0; R > 0; R++)
	{
		if (*s == '\0')
		{
		break;
		}
		s++;
	}
return (R);
}
