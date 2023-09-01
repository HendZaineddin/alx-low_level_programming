#include "main.h"
/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: pr or NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *pr;

	for (x = 0; s[x] != '\0'; x++)
		for (y = 0; accept[y] != '\0'; y++)
			if (s[x] == accept[y])
			{
				pr = &s[x];
				return (pr);
			}
	return ('\0');
}
