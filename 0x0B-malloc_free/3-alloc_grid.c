#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer.
 * @width: rows.
 * @height: columns.
 * Return: NULL or m.
 */

int **alloc_grid(int width, int height)
{
	int **m, h, w;

	m = malloc(height * sizeof(int));

	if (m == 0 || width <= 0 || height <= 0)
	{
		return (NULL);
	}

	else
	{
		for (h = 0; h < height; h++)
		{
			m[h] = malloc(width * sizeof(int));
			if (m[h] == 0)
			{
				while (h--)
				free(m[h]);
				free(m);
			return (NULL);
			}
		for (w = 0; w < width; w++)
			m[h][w] = 0;
		}
	}
return (m);
}
