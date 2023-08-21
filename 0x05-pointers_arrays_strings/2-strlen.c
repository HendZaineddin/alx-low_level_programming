#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: the string.
 * Return: R.
 */

int _strlen(char *s)
{
	int R;

	for (R = 1; R > 0; R++)
	{
		s++;
		if (*s < '\0')
		{
		break;
		}
	}
return (R);
}
