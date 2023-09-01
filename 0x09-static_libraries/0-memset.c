#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @n: bytes of the memory area.
 * @s: a pointer.
 * @b: the constant byte.
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
