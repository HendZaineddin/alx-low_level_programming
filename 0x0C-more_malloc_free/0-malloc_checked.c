#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked -  a function that allocates memory.
 * @b: unsigned int.
 * Return: 0.
 */

void *malloc_checked(unsigned int b)
{
	int *h = malloc(b);

	if (h == 0)
		exit(98);

	return (h);
}
