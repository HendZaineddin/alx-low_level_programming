#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * * @s1: first string.
 * @s2: second string.
 * @n: number of bytes.
 * Return: pr.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l, tal1, tal2;
	char *pr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (tal1 = 0; s1[tal1] != '\0'; tal1++)
		;
	for (tal2 = 0; s2[tal2] != '\0'; tal2++)
		;
	pr = malloc(sizeof(char) * (tal1 + 1 + n));

	if (pr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		pr[i] = s1[i];
	}
	for (l = 0; l <= n; l++)
	{
		pr[i + l] = s2[l];
	}
	return (pr);
}
