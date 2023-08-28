#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: a string.
 * @accept: a string.
 * Return: y.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int y, x;

	for (x = 0; s[x] != '\0'; x++)
		for (y = 0; accept[y] != s[x]; y++)
			if (accept[y] == '\0')
				return (x);
	return (x);
}
