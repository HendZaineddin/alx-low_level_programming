#include "main.h"
/**
 * *_strncpy -  a function that copies a string from *src to *dest.
 * *dset: string hold copied charchters.
 * *src: a copied string.
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
