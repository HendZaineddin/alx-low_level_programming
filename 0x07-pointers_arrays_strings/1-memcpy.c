#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: memory area.
 * @src: memory area.
 * @n: bytes from memory area.
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > i; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

