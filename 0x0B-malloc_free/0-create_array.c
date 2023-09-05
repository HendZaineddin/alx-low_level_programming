#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars.
 * @size: the size of araay.
 * @c: a specific char.
 * Return: s or 0.
 */

char *create_array(unsigned int size, char c)
{
char *s = malloc(size * sizeof(char));

if (size == 0 || s == 0)
{
return (0);
}

while (size--)
s[size] = c;
return (s);
}
