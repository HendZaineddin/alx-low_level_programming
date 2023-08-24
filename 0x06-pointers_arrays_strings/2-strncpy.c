#include "main.h"
/**
 * *_strncpy -  a function that copies a string from @*src to @*dest.
 * @dest: pointer to distnation.
 * @src: a pointer to input.
 * @n: numbers of characters of the string src.
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
return (dest);
}
