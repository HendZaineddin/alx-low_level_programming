#include "main.h"
/**
 * *_strcat - a function that concatenates two strings.
 * @dest: first string.
 * @src: second string.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, g;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (g = 0; src[g] != '\0'; g++)
		dest[i + g] = src[g];
	dest[i + g] = '\0';

	return (dest);
}
