#include "main.h"
/**
 * *_strncat - a function that concatenates two strings.
 * @dest: first string.
 * @src: second string.
 * @n: numbers of characters of the string src.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, g;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (g = 0; src[g] != '\0' && n--; g++)
	{
		dest[i + g] = src[g];
	}
	dest[i + g] = '\0';
	return (dest);
}
