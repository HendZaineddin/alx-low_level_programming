#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: The first comparison string.
 * @s2: The second comparison string.
 * Return: (*s1 - *s2)
 */

int _strcmp(char *s1, char *s2)
{
	int i, g;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (g = 0; s2[g] != '\0'; g++)
		;

	if (*s1 - *s2 == 0)
		return (0);
	else
		return (s1[0] - s2[0]);
}
