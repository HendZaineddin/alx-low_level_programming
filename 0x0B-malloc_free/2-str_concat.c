#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: 0 or m.
 */

char *str_concat(char *s1, char *s2)
{
	int i, h, l;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (h = 0; s2[h] != '\0'; h++)
		;


	m = malloc((h + i + 1) * sizeof(char));

	if (m == 0)
		return (0);

	for (l = 0; l <= i + h; l++)
	{
		if (l < i)
			m[l] = s1[l];
		else
			m[l] = s2[l - i];
	}
	m[l] = '\0';
	return (m);
}
