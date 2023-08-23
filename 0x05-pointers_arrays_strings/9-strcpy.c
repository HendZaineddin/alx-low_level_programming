#include "main.h"
/**
 * *_strcpy - a function that copies the string pointed.
 * @src: first string.
 * @dest: second string.
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int f;

	for (f = 0; *(src + f) != 0; f++)
	{
		dest[f] = src[f];
	if (src[f] == '\0')
	{
		break;
	}
	}

	return (dest);
}
